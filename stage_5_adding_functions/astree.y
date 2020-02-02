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
    struct GSTNode *temp1;
    struct LSTable *lst;
    struct LSTNode *temp3;
    struct ParamList *Parserparam;
    struct AST_Node *temp2;
    char *keyword[20] = {"begin", "end", "read", "write", "if", "else", "then", "endif", "while", "do", "endwhile", "repeat", "until", "int", "str", "decl", "enddecl", "break", "continue", "breakpoint"};

%}

%union{
    struct AST_Node *node;
};

/**/
%type <node> _BREAK _CONTINUE _BREAKPOINT
%type <node> GDeclBlock GDeclList GDecl GIdList GId
%type <node> LDecl LDeclBlock LDeclList IdList Type
%type <node> Param ParamList
%type <node> FnDef FnDefBlock MainBlock
%type <node> Program
%type <node> Body Slist stmt Inputstmt Outputstmt Assgstmt Ifstmt Whilestmt RepeatUntil DoWhile
%type <node> _NUM _STRING
%type <node> expr stringExp _ID id _END
/*TOKENS*/
//declaration
%token _DECL _ENDDECL
//operator
%token _PLUS _MINUS _MUL _DIV _MOD
//constants and identifiers
%token _NUM _STRING _ID
//relop
%token _LT _LE _GT _GE _NE _EQ
//data type
%token _INT _STR
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
%token _BREAK _CONTINUE _BREAKPOINT _MAIN
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
MainBlock   :   _INT    _MAIN   '(' ')' '{' LDeclBlock  Body    '}' {
    gst = GSTInstall(gst,INTEGER,FUNCTION,"Main",1,NULL,NULL);
    temp1 = GSTLookUp(gst,"Main");
    temp1->lst = lst;
    lst = LSTDelete(lst);
    Parserparam = ParamDelete(Parserparam);
    $$ = makeTreeNode(FUNCTION,INTEGER,"Main",-1,-1,$7,NULL,temp1,"Main");
    printGST(gst);
    print_tree($$);
    printf("\n");
    //code_generator(ft,$$,gst,temp1->lst);
    $$ = ASTDelete($$);
}
;

//-------------------------Body-------------------------------
Body    :   _BEGIN  Slist   _END    {$$ = $2;}
|   _BEGIN  _END    {$$ = NULL;}
;

//-------------------------Program----------------------------
Program :   GDeclBlock   FnDefBlock   MainBlock {
    $$ = NULL;
    printf("Parsing Completed\n");
    exit(1);
}
|   GDeclBlock  MainBlock   {
    $$ = NULL;
    printf("Parsing Completed\n");
    exit(1);
}
|   MainBlock   {
    $$ = NULL;
    printf("Parsing Completed\n");
    exit(1);
}
;

//-----------------------Global Declarations------------------
GDeclBlock  :   _DECL   GDeclList   _ENDDECL    {}
|   _DECL   _ENDDECL    {}
;
GDeclList   :   GDeclList   GDecl   {}
|   GDecl   {}
;
GDecl   :   Type    GIdList ';' {}
;
GIdList :   GIdList ',' GId {}
|   GId {}
;
GId :   _ID {
    gst = GSTInstall(gst,TYPE,VARIABLE,$1->varname,1,NULL,NULL);
}
|   _ID '[' _NUM    ']' {
    gst = GSTInstall(gst,TYPE,ARRAY_VARIABLE,$1->varname,$3->val,NULL,NULL);
}
|   _ID '(' ParamList   ')' {
    gst = GSTInstall(gst,TYPE,FUNCTION,$1->varname,1,Parserparam,NULL);
    Parserparam = ParamDelete(Parserparam);
}
|   _ID '(' ')' {
    gst = GSTInstall(gst,TYPE,FUNCTION,$1->varname,1,NULL,NULL);
}
;

//------------------------Function Defition-------------------
FnDefBlock  :   FnDefBlock  FnDef   {}
|   FnDef   {}
;
FnDef   :   Type    _ID '(' ParamList   ')' '{' LDeclBlock  Body    '}' {
    temp1 = GSTLookUp(gst,$2->varname);
    if(!temp1){
        printf("\"%s\" function not declared\n",$2->varname);
        exit(1);
    }
    if(TYPE != temp1->type){
        printf("Invalid return type for \"%s\"\n",$2->varname);
        exit(1);
    }
    if(!checkParamList(Parserparam,temp1->param)){
        printf("Number of Formal Arguments does not match with declaration\n");
        exit(1);
    }
    temp1->lst = lst;
    lst = LSTDelete(lst);
    Parserparam = ParamDelete(Parserparam);
    $$ = makeTreeNode(FUNCTION,INTEGER,$2->varname,-1,-1,$8,NULL,temp1,"FUNCTION");
    printGST(gst);
    print_tree($$);
    printf("\n");
    //code_generator(ft,$$,gst,temp1->lst);
    $$ = ASTDelete($$);
}
|   Type    _ID '(' ')' '{' LDeclBlock  Body    '}' {
    temp1 = GSTLookUp(gst,$2->varname);
    if(!temp1){
        printf("\"%s\" function not declared\n",$2->varname);
        exit(1);
    }
    if(TYPE != temp1->type){
        printf("Invalid return type for \"%s\"\n",$2->varname);
        exit(1);
    }
    if(!checkParamList(Parserparam,temp1->param)){
        printf("Number of Formal Arguments does not match with declaration\n");
        exit(1);
    }
    temp1->lst = lst;
    lst = LSTDelete(lst);
    Parserparam = ParamDelete(Parserparam);
    $$ = makeTreeNode(FUNCTION,INTEGER,$2->varname,-1,-1,$7,NULL,temp1,"FUNCTION");
    printGST(gst);
    print_tree($$);
    printf("\n");
    //code_generator(ft,$$,gst,temp1->lst);
    $$ = ASTDelete($$);
}
;

//-------------------------Parameter List---------------------
ParamList   :   ParamList   ',' Param   {}
|   Param   {}
;
Param   :   Type    _ID {Parserparam = ParamInsert(Parserparam,$2->varname,TYPE,VARIABLE);}
;

//-----------------------Local Declaration--------------------
LDeclBlock  :   _DECL   LDeclList   _ENDDECL    {
    lst = ParamToLSTInstall(lst,Parserparam);
}
|   _DECL   _ENDDECL    {
    lst = ParamToLSTInstall(lst,Parserparam);
}
;
LDeclList   :   LDeclList   LDecl   {}
|   LDecl   {}
;
LDecl   :   Type    IdList  ';' {}
;
IdList  :   IdList  ',' _ID {
    lst = LSTInstall(lst,$3->varname,TYPE,VARIABLE);
}
|   _ID {
    lst = LSTInstall(lst,$1->varname,TYPE,VARIABLE);
}
;

//-----------------------Type-----------------------------
Type    :   _INT    {TYPE = INTEGER;}
|   _STR    {TYPE = STRING;}
;

//-----------------------Statement List-------------------
Slist:  Slist stmt{
    $$ = makeTreeNode(STATEMENT,STATEMENT,NULL,-1,-1,$1,$2,NULL,"STATEMENT");
}
|   stmt  {
        $$ = $1;
    }
;
//---------------------Type of Statements-----------------
stmt:	Inputstmt {
    $$ = $1;
}
|	Outputstmt  {
    $$ = $1;
}
|	Assgstmt {
    $$ = $1;
}
|	Ifstmt{
	$$ = $1;
}
|	Whilestmt{
	$$ = $1;
}
|   RepeatUntil{
    $$ = $1;
}
|   DoWhile{
    $$ = $1;
}
|   _BREAK ';'  {
    $$ = $1;
}
|   _CONTINUE ';'   {
    $$ = $1;
}
|   _BREAKPOINT ';' {
    $$ = $1;
}
;
Inputstmt:  _READ '(' id ')' ';'{
    $$ = makeTreeNode(STATEMENT,READ,NULL,-1,-1,$3,NULL,NULL,"Read");
}
;
Outputstmt: _WRITE '(' stringExp ')' ';' {
    	$$ = makeTreeNode(STATEMENT,WRITE,NULL,-1,-1,$3,NULL,NULL,"Write");
};
Assgstmt:   id '=' stringExp ';'{
    if((typeCheckExp($1) && typeCheckExp($3)) || (typeCheckStr($1) && typeCheckStr($3)))
	    $$ = makeTreeNode(STATEMENT,ASSIGNMENT,NULL,-1,-1,$1,$3,NULL,"=");
    else{
        printf("Invalid assignment to \"%s\"\n",$1->varname);
        exit(1);
    }
}
;
stringExp:  expr    {$$ = $1;}
|   _STRING {$$ = $1;}
;
Ifstmt:	_IF '(' expr ')' _THEN Slist _ELSE Slist _ENDIF ';'{
    if(!typeCheckBool($3)){
        printf("Invalid boolean statement\n");
        exit(1);
    }
    struct AST_Node *temp1 = makeTreeNode(STATEMENT,IF,NULL,-1,-1,$3,$6,NULL,"IF");
	struct AST_Node *temp2 = makeTreeNode(STATEMENT,ELSE,NULL,-1,-1,$8,NULL,NULL,"ELSE");
	$$ = makeTreeNode(STATEMENT,IF_ELSE,NULL,-1,-1,temp1,temp2,NULL,"IF_ELSE");
}
|	_IF '(' expr ')' _THEN Slist _ENDIF ';'{
    if(!typeCheckBool($3)){
        printf("Invalid boolean statement\n");
        exit(1);
    }
	struct AST_Node *temp1 = makeTreeNode(STATEMENT,IF,NULL,-1,-1,$3,$6,NULL,"IF");
	$$ = makeTreeNode(STATEMENT,IF_ELSE,NULL,-1,-1,temp1,NULL,NULL,"IF_ELSE");
}
;
Whilestmt: _WHILE '(' expr ')' _DO Slist _ENDWHILE ';'{
    if(typeCheckBool($3))
	    $$ = makeTreeNode(LOOP,WHILE,NULL,-1,-1,$3,$6,NULL,"WHILE");
    else{
        printf("Invalid bool statement\n");
        exit(1);
    }
}
;
RepeatUntil:    _REPEAT '{' Slist '}' _UNTIL '(' expr ')' ';'   {
    if(typeCheckBool($7))
        $$ = makeTreeNode(LOOP,REPEAT_UNTIL,NULL,-1,-1,$3,$7,NULL,"REPEAT_UNTIL");
    else{
        printf("Invalid bool statement\n");
        exit(1);
    }
}
;
DoWhile:    _DO '{' Slist '}' _WHILE '(' expr ')' ';'   {
    if(typeCheckBool($7))
        $$ = makeTreeNode(LOOP,DO_WHILE,NULL,-1,-1,$3,$7,NULL,"DO_WHILE");
    else{
        printf("Invalid bool statement\n");
        exit(1);
    }
}
;
//--------------------------Expressions-----------------------
expr:   expr _PLUS  expr    {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,INTEGER,NULL,PLUS,-1,$1,$3,NULL,"+");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   expr _MINUS expr     {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,INTEGER,NULL,MINUS,-1,$1,$3,NULL,"-");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   expr _MUL expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,INTEGER,NULL,MUL,-1,$1,$3,NULL,"*");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   expr _DIV expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,INTEGER,NULL,DIV,-1,$1,$3,NULL,"/");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   expr _MOD expr {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,INTEGER,NULL,MOD,-1,$1,$3,NULL,"%");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   expr _LT expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,BOOLEAN,NULL,LT,-1,$1,$3,NULL,"<");
    else{
        printf("Invalid Operator\n");
        exit(1);
    }
}
|   expr _LE expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,BOOLEAN,NULL,LE,-1,$1,$3,NULL,"<=");
    else{
        printf("Invalid Operator\n");
        exit(1);
    }
}
|   expr _GT expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,BOOLEAN,NULL,GT,-1,$1,$3,NULL,">");
    else{
        printf("Invalid Operator\n");
        exit(1);
    }
}
|   expr _GE expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,BOOLEAN,NULL,GE,-1,$1,$3,NULL,">=");
    else{
        printf("Invalid Operator\n");
        exit(1);
    }
}
|   expr _NE expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,BOOLEAN,NULL,NE,-1,$1,$3,NULL,"!=");
    else{
        printf("Invalid Operator\n");
        exit(1);
    }
}
|   expr _EQ expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeTreeNode(EXPRESSION,BOOLEAN,NULL,EQ,-1,$1,$3,NULL,"==");
    else{
        printf("Invalid Operator\n");
        exit(1);
    }
}
|   '(' expr ')'    {
    $$ = $2;
}
|   _NUM    {$$ = $1;}
|   id  {$$ = $1;}
;
//----------------------------Identifiers-----------------------
id: _ID {
    $$ = $1;
    temp3 = LSTLookUp(lst,$1->varname);
    if(temp3)
        $$->type = temp3->type;
    else{
        temp1 = GSTLookUp(gst,$1->varname);
        if(!temp1){
            printf("Variable \"%s\" not declared\n",$$->varname);
            exit(1);
        }
        else
            $$->type = temp1->type;
    }
}
|   _ID '[' expr ']' {
    if(typeCheckBool($3)){
        printf("Invalid index\n");
        exit(1);
    }
    temp3 = LSTLookUp(lst,$1->varname);
    if(temp3){
        if(temp3->type_of_var != ARRAY_VARIABLE){
            printf("Variable \"%s\" not of array type\n",$1->varname);
            exit(1);
        }
        $1->type = temp3->type;
        $$ = makeTreeNode(ARRAY_VARIABLE,$1->type,$1->varname,-1,-1,$1,$3,NULL,"ARRAY_VARIABLE");
    }
    else{
        temp1 = GSTLookUp(gst,$1->varname);
        if(!temp1)
        {
            printf("Variable \"%s\" not declared\n",$1->varname);
            exit(1);            
        }
        else{
            if(temp1->type_of_var != ARRAY_VARIABLE){
                printf("Variable \"%s\" not of array type\n",$1->varname);
                exit(1);
            }
            $1->type = temp1->type;
            $$ = makeTreeNode(ARRAY_VARIABLE,$1->type,$1->varname,-1,-1,$1,$3,temp1,"ARRAY_VARIABLE");
        }
    }
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
    Parserparam = init_ParamList();
    ADDR = 4096;
    LABEL = 0;
    TYPE = -1;
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
