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
    struct AST_Node *ast_node_temp,*paramAST;
    struct MethodListNode *method_list_node_temp;
    struct Stack *stack;
    struct StackNode *tstack;
    struct FieldList *F;
    struct TypeTableNode *RET_TYPE,*curr_typetableentry;
    struct ClassTableNode *curr_classtableentry;
    char *keyword[20] = {"begin", "end", "read", "write", "if", "else", "then", "endif", "while", "do", "endwhile", "repeat", "until", "int", "str", "decl", "enddecl", "break", "continue", "breakpoint"};
%}

%union{
    struct AST_Node *node;
};

/**/
%type <node> _BREAK _CONTINUE _BREAKPOINT   _INITIALIZE _ALLOC  _FREE   _NEW    _DELETE
%type <node> GDeclBlock GDeclList GDecl GIdList GId
%type <node> LDecl LDeclBlock LDeclList IdList Type
%type <node> TypeDefBlock   TypeDefList TypeDef FieldDeclList   FieldDecl   Field   FieldFunction
%type <node> Param ParamList ArgList    NewArgList
%type <node> FnDef FnDefBlock MainBlock
%type <node> Program
%type <node> Body Slist stmt Inputstmt Outputstmt Assgstmt Ifstmt Whilestmt RepeatUntil DoWhile
%type <node> _NUM _STRING
%type <node> expr stringExp _ID id _END _INT    _STR    _NULL
%type <node> ClassDefBlock   ClassDef   ClassDefList    Cname   CFieldList  CMethodDecl CMethodDef  CMDecl  _SELF
/*TOKENS*/
//declaration
%token _DECL _ENDDECL   _TYPE   _ENDTYPE    _CLASS  _ENDCLASS   _EXTENDS    _SELF
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
%token _BREAK _CONTINUE _BREAKPOINT _MAIN   _RETURN _NULL   _FREE   _ALLOC  _INITIALIZE _NEW    _DELETE
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
                                                gst = GSTInstall(gst,TypeTableLookUp(T,"int"),NULL,FUNCTION,"main",1,Parserparam,lst);
                                                gst_node_temp = GSTLookUp(gst,"main");
                                                gst_node_temp->lst = lst;
                                                lst = LSTDelete(lst);
                                                $$ = makeTreeNode(FUNCTION,TypeTableLookUp(T,"int"),NULL,"main",-1,-1,$7,NULL,gst_node_temp,"main");
                                                Parserparam = ParamDelete(Parserparam);
                                                ASTPrintTree($$);
                                                printf("\n");
                                                stack = push(stack,$$,gst_node_temp->lst,NULL);
                                                $$ = ASTDelete($$);
                                            }
;

//-------------------------Body-------------------------------
Body    :   _BEGIN  Slist   _RETURN stringExp ';'   _END{
								RET_TYPE = $4->type;
								ast_node_temp = makeTreeNode(RETURN,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$4,NULL,NULL,"RETURN");
								$$ = makeTreeNode(STATEMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$2,ast_node_temp,NULL,"STATEMENT");
							}
|   _BEGIN  _RETURN stringExp   ';' _END    		{
								RET_TYPE = $3->type;
								ast_node_temp = makeTreeNode(RETURN,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$3,NULL,NULL,"RETURN");
								$$ = makeTreeNode(STATEMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,NULL,ast_node_temp,NULL,"STATEMENT");
							};

//-------------------------Program----------------------------
Program :   TypeDefBlock ClassDefBlock  GDeclBlock   FnDefBlock   MainBlock 	
                                    {
                                        $$ = NULL;
                                        printf("Parsing Completed\n");
                                        printGST(gst);
                                        printf("\n");
                                        printClassTable(C);
                                        printf("\n");
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
                                            printLST(tstack->lst);
                                            printf("\n");
                                            code_generator(ft,tstack->ast,gst,tstack->lst,tstack->class);
                                        }
                                        exit(1);
							        }
|   TypeDefBlock ClassDefBlock  GDeclBlock  MainBlock   		
                                    {
                                        $$ = NULL;
                                        printf("Parsing Completed\n");
                                        printGST(gst);
                                        printf("\n");
                                        printClassTable(C);
                                        printf("\n");
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
                                            printLST(tstack->lst);
                                            printf("\n");
                                            code_generator(ft,tstack->ast,gst,tstack->lst,tstack->class);
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
                                                if(F->entry > 8)
                                                {
                                                    printf("*line %d: User-Defined data type cannot have more than 8 field\n",line);
                                                    exit(1);
                                                }
                                                T = installTypeTableNode(T,$1->varname,8,F);
                                                ValidateFieldList(TypeTableLookUp(T,$1->varname),NULL);
                                                F = initFieldList();
                                            }
;
FieldDeclList:  FieldDeclList   FieldDecl   {}
|   FieldDecl                               {}
;
FieldDecl:  Type    _ID    ';'              {
                                                if(!class_section)
                                                    F = installField(T,C,F,$2->varname,top_string(TYPE_STACK));
                                                else
                                                    C->tail = installClassFieldNode(C->tail,C,T,$2->varname,top_string(TYPE_STACK));
                                                TYPE_STACK = pop_string(TYPE_STACK);
                                            }
;

//-----------------------Class Declarations------------------
ClassDefBlock   :                                                                               {}
|   _CLASS  ClassDefList    _ENDCLASS                                                           {}
;
ClassDefList    :   ClassDefList    ClassDef                                                    {}
|   ClassDef
;
ClassDef    :   Cname   '{' _DECL   CFieldList   CMethodDecl _ENDDECL    CMethodDef   '}'       {
                                                                                                    if(C->tail->fieldCount > 8)
                                                                                                    {
                                                                                                        printf("*line %d : Class cannot have more than 8 field\n",line);
                                                                                                        exit(1);
                                                                                                    }
                                                                                                    if(C->tail->methodCount > 8)
                                                                                                    {
                                                                                                        printf("*line %d : Class cannot have more than 8 methods\n",line);
                                                                                                        exit(1);
                                                                                                    }
                                                                                                    ValidateFieldList(NULL,ClassTableLookUp(C,top_string(TYPE_STACK)));
                                                                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                                                                }
;
Cname   :   _ID                                                                                 {
                                                                                                    C = installClassTableNode(C,T,$1->varname,NULL);
                                                                                                    TYPE_STACK = push_string(TYPE_STACK,$1->varname);
                                                                                                }
|   _ID _EXTENDS    _ID                                                                         {
                                                                                                    if(!ClassTableLookUp(C,$3->varname))
                                                                                                    {
                                                                                                        printf("*line %d : Class \"%s\" not defined\n",line,$3->varname);
                                                                                                        exit(0);
                                                                                                    }
                                                                                                    C = installClassTableNode(C,T,$1->varname,$3->varname);
                                                                                                    C->tail = inheritMemberField(C->tail);
                                                                                                    C->tail = inheritMethod(C->tail);
                                                                                                    TYPE_STACK = push_string(TYPE_STACK,$1->varname);
                                                                                                }
;
CFieldList  :                                                                                   {}
|   CFieldList FieldDecl                                                                        {}
;
CMethodDecl :   CMethodDecl CMDecl                                                              {}
|   CMDecl                                                                                      {}
;
CMDecl  :   Type _ID '(' ParamList   ')' ';'                                                    {
                                                                                                    C->tail = installClassMethodListNode(C->tail,C,TypeTableLookUp(T,top_string(TYPE_STACK)),$2->varname,Parserparam);
                                                                                                    Parserparam = ParamDelete(Parserparam);
                                                                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                                                                }
|   Type    _ID '(' ')' ';'                                                                     {
                                                                                                    C->tail = installClassMethodListNode(C->tail,C,TypeTableLookUp(T,top_string(TYPE_STACK)),$2->varname,Parserparam);
                                                                                                    Parserparam = ParamDelete(Parserparam);
                                                                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                                                                }
;
CMethodDef  :   CMethodDef  FnDef                                                               {}
|   FnDef                                                                                       {}
;

//-----------------------Global Declarations------------------
GDeclBlock  :                                   {}
|   _DECL   GDeclList   _ENDDECL                {}
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
                                                    if(ClassTableLookUp(C,top_string(TYPE_STACK)))
								                        gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),ClassTableLookUp(C,top_string(TYPE_STACK)),VARIABLE,$1->varname,2,NULL,lst);
                                                    else
                                                        gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),ClassTableLookUp(C,top_string(TYPE_STACK)),VARIABLE,$1->varname,1,NULL,lst);
                                                    lst = LSTDelete(lst);
							                    }
|   _ID '[' _NUM    ']'					        {
                                                    if(ClassTableLookUp(C,top_string(TYPE_STACK)))
                                                    {
                                                        printf("*line %d : Cannot declare array of class\n",line);
                                                        exit(0);
                                                    }
                                                    if(strcmp(top_string(TYPE_STACK),"int") != 0 && strcmp(top_string(TYPE_STACK),"str") != 0)
                                                    {
                                                        printf("*line %d : Cannot declare array of user-data type\n",line);
                                                        exit(1);
                                                    }
								                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,ARRAY_VARIABLE,$1->varname,$3->val,NULL,lst);
                                                    lst = LSTDelete(lst);
							                    }
|   _ID '(' ParamList   ')'				        {
                                                    if(ClassTableLookUp(C,top_string(TYPE_STACK)))
                                                    {
                                                        printf("*line %d : Function cannot have return type as a class\n",line);
                                                        exit(0);
                                                    }
                                                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,FUNCTION,$1->varname,1,Parserparam,lst);
                                                    lst = LSTDelete(lst);
                                                    Parserparam = ParamDelete(Parserparam);
							                    }
|   _ID '(' ')'						            {
                                                    if(ClassTableLookUp(C,top_string(TYPE_STACK)))
                                                    {
                                                        printf("*line %d : Function cannot have return type as a class\n",line);
                                                        exit(0);
                                                    }
								                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,FUNCTION,$1->varname,1,Parserparam,lst);
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
                                                if(!class_section)
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
                                                    $$ = makeTreeNode(FUNCTION,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,$2->varname,-1,-1,$8,NULL,gst_node_temp,"FUNCTION");
                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                    printGST(gst);
                                                    printClassTable(C);
                                                    ASTPrintTree($$);
                                                    printf("\n");
                                                    stack = push(stack,$$,gst_node_temp->lst,NULL);
                                                    $$ = ASTDelete($$);
                                                }
                                                else
                                                {
                                                    method_list_node_temp = MethodLookUp(C->tail,$2->varname);
                                                    if(!method_list_node_temp || (!method_list_node_temp->overridden && method_list_node_temp->inherited))
                                                    {
                                                        printf("line %d :\"%s\" function not declared in class\n",line,$2->varname);
                                                        exit(1);
                                                    }
                                                    if(TypeTableLookUp(T,top_string(TYPE_STACK)) != method_list_node_temp->type)
                                                    {
                                                        printf("line %d :Invalid return type for \"%s\"\n",line,$2->varname);
                                                        exit(1);
                                                    }
                                                    if(!checkParamList(Parserparam,method_list_node_temp->param)){
                                                        printf("line %d :Number of Formal Arguments does not match with declaration\n",line);
                                                        exit(1);
                                                    }
                                                    if(RET_TYPE != method_list_node_temp->type){
                                                        printf("*line %d :Return type does not match\n",line);
                                                        exit(1);
                                                    }
                                                    RET_TYPE = NULL;
                                                    Parserparam = ParamDelete(Parserparam);
                                                    $$ = makeTreeNode(FUNCTION,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,$2->varname,-1,-1,$8,NULL,NULL,"FUNCTION");
                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                    printGST(gst);
                                                    printClassTable(C);
                                                    ASTPrintTree($$);
                                                    printf("\n");
                                                    stack = push(stack,$$,lst,C->tail);
                                                    lst = LSTDelete(lst);
                                                    $$ = ASTDelete($$);
                                                }
                                            }
|   Type    _ID '(' ')' '{' LDeclBlock  Body    '}' 
                                            {
                                                if(!class_section)
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
                                                    $$ = makeTreeNode(FUNCTION,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,$2->varname,-1,-1,$7,NULL,gst_node_temp,"FUNCTION");
                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                    printGST(gst);
                                                    printClassTable(C);
                                                    ASTPrintTree($$);
                                                    printf("\n");
                                                    stack = push(stack,$$,gst_node_temp->lst,NULL);
                                                    $$ = ASTDelete($$);
                                                }
                                                else
                                                {
                                                    method_list_node_temp = MethodLookUp(C->tail,$2->varname);
                                                    if(!method_list_node_temp || (!method_list_node_temp->overridden && method_list_node_temp->inherited))
                                                    {
                                                        printf("line %d :\"%s\" function not declared in class\n",line,$2->varname);
                                                        exit(1);
                                                    }
                                                    if(TypeTableLookUp(T,top_string(TYPE_STACK)) != method_list_node_temp->type)
                                                    {
                                                        printf("line %d :Invalid return type for \"%s\"\n",line,$2->varname);
                                                        exit(1);
                                                    }
                                                    if(!checkParamList(Parserparam,method_list_node_temp->param)){
                                                        printf("line %d :Number of Formal Arguments does not match with declaration\n",line);
                                                        exit(1);
                                                    }
                                                    if(RET_TYPE != method_list_node_temp->type){
                                                        printf("*line %d :Return type does not match\n",line);
                                                        exit(1);
                                                    }
                                                    RET_TYPE = NULL;
                                                    Parserparam = ParamDelete(Parserparam);
                                                    $$ = makeTreeNode(FUNCTION,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,$2->varname,-1,-1,$7,NULL,NULL,"FUNCTION");
                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                    printGST(gst);
                                                    printClassTable(C);
                                                    ASTPrintTree($$);
                                                    printf("\n");
                                                    stack = push(stack,$$,lst,C->tail);
                                                    lst = LSTDelete(lst);
                                                    $$ = ASTDelete($$);
                                                }
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
IdList  :   IdList  ',' _ID                     {lst = LSTInstall(lst,$3->varname,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,VARIABLE);}
|   _ID                                         {lst = LSTInstall(lst,$1->varname,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,VARIABLE);}
;

//----------------------ArgList---------------------------
NewArgList  :                                   {}
|   ArgList                                     {}
;
ArgList :   ArgList ',' stringExp               {paramAST = insertASTParam(paramAST,$3);}
|   stringExp                                   {paramAST = $1;}
;

//-----------------------Type-----------------------------
Type    :   _INT                {TYPE_STACK = push_string(TYPE_STACK,"int");}
|   _STR                        {TYPE_STACK = push_string(TYPE_STACK,"str");}
|   _ID                         {TYPE_STACK = push_string(TYPE_STACK,$1->varname);}
;

//-----------------------Statement List-------------------
Slist:  Slist stmt                          {$$ = makeTreeNode(STATEMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$1,$2,NULL,"STATEMENT");}
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
                                                if($3->nodetype == FUNCTION || $3->nodetype == FIELDFUNCTION)
                                                {
                                                    printf("*line %d: function cannot be a parameter to read\n",line);
                                                    exit(0);
                                                }
                                                if($3->type == TypeTableLookUp(T,"int") || $3->type == TypeTableLookUp(T,"str"))
                                                    $$ = makeTreeNode(READ,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$3,NULL,NULL,"Read");
                                                else
                                                {
                                                    printf("*line %d: invalid parameter type to read\n",line);
                                                    exit(0);
                                                }
                                            }
;
Outputstmt: _WRITE '(' stringExp ')' ';'    {$$ = makeTreeNode(WRITE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$3,NULL,NULL,"Write");}
;
Assgstmt:   id '='  _ALLOC  '(' ')' ';'     {
                                                if($1->type != TypeTableLookUp(T,"int") && $1->type != TypeTableLookUp(T,"str") && $1->nodetype != FUNCTION)
                                                    $$ = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$1,$3,NULL,"=");
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
                                                    $$ = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$1,$3,NULL,"=");
                                                }
                                                else
                                                {
                                                    printf("*line %d: Semantic Error for Free()\n",line);
                                                    exit(0);
                                                }
                                            }
|   id  '=' _NEW    '(' _ID  ')' ';'        {
                                                curr_classtableentry = ClassTableLookUp(C,$5->varname);
                                                if(!curr_classtableentry)
                                                {
                                                    printf("*line %d: Class \"%s\" is not defined\n",line,$5->varname);
                                                    exit(0);
                                                }
                                                if(!$1->type && $1->class && $1->nodetype != FUNCTION)
                                                {
                                                    if(checkInheritence($1->class,curr_classtableentry))
                                                    {
                                                        struct AST_Node *temp0,*temp1;
                                                        temp0 = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$1,$3,NULL,"=");
                                                        temp1 = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$1,$5,NULL,"vftpointerassg");
                                                        $$ = makeTreeNode(NEW,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,temp0,temp1,NULL,"new");
                                                    }
                                                    else
                                                    {
                                                        printf("*line %d: Class \"%s\" is not descendant of \"%s\"\n",line,$5->varname,$1->class->name);
                                                        exit(0);
                                                    }
                                                }
                                                else
                                                {
                                                    printf("*line %d: Variable \"%s\" not an object of a class\n",line,$1->varname);
                                                    exit(0);
                                                }
                                            }
|   _DELETE '(' id  ')' ';'                 {
                                                if($3->class && !$3->type && $3->nodetype != FUNCTION && $3->nodetype != ARRAY_VARIABLE)
                                                {
                                                    $1->left = $3;
                                                    $$ = makeTreeNode(DELETE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$1,$3,NULL,"delete");
                                                }
                                                else
                                                {
                                                    printf("*line %d: Only objects of a class can be argumnets\n",line);
                                                    exit(0);
                                                }
                                            }
|   id  '=' stringExp ';'                   {
                                                if($1->type && $3->type && $1->type == $3->type && ($1->nodetype != FUNCTION))
                                                    $$ = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$1,$3,NULL,"=");
                                                else if($1->class && $3->class && checkInheritence($1->class,$3->class))
                                                    $$ = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$1,$3,NULL,"=");
                                                else{
                                                    printf("line %d :Invalid assignment to \"%s\"\n",line,$1->varname);
                                                    exit(1);
                                                }
                                            }
|   id '=' _NULL    ';'                     {
                                                if($1->type != TypeTableLookUp(T,"int") && $1->type != TypeTableLookUp(T,"str") && $1->nodetype != FUNCTION)
                                                    $$ = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$1,$3,NULL,"=");
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
                                                                struct AST_Node *temp1 = makeTreeNode(IF,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$3,$6,NULL,"IF");
                                                                struct AST_Node *temp2 = makeTreeNode(ELSE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$8,NULL,NULL,"ELSE");
                                                                $$ = makeTreeNode(IF_ELSE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,temp1,temp2,NULL,"IF_ELSE");
                                                            }
|	_IF '(' expr ')' _THEN Slist _ENDIF ';'                 {
                                                                if(!typeCheckBool($3)){
                                                                    printf("line %d :Invalid boolean statement\n",line);
                                                                    exit(1);
                                                                }
                                                                struct AST_Node *temp1 = makeTreeNode(IF,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$3,$6,NULL,"IF");
                                                                $$ = makeTreeNode(IF_ELSE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,temp1,NULL,NULL,"IF_ELSE");
                                                            }
;
Whilestmt: _WHILE '(' expr ')' _DO Slist _ENDWHILE ';'      {
                                                                if(typeCheckBool($3))
                                                                    $$ = makeTreeNode(WHILE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$3,$6,NULL,"WHILE");
                                                                else{
                                                                    printf("line %d :Invalid bool statement\n",line);
                                                                    exit(1);
                                                                }
                                                            }
;
RepeatUntil:    _REPEAT '{' Slist '}' _UNTIL '(' expr ')' ';'   {
                                                                    if(typeCheckBool($7))
                                                                        $$ = makeTreeNode(REPEAT_UNTIL,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$3,$7,NULL,"REPEAT_UNTIL");
                                                                    else{
                                                                        printf("line %d :Invalid bool statement\n",line);
                                                                        exit(1);
                                                                    }
                                                                }
;
DoWhile:    _DO '{' Slist '}' _WHILE '(' expr ')' ';'   {
                                                            if(typeCheckBool($7))
                                                                $$ = makeTreeNode(DO_WHILE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,$3,$7,NULL,"DO_WHILE");
                                                            else{
                                                                printf("line %d :Invalid bool statement\n",line);
                                                                exit(1);
                                                            }
                                                        }
;
//--------------------------Expressions-----------------------
expr:   expr _PLUS  expr                                {
                                                            if(typeCheckExp($1) && typeCheckExp($3))
                                                                $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,NULL,PLUS,-1,$1,$3,NULL,"+");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
|   expr _MINUS expr                                    {
                                                            if(typeCheckExp($1) && typeCheckExp($3))
                                                                $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,NULL,MINUS,-1,$1,$3,NULL,"-");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
|   expr _MUL expr                                      {
                                                            if(typeCheckExp($1) && typeCheckExp($3))
                                                                $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,NULL,MUL,-1,$1,$3,NULL,"*");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
|   expr _DIV expr                                      {
                                                            if(typeCheckExp($1) && typeCheckExp($3))
                                                                $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,NULL,DIV,-1,$1,$3,NULL,"/");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
|   expr _MOD expr                                      {
                                                            if(typeCheckExp($1) && typeCheckExp($3))
                                                                $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,NULL,MOD,-1,$1,$3,NULL,"%");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
|   expr _LT expr                                       {
                                                            if(typeCheckExp($1) && typeCheckExp($3))
                                                                $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,LT,-1,$1,$3,NULL,"<");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
|   expr _LE expr                                       {
                                                            if(typeCheckExp($1) && typeCheckExp($3))
                                                                $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,LE,-1,$1,$3,NULL,"<=");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
|   expr _GT expr                                       {
                                                            if(typeCheckExp($1) && typeCheckExp($3))
                                                                $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,GT,-1,$1,$3,NULL,">");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
|   expr _GE expr                                       {
                                                            if(typeCheckExp($1) && typeCheckExp($3))
                                                                $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,GE,-1,$1,$3,NULL,">=");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
|   expr _NE expr                                       {
                                                            if((typeCheckExp($1) || (!typeCheckExp($1) && !typeCheckBool($1))) && ($3->nodetype == NULL_ || typeCheckExp($3) || (!typeCheckExp($3) && !typeCheckBool($3))))
                                                                $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,NE,-1,$1,$3,NULL,"!=");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
|   expr _EQ expr                                       {
                                                            if((typeCheckExp($1) || (!typeCheckExp($1) && !typeCheckBool($1))) && ($3->nodetype == NULL_ || typeCheckExp($3) || (!typeCheckExp($3) && !typeCheckBool($3))))
                                                                $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,EQ,-1,$1,$3,NULL,"==");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
|   expr    _EQ _NULL                                   {
                                                            if(!typeCheckExp($1) && !typeCheckBool($1))
                                                                $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,EQ,-1,$1,$3,NULL,"==");
                                                            else
                                                            {
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
|   expr    _NE _NULL                                   {
                                                            if(!typeCheckExp($1) && !typeCheckBool($1))
                                                                $$ = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,NE,-1,$1,$3,NULL,"!=");
                                                            else
                                                            {
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
|   '(' expr ')'                                        {$$ = $2;}
|   _NUM                                                {$$ = $1;}
|   id                                                  {$$ = $1;}
;
//----------------------------Identifiers-----------------------
id: _ID                                                 {
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
                                                                {
                                                                    $$->type = gst_node_temp->type;
                                                                    $$->class = gst_node_temp->class;
                                                                }
                                                            }
                                                        }
|   _ID '[' expr ']'                                    {
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
                                                                $$ = makeTreeNode(ARRAY_VARIABLE,$1->type,NULL,$1->varname,-1,-1,$1,$3,NULL,"ARRAY_VARIABLE");
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
                                                                    $$ = makeTreeNode(ARRAY_VARIABLE,$1->type,NULL,$1->varname,-1,-1,$1,$3,gst_node_temp,"ARRAY_VARIABLE");
                                                                }
                                                            }
                                                        }
|   _ID '(' NewArgList ')'                              {
                                                            gst_node_temp = GSTLookUp(gst,$1->varname);
                                                            if(!gst_node_temp){
                                                                printf("line %d :Function \"%s\" not declared\n",line,$1->varname);
                                                                exit(1);
                                                            }
                                                            if(gst_node_temp->type_of_var != FUNCTION){
                                                                printf("line %d :\"%s\" not a function\n",line,$1->varname);
                                                                exit(1);
                                                            }
                                                            if(!checkASTParam(gst_node_temp->param,paramAST)){
                                                                printf("line %d :Wrong arguments in \"%s\", does not match with declaration\n",line,$1->varname);
                                                                exit(1);
                                                            }
                                                            $1->nodetype = FUNCTION;
                                                            $1->type = gst_node_temp->type;
                                                            $1->param = paramAST;
                                                            paramAST = NULL;
                                                            $$ = $1;
                                                        }
|   Field                                               {$$ = $1;}
|   FieldFunction                                       {$$ = $1;}
;

//----------------------------Field & FieldFunction-------------------------
Field:  Field   '.' _ID     {
                                if(curr_classtableentry)
                                {
                                    printf("*line %d: Private member access error\n",line);
                                    exit(0);
                                }
                                struct FieldListNode *found = FieldListLookUp(curr_typetableentry,$3->varname);
                                if(!found)
                                {
                                    printf("*line %d: \"%s\" does not contain \"%s\" as a field\n",line,curr_typetableentry->name,$3->varname);
                                    exit(1);
                                }
                                $3->type = found->type;
                                $$ = makeTreeNode(FIELD,$3->type,NULL,$3->varname,-1,-1,$1,$3,NULL,"FIELD");
                                curr_typetableentry = found->type;
                                curr_classtableentry = NULL;
                            }
|   _ID '.' _ID             {
                                curr_typetableentry = NULL;
                                curr_classtableentry = NULL;
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
                                if(curr_typetableentry == NULL)
                                {
                                    printf("*line %d: Private member access error\n",line);
                                    exit(0);
                                }
                                struct FieldListNode *found = FieldListLookUp(curr_typetableentry,$3->varname);
                                if(!found)
                                {
                                    printf("*line %d: \"%s\" does not contain \"%s\" as a field\n",line,curr_typetableentry->name,$3->varname);
                                    exit(1);
                                }
                                $1->type = curr_typetableentry;
                                $1->class = NULL;
                                $3->type = found->type;
                                $3->class = NULL;
                                $$ = makeTreeNode(FIELD,$3->type,NULL,$3->varname,-1,-1,$1,$3,NULL,"FIELD");
                                curr_typetableentry = found->type;
                                curr_classtableentry = NULL;
                            }
|   _SELF   '.' _ID         {
                                curr_classtableentry = NULL;
                                curr_typetableentry = NULL;
                                if(!class_section)
                                {
                                    printf("*line %d: Invalid identifier \"self\"\n",line);
                                    exit(0);
                                }
                                $1->type = NULL;
                                $1->class = C->tail;
                                struct FieldListNode *found = ClassFieldLookUp(C->tail,$3->varname);
                                if(!found)
                                {
                                    printf("*line %d: Class \"%s\" does not have member field \"%s\"\n",line,C->tail->name,$3->varname);
                                    exit(0);
                                }
                                $3->type = found->type;
                                $3->class = found->class;
                                $$ = makeTreeNode(FIELD,$3->type,$3->class,$3->varname,-1,-1,$1,$3,NULL,"FIELD");
                                curr_typetableentry = $3->type;
                                curr_classtableentry = $3->class;
                            }
;
FieldFunction   :   Field   '.' _ID '(' NewArgList ')'      {
                                                                method_list_node_temp = MethodLookUp($1->class,$3->varname);
                                                                if(!method_list_node_temp)
                                                                {
                                                                    printf("*line %d : No method \"%s\" in \"%s\"\n",line,$3->varname,$1->varname);
                                                                    exit(0);
                                                                }
                                                                if(!checkASTParam(method_list_node_temp->param,paramAST))
                                                                {
                                                                    printf("line %d :Arguments in \"%s\", does not match with declaration in class \"%s\"\n",line,$3->varname,$1->varname);
                                                                    exit(0);
                                                                }
                                                                $3->nodetype = FUNCTION;
                                                                $3->type = method_list_node_temp->type;
                                                                $3->class = NULL;
                                                                $3->param = paramAST;
                                                                $$ = makeTreeNode(FIELDFUNCTION,$3->type,$3->class,$3->varname,-1,-1,$1,$3,NULL,"fieldfunction");
                                                                paramAST = NULL;
                                                            }
|   _ID '.' _ID '(' NewArgList ')'                          {
                                                                gst_node_temp = GSTLookUp(gst,$1->varname);
                                                                if(!gst_node_temp)
                                                                {
                                                                    printf("*line %d : Class variable \"%s\" not declared\n",line,$1->varname);
                                                                    exit(0);
                                                                }
                                                                if(!gst_node_temp->class)
                                                                {
                                                                    printf("*line %d : Variable \"%s\" is not of class type\n",line,$1->varname);
                                                                    exit(0);
                                                                }
                                                                method_list_node_temp = MethodLookUp(gst_node_temp->class,$3->varname);
                                                                if(!method_list_node_temp)
                                                                {
                                                                    printf("*line %d : No method \"%s\" in class \"%s\"\n",line,$3->varname,$1->varname);
                                                                    exit(0);
                                                                }
                                                                if(!checkASTParam(method_list_node_temp->param,paramAST))
                                                                {
                                                                    printf("line %d :Arguments in \"%s\", does not match with declaration in class \"%s\"\n",line,$3->varname,gst_node_temp->class->name);
                                                                    exit(0);
                                                                }
                                                                $1->nodetype = VARIABLE;
                                                                $1->type = gst_node_temp->type;
                                                                $1->class = gst_node_temp->class;
                                                                $3->nodetype = FUNCTION;
                                                                $3->type = method_list_node_temp->type;
                                                                $3->class = NULL;
                                                                $3->param = paramAST;
                                                                $$ = makeTreeNode(FIELDFUNCTION,$3->type,$3->class,$3->varname,-1,-1,$1,$3,NULL,"fieldfunction");
                                                                paramAST = NULL;
                                                            }
|   _SELF   '.' _ID '(' NewArgList ')'                      {
                                                                if(!class_section)
                                                                {
                                                                    printf("*line %d : Invalid identifier\n",line);
                                                                    exit(0);
                                                                }
                                                                method_list_node_temp = MethodLookUp(C->tail,$3->varname);
                                                                if(!method_list_node_temp)
                                                                {
                                                                    printf("*line %d: Class \"%s\" does not have method \"%s\"\n",line,C->tail->name,$3->varname);
                                                                    exit(0);
                                                                }
                                                                if(!checkASTParam(method_list_node_temp->param,paramAST))
                                                                {
                                                                    printf("line %d :Arguments in \"%s\", does not match with declaration in class \"%s\"\n",line,$3->varname,$1->varname);
                                                                    exit(0);
                                                                }
                                                                $1->nodetype = VARIABLE;
                                                                $1->type = NULL;
                                                                $1->class = C->tail;
                                                                $3->nodetype = FUNCTION;
                                                                $3->type = method_list_node_temp->type;
                                                                $3->class = NULL;
                                                                $3->param = paramAST;
                                                                $$ = makeTreeNode(FIELDFUNCTION,$3->type,$3->class,$3->varname,-1,-1,$1,$3,NULL,"fieldfunction");
                                                                paramAST = NULL;
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
    C = initClassTable();
    curr_typetableentry = NULL;
    curr_classtableentry = NULL;
    paramAST = NULL;
    ADDR = 4096;
    LABEL = 0;
    class_section = 0;
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
