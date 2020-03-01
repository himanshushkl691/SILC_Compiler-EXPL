//----------------------Auxiliary Declaration-----------------
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "astree.h"
    #include "astree.c"
    int yylex(void);
    char *yytext;
    FILE *ft;
    struct GSTable *gst;
    struct GSTNode *gst_node_temp;
    struct LSTable *lst;
    struct LSTNode *lst_node_temp;
    struct ParamList *Parserparam;
    struct AST_Node *ast_node_temp;
    struct Stack *stack;
    struct StackNode *tstack;
    struct FieldList *F;
    struct TypeTableNode *RET_TYPE,*curr_typetableentry;
    char *keyword[20] = {"begin", "end", "read", "write", "if", "else", "then", "endif", "while", "do", "endwhile", "repeat", "until", "int", "str", "decl", "enddecl", "break", "continue", "breakpoint"};
%}

%union{
    struct AST_Node *node;
};

/**/
%type <node> _BREAK _CONTINUE _BREAKPOINT   _INITIALIZE _ALLOC  _FREE
%type <node> GDeclBlock GDeclList GDecl GIdList GId
%type <node> LDecl LDeclBlock LDeclList IdList Type
%type <node> TypeDefBlock   TypeDefList TypeDef FieldDeclList   FieldDecl   Field
%type <node> Param ParamList ArgList
%type <node> FnDef FnDefBlock MainBlock
%type <node> Program
%type <node> Body Slist stmt Inputstmt Outputstmt Assgstmt Ifstmt Whilestmt RepeatUntil DoWhile
%type <node> _NUM _STRING
%type <node> expr stringExp _ID id _END _INT    _STR    _NULL
/*TOKENS*/
//declaration
%token _DECL _ENDDECL   _TYPE   _ENDTYPE
//operator
%token _PLUS _MINUS _MUL _DIV _MOD
//constants and identifiers
%token _NUM _STRING _ID
//data types
%token _INT _STR
//relop
%token _LT _LE _GT _GE _NE _EQ
//read and write
%token _READ _WRITE
//begin and end of function
%token _BEGIN _END
//if-else
%token _IF _THEN _ELSE _ENDIF
//while and do-while
%token _WHILE _DO _ENDWHILE
//repeat-until
%token _REPEAT _UNTIL
//break, continue, breakpoint
%token _BREAK _CONTINUE _BREAKPOINT _MAIN   _RETURN _NULL   _FREE   _ALLOC  _INITIALIZE
/*ASSOCIATIVITY*/
%left _LT _LE
%left _GT _GE
%left _EQ _NE
%left _PLUS _MINUS
%left _MUL _DIV _MOD
/*STARTING Non-Terminal*/
%start Program

%%
//---------------------------Rules----------------------------

//------------------------MainBlock---------------------------
MainBlock   :   _INT    _MAIN   '(' ')' '{' LDeclBlock  Body    '}'
                                            {
                                                if(RET_TYPE != TypeTableLookUp(T,"int"))
                                                {
                                                    printf("line %d :Return type does not match\n",line);
                                                    exit(1);
                                                }
                                                RET_TYPE = NULL;
                                                gst = GSTInstall(gst,TypeTableLookUp(T,"int"),FUNCTION,"main",1,Parserparam,lst);
                                                gst_node_temp = GSTLookUp(gst,"main");
                                                gst_node_temp->lst = lst;
                                                lst = LSTDelete(lst);
                                                $$ = makeTreeNode(FUNCTION,TypeTableLookUp(T,"int"),"main",-1,-1,$7,NULL,gst_node_temp,"main");
                                                Parserparam = ParamDelete(Parserparam);
                                                printGST(gst);
                                                ASTPrintTree($$);
                                                printf("\n");
                                                stack = push(stack,$$,gst_node_temp->lst);
                                                $$ = ASTDelete($$);
                                            }
;

//-------------------------Body-------------------------------
Body    :   _BEGIN  Slist   _RETURN stringExp ';'   _END{
								RET_TYPE = $4->type;
								ast_node_temp = makeTreeNode(RETURN,TypeTableLookUp(T,"void"),NULL,-1,-1,$4,NULL,NULL,"RETURN");
								$$ = makeTreeNode(STATEMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,$2,ast_node_temp,NULL,"STATEMENT");
							}
|   _BEGIN  _RETURN stringExp   ';' _END    		{
								RET_TYPE = $3->type;
								ast_node_temp = makeTreeNode(RETURN,TypeTableLookUp(T,"void"),NULL,-1,-1,$3,NULL,NULL,"RETURN");
								$$ = makeTreeNode(STATEMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,NULL,ast_node_temp,NULL,"STATEMENT");
							};

//-------------------------Program----------------------------
Program :   TypeDefBlock GDeclBlock   FnDefBlock   MainBlock 	
                                    {
                                        $$ = NULL;
                                        printf("Parsing Completed\n");
                                        generateHeader(ft);
                                        int i = 0;
                                        while(StackGetSize(stack)){
                                                tstack = top(stack);
                                                stack = pop(stack);
                                            if(i == 0){
                                                gst_node_temp = GSTLookUp(gst,"main");
                                                fprintf(ft,"CALL _F%d\n",gst_node_temp->binding_addr);
                                                generateExit(ft);
                                                i = 1;
                                            }
                                            code_generator(ft,tstack->ast,gst,tstack->lst);
                                        }
                                        exit(1);
							        }
|   TypeDefBlock GDeclBlock  MainBlock   		
                                    {
                                        $$ = NULL;
                                        printf("Parsing Completed\n");
                                        generateHeader(ft);
                                        int i = 0;
                                        while(StackGetSize(stack)){
                                            tstack = top(stack);
                                            stack = pop(stack);
                                            if(i == 0){
                                                gst_node_temp = GSTLookUp(gst,"main");
                                                fprintf(ft,"CALL _F%d\n",gst_node_temp->binding_addr);
                                                generateExit(ft);
                                                i = 1;
                                            }
                                            code_generator(ft,tstack->ast,gst,tstack->lst);
                                        }
                                        exit(1);
							        }
|   TypeDefBlock MainBlock						
                                    {
                                        $$ = NULL;
                                        printf("Parsing Completed\n");
                                        generateHeader(ft);
                                        int i = 0;
                                        while(StackGetSize(stack)){
                                            tstack = top(stack);
                                            stack = pop(stack);
                                            if(i == 0){
                                                gst_node_temp = GSTLookUp(gst,"main");
                                                fprintf(ft,"CALL _F%d\n",gst_node_temp->binding_addr);
                                                generateExit(ft);
                                                        i = 1;
                                                }
                                            code_generator(ft,tstack->ast,gst,tstack->lst);
                                        }
                                        exit(1);
							        }
;

//-----------------------Type Definitions---------------------
TypeDefBlock:                               {}
|   _TYPE TypeDefList   _ENDTYPE            {printTypeTable(T);}
;
TypeDefList:    TypeDefList TypeDef         {}
|   TypeDef                                 {}
;
TypeDef:    _ID '{' FieldDeclList   '}'     {
                                                T = installTypeTableNode(T,$1->varname,8,F);
                                                ValidateFieldList(TypeTableLookUp(T,$1->varname));
                                                F = initFieldList();
                                            }
;
FieldDeclList:  FieldDeclList   FieldDecl   {}
|   FieldDecl                               {}
;
FieldDecl:  Type    _ID    ';'         {F = installField(T,F,$2->varname,top_string(TYPE_STACK));TYPE_STACK = pop_string(TYPE_STACK);}
;

//-----------------------Global Declarations------------------
GDeclBlock  :   _DECL   GDeclList   _ENDDECL    {}
|   _DECL   _ENDDECL                            {}
;
GDeclList   :   GDeclList   GDecl               {}
|   GDecl                                       {}
;
GDecl   :   Type    GIdList ';'                 {TYPE_STACK = pop_string(TYPE_STACK);}
;
GIdList :   GIdList ',' GId                     {}
|   GId                                         {}
;
GId :   _ID						                {
								                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),VARIABLE,$1->varname,1,NULL,lst);
                                                    lst = LSTDelete(lst);
							                    }
|   _ID '[' _NUM    ']'					        {
								                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),ARRAY_VARIABLE,$1->varname,$3->val,NULL,lst);
                                                    lst = LSTDelete(lst);
							                    }
|   _ID '(' ParamList   ')'				        {
                                                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),FUNCTION,$1->varname,1,Parserparam,lst);
                                                    lst = LSTDelete(lst);
                                                    Parserparam = ParamDelete(Parserparam);
							                    }
|   _ID '(' ')'						            {
								                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),FUNCTION,$1->varname,1,Parserparam,lst);
                                                    lst = LSTDelete(lst);
                                                    Parserparam = ParamDelete(Parserparam);
							                    }
;

//------------------------Function Defition-------------------
FnDefBlock  :   FnDefBlock  FnDef               {}
|   FnDef                                       {}
;
FnDef   :   Type    _ID '(' ParamList   ')' '{' LDeclBlock  Body    '}'
                                            {
                                                gst_node_temp = GSTLookUp(gst,$2->varname);
                                                if(!gst_node_temp){
                                                    printf("line %d :\"%s\" function not declared\n",line,$2->varname);
                                                    exit(1);
                                                }
                                                if(TypeTableLookUp(T,top_string(TYPE_STACK)) != gst_node_temp->type){
                                                    printf("line %d :Invalid return type for \"%s\"\n",line,$2->varname);
                                                    exit(1);
                                                }
                                                if(!checkParamList(Parserparam,gst_node_temp->param)){
                                                    printf("line %d :Number of Formal Arguments does not match with declaration\n",line);
                                                    exit(1);
                                                }
                                                if(RET_TYPE != gst_node_temp->type){
                                                    printf("*line %d :Return type does not match\n",line);
                                                    exit(1);
                                                }
                                                RET_TYPE = NULL;
                                                gst_node_temp->lst = lst;
                                                lst = LSTDelete(lst);
                                                Parserparam = ParamDelete(Parserparam);
                                                $$ = makeTreeNode(FUNCTION,TypeTableLookUp(T,top_string(TYPE_STACK)),$2->varname,-1,-1,$8,NULL,gst_node_temp,"FUNCTION");
                                                TYPE_STACK = pop_string(TYPE_STACK);
                                                printGST(gst);
                                                ASTPrintTree($$);
                                                printf("\n");
                                                stack = push(stack,$$,gst_node_temp->lst);
                                                $$ = ASTDelete($$);
                                            }
|   Type    _ID '(' ')' '{' LDeclBlock  Body    '}' 
                                            {
                                                gst_node_temp = GSTLookUp(gst,$2->varname);
                                                if(!gst_node_temp){
                                                    printf("line %d :\"%s\" function not declared\n",line,$2->varname);
                                                    exit(1);
                                                }
                                                if(TypeTableLookUp(T,top_string(TYPE_STACK)) != gst_node_temp->type){
                                                    printf("line %d :Invalid return type for \"%s\"\n",line,$2->varname);
                                                    exit(1);
                                                }
                                                if(!checkParamList(Parserparam,gst_node_temp->param)){
                                                    printf("line %d :Number of Formal Arguments does not match with declaration\n",line);
                                                    exit(1);
                                                }
                                                if(RET_TYPE != gst_node_temp->type){
                                                    printf("line %d :Return type does not match\n",line);
                                                    exit(1);
                                                }
                                                RET_TYPE = NULL;
                                                gst_node_temp->lst = lst;
                                                lst = LSTDelete(lst);
                                                Parserparam = ParamDelete(Parserparam);
                                                $$ = makeTreeNode(FUNCTION,TypeTableLookUp(T,top_string(TYPE_STACK)),$2->varname,-1,-1,$7,NULL,gst_node_temp,"FUNCTION");
                                                TYPE_STACK = pop_string(TYPE_STACK);
                                                printGST(gst);
                                                ASTPrintTree($$);
                                                printf("\n");
                                                stack = push(stack,$$,gst_node_temp->lst);
                                                $$ = ASTDelete($$);
                                            }
;

//-------------------------Parameter List---------------------
ParamList   :   ParamList   ',' Param           {}
|   Param                                       {}
;
Param   :   Type    _ID                         {
                                                    Parserparam = ParamInsert(Parserparam,$2->varname,TypeTableLookUp(T,top_string(TYPE_STACK)),VARIABLE);
                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                }
;

//-----------------------Local Declaration--------------------
LDeclBlock  :   _DECL   LDeclList   _ENDDECL    {lst = ParamToLSTInstall(lst,Parserparam);}
|   _DECL   _ENDDECL                            {lst = ParamToLSTInstall(lst,Parserparam);}
;
LDeclList   :   LDeclList   LDecl               {}
|   LDecl                                       {}
;
LDecl   :   Type    IdList  ';'                 {TYPE_STACK = pop_string(TYPE_STACK);}
;
IdList  :   IdList  ',' _ID                     {lst = LSTInstall(lst,$3->varname,TypeTableLookUp(T,top_string(TYPE_STACK)),VARIABLE);}
|   _ID                                         {lst = LSTInstall(lst,$1->varname,TypeTableLookUp(T,top_string(TYPE_STACK)),VARIABLE);}
;

//----------------------ArgList---------------------------
ArgList :   ArgList ',' stringExp               {
                                                    $1 = insertASTParam($1,$3);
                                                    $$ = $1;
                                                }
|   stringExp                                   {
                                                    $$ = $1;
                                                }
;

//-----------------------Type-----------------------------
Type    :   _INT                {TYPE_STACK = push_string(TYPE_STACK,"int");}
|   _STR                        {TYPE_STACK = push_string(TYPE_STACK,"str");}
|   _ID                         {TYPE_STACK = push_string(TYPE_STACK,$1->varname);}
;

//-----------------------Statement List-------------------
Slist:  Slist stmt                          {$$ = makeTreeNode(STATEMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,$1,$2,NULL,"STATEMENT");}
|   stmt                                    {$$ = $1;}
;
//---------------------Type of Statements-----------------
stmt:	Inputstmt                           {$$ = $1;}
|	Outputstmt                              {$$ = $1;}
|	Assgstmt                                {$$ = $1;}
|	Ifstmt                                  {$$ = $1;}
|	Whilestmt                               {$$ = $1;}
|   RepeatUntil                             {$$ = $1;}
|   DoWhile                                 {$$ = $1;}
|   _BREAK ';'                              {$$ = $1;}
|   _CONTINUE ';'                           {$$ = $1;}
|   _BREAKPOINT ';'                         {$$ = $1;}
|   _INITIALIZE    '(' ')'  ';'             {$$ = $1;}
;
Inputstmt:  _READ '(' id ')' ';'            {
                                                if($3->nodetype == FUNCTION)
                                                {
                                                    printf("*line %d: function cannot be a parameter to read\n",line);
                                                    exit(0);
                                                }
                                                if($3->type == TypeTableLookUp(T,"int") || $3->type == TypeTableLookUp(T,"str"))
                                                    $$ = makeTreeNode(READ,TypeTableLookUp(T,"void"),NULL,-1,-1,$3,NULL,NULL,"Read");
                                                else
                                                {
                                                    printf("*line %d: invalid parameter type to read\n",line);
                                                    exit(0);
                                                }
                                            }
;
Outputstmt: _WRITE '(' stringExp ')' ';'    {$$ = makeTreeNode(WRITE,TypeTableLookUp(T,"void"),NULL,-1,-1,$3,NULL,NULL,"Write");}
;
Assgstmt:   id '='  _ALLOC  '(' ')' ';'     {
                                                if($1->type != TypeTableLookUp(T,"int") && $1->type != TypeTableLookUp(T,"str") && $1->nodetype != FUNCTION)
                                                    $$ = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,$1,$3,NULL,"=");
                                                else
                                                {
                                                    printf("*line %d: alloc() must be called for user-defined data types\n",line);
                                                    exit(0);
                                                }
                                            }
|   id  '=' _FREE   '(' id  ')' ';'         {
                                                if($1->type == TypeTableLookUp(T,"int") && $1->nodetype != FUNCTION && $5->type != TypeTableLookUp(T,"int") && $5->type != TypeTableLookUp(T,"str") && $5->nodetype != ARRAY_VARIABLE && $5->nodetype != FUNCTION)
                                                {
                                                    $3->left = $5;
                                                    $$ = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,$1,$3,NULL,"=");
                                                }
                                                else
                                                {
                                                    printf("*line %d: Semantic Error for Free()\n",line);
                                                    exit(0);
                                                }
                                            }
|   id  '=' stringExp ';'                   {
                                                if($1->type == $3->type && ($1->nodetype != FUNCTION))
                                                    $$ = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,$1,$3,NULL,"=");
                                                else{
                                                    printf("line %d :Invalid assignment to \"%s\"\n",line,$1->varname);
                                                    exit(1);
                                                }
                                            }
|   id '=' _NULL    ';'                     {
                                                if($1->type != TypeTableLookUp(T,"int") && $1->type != TypeTableLookUp(T,"str") && $1->nodetype != FUNCTION)
                                                    $$ = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,$1,$3,NULL,"=");
                                                else
                                                {
                                                    printf("*line %d: NULL cannot be assigned to primitive data-types\n",line);
                                                    exit(0);
                                                } 
                                            }
;
stringExp:  expr    {$$ = $1;}
|   _STRING {$$ = $1;}
;
Ifstmt:	_IF '(' expr ')' _THEN Slist _ELSE Slist _ENDIF ';' {
                                                                if(!typeCheckBool($3)){
                                                                    printf("line %d: Invalid conditional statement\n",line);
                                                                    exit(1);
                                                                }
                                                                struct AST_Node *temp1 = makeTreeNode(IF,TypeTableLookUp(T,"void"),NULL,-1,-1,$3,$6,NULL,"IF");
                                                                struct AST_Node *temp2 = makeTreeNode(ELSE,TypeTableLookUp(T,"void"),NULL,-1,-1,$8,NULL,NULL,"ELSE");
                                                                $$ = makeTreeNode(IF_ELSE,TypeTableLookUp(T,"void"),NULL,-1,-1,temp1,temp2,NULL,"IF_ELSE");
                                                            }
|	_IF '(' expr ')' _THEN Slist _ENDIF ';'                 {
                                                                if(!typeCheckBool($3)){
                                                                    printf("line %d :Invalid boolean statement\n",line);
                                                                    exit(1);
                                                                }
                                                                struct AST_Node *temp1 = makeTreeNode(IF,TypeTableLookUp(T,"void"),NULL,-1,-1,$3,$6,NULL,"IF");
                                                                $$ = makeTreeNode(IF_ELSE,TypeTableLookUp(T,"void"),NULL,-1,-1,temp1,NULL,NULL,"IF_ELSE");
                                                            }
;
Whilestmt: _WHILE '(' expr ')' _DO Slist _ENDWHILE ';'      {
                                                                if(typeCheckBool($3))
                                                                    $$ = makeTreeNode(WHILE,TypeTableLookUp(T,"void"),NULL,-1,-1,$3,$6,NULL,"WHILE");
                                                                else{
                                                                    printf("line %d :Invalid bool statement\n",line);
                                                                    exit(1);
                                                                }
                                                            }
;
RepeatUntil:    _REPEAT '{' Slist '}' _UNTIL '(' expr ')' ';'   {
                                                                    if(typeCheckBool($7))
                                                                        $$ = makeTreeNode(REPEAT_UNTIL,TypeTableLookUp(T,"void"),NULL,-1,-1,$3,$7,NULL,"REPEAT_UNTIL");
                                                                    else{
                                                                        printf("line %d :Invalid bool statement\n",line);
                                                                        exit(1);
                                                                    }
                                                                }
;
DoWhile:    _DO '{' Slist '}' _WHILE '(' expr ')' ';'   {
                                                            if(typeCheckBool($7))
                                                                $$ = makeTreeNode(DO_WHILE,TypeTableLookUp(T,"void"),NULL,-1,-1,$3,$7,NULL,"DO_WHILE");
                                                            else{
                                                                printf("line %d :Invalid bool statement\n",line);
                                                                exit(1);
                                                            }
                                                        }
;
//--------------------------Expressions-----------------------
expr:   expr _PLUS  expr    {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,PLUS,-1,$1,$3,NULL,"+");
    else{
        printf("line %d :Invalid operand\n",line);
        exit(1);
    }
}
|   expr _MINUS expr     {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,MINUS,-1,$1,$3,NULL,"-");
    else{
        printf("line %d :Invalid operand\n",line);
        exit(1);
    }
}
|   expr _MUL expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,MUL,-1,$1,$3,NULL,"*");
    else{
        printf("line %d :Invalid operand\n",line);
        exit(1);
    }
}
|   expr _DIV expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,DIV,-1,$1,$3,NULL,"/");
    else{
        printf("line %d :Invalid operand\n",line);
        exit(1);
    }
}
|   expr _MOD expr {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,MOD,-1,$1,$3,NULL,"%");
    else{
        printf("line %d :Invalid operand\n",line);
        exit(1);
    }
}
|   expr _LT expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,LT,-1,$1,$3,NULL,"<");
    else{
        printf("line %d :Invalid Operator\n",line);
        exit(1);
    }
}
|   expr _LE expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,LE,-1,$1,$3,NULL,"<=");
    else{
        printf("line %d :Invalid Operator\n",line);
        exit(1);
    }
}
|   expr _GT expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,GT,-1,$1,$3,NULL,">");
    else{
        printf("line %d :Invalid Operator\n",line);
        exit(1);
    }
}
|   expr _GE expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,GE,-1,$1,$3,NULL,">=");
    else{
        printf("line %d :Invalid Operator\n",line);
        exit(1);
    }
}
|   expr _NE expr   {
    if((typeCheckExp($1) || (!typeCheckExp($1) && !typeCheckBool($1))) && (typeCheckExp($3) || (!typeCheckExp($3) && !typeCheckBool($3))))
        $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NE,-1,$1,$3,NULL,"!=");
    else{
        printf("line %d :Invalid Operator\n",line);
        exit(1);
    }
}
|   expr _EQ expr   {
    if((typeCheckExp($1) || (!typeCheckExp($1) && !typeCheckBool($1))) && (typeCheckExp($3) || (!typeCheckExp($3) && !typeCheckBool($3))))
        $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,EQ,-1,$1,$3,NULL,"==");
    else{
        printf("line %d :Invalid Operator\n",line);
        exit(1);
    }
}
|   '(' expr ')'                    {$$ = $2;}
|   _NUM                            {$$ = $1;}
|   id                              {$$ = $1;}
;
//----------------------------Identifiers-----------------------
id: _ID {
    $$ = $1;
    lst_node_temp = LSTLookUp(lst,$1->varname);
    if(lst_node_temp)
        $$->type = lst_node_temp->type;
    else{
        gst_node_temp = GSTLookUp(gst,$1->varname);
        if(!gst_node_temp){
            printf("line %d :Variable \"%s\" not declared\n",line,$$->varname);
            exit(1);
        }
        else
            $$->type = gst_node_temp->type;
    }
}
|   _ID '[' expr ']' {
    if($3->type != TypeTableLookUp(T,"int")){
        printf("line %d :Invalid index\n",line);
        exit(1);
    }
    lst_node_temp = LSTLookUp(lst,$1->varname);
    if(lst_node_temp){
        if(lst_node_temp->type_of_var != ARRAY_VARIABLE){
            printf("line %d :Variable \"%s\" not of array type\n",line,$1->varname);
            exit(1);
        }
        $1->type = lst_node_temp->type;
        $$ = makeTreeNode(ARRAY_VARIABLE,$1->type,$1->varname,-1,-1,$1,$3,NULL,"ARRAY_VARIABLE");
    }
    else{
        gst_node_temp = GSTLookUp(gst,$1->varname);
        if(!gst_node_temp)
        {
            printf("line %d :Variable \"%s\" not declared\n",line,$1->varname);
            exit(1);            
        }
        else{
            if(gst_node_temp->type_of_var != ARRAY_VARIABLE){
                printf("line %d :Variable \"%s\" not of array type\n",line,$1->varname);
                exit(1);
            }
            $1->type = gst_node_temp->type;
            $$ = makeTreeNode(ARRAY_VARIABLE,$1->type,$1->varname,-1,-1,$1,$3,gst_node_temp,"ARRAY_VARIABLE");
        }
    }
}
|   _ID '(' ArgList ')' {
    gst_node_temp = GSTLookUp(gst,$1->varname);
    if(!gst_node_temp){
        printf("line %d :Function \"%s\" not declared\n",line,$1->varname);
        exit(1);
    }
    if(gst_node_temp->type_of_var != FUNCTION){
        printf("line %d :\"%s\" not a function\n",line,$1->varname);
        exit(1);
    }
    if(!checkASTParam(gst_node_temp->param,$3)){
        printf("line %d :Wrong arguments in \"%s\", does not match with declaration\n",line,$1->varname);
        exit(1);
    }
    $1->nodetype = FUNCTION;
    $1->type = gst_node_temp->type;
    $1->param = (struct AST_Node *)malloc(sizeof(struct AST_Node));
    $1->param = $3;
    $3 = NULL;
    $$ = $1;
}
|   _ID '(' ')' {
    gst_node_temp = GSTLookUp(gst,$1->varname);
    if(!gst_node_temp){
        printf("line %d :Function \"%s\" not declared\n",line,$1->varname);
        exit(1);
    }
    if(gst_node_temp->type_of_var != FUNCTION){
        printf("line %d :\"%s\" not a function\n",line,$1->varname);
        exit(1);
    }
    if(gst_node_temp->param->size != 0){
        printf("line %d :Wrong arguments in \"%s\", does not match with declaration\n",line,$1->varname);
        exit(1);
    }
    $1->nodetype = FUNCTION;
    $1->type = gst_node_temp->type;
    $1->param = NULL;
    $$ = $1;
}
|   Field                           {$$ = $1;}
;

//----------------------------Field-------------------------
Field:  Field   '.' _ID     {
                                struct FieldListNode *found = FieldListLookUp(curr_typetableentry,$3->varname);
                                if(!found)
                                {
                                    printf("*line %d: \"%s\" does not contain \"%s\" as a field\n",line,curr_typetableentry->name,$3->varname);
                                    exit(1);
                                }
                                $3->type = found->type;
                                $$ = makeTreeNode(FIELD,$3->type,$3->varname,-1,-1,$1,$3,NULL,"FIELD");
                                curr_typetableentry = found->type;
                            }
|   _ID '.' _ID             {
                                curr_typetableentry = NULL;
                                lst_node_temp = LSTLookUp(lst,$1->varname);
                                if(lst_node_temp)
                                    curr_typetableentry = lst_node_temp->type;
                                else
                                {
                                    gst_node_temp = GSTLookUp(gst,$1->varname);
                                    if(!gst_node_temp)
                                    {
                                        printf("*line %d: \"%s\" not declared\n",line,$1->varname);
                                        exit(1);
                                    }
                                    curr_typetableentry = gst_node_temp->type;
                                }
                                struct FieldListNode *found = FieldListLookUp(curr_typetableentry,$3->varname);
                                if(!found)
                                {
                                    printf("*line %d: \"%s\" does not contain \"%s\" as a field\n",line,curr_typetableentry->name,$3->varname);
                                    exit(1);
                                }
                                $1->type = curr_typetableentry;
                                $3->type = found->type;
                                $$ = makeTreeNode(FIELD,$3->type,$3->varname,-1,-1,$1,$3,NULL,"FIELD");
                                curr_typetableentry = found->type;
                            }
;
%%
//-------------------------Auxiliary Functions--------------------------
void yyerror(const char *err){
    printf("**%s at line number %d\n",err,line);
    return;
}

int main(int argc,char *argv[]){
    gst = init_GSTable();
    lst = init_LSTable();
    T = initTypeTable();
    F = initFieldList();
    TYPE_STACK = init_StringStack();
    Parserparam = init_ParamList();
    stack = init_Stack();
    curr_typetableentry = NULL;
    ADDR = 4096;
    LABEL = 0;
    RET_TYPE = NULL;
    line = 1;
    if(argc > 1){
		printf("Generating file as %s\n",argv[1]);
		ft = fopen(argv[1],"w");
		yyparse();
	}
	else{
		printf("Generating file as code.xsm\n");
		ft = fopen("code.xsm","w");
		yyparse();
	}
    return 1;
}
