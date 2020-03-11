#define NONE 0

#define EXPRESSION 1
#define VARIABLE 2
#define ARRAY_VARIABLE 3
#define STATEMENT 4
#define ASSIGNMENT 5

#define STRING 6
#define INTEGER 7
#define BOOLEAN 8
#define CONSTANT 9
#define RESERVED 10
#define FUNCTION 11

#define INPUT 12
#define OUTPUT 13
#define READ 14
#define WRITE 15

#define BREAK 16
#define CONTINUE 17
#define BREAKPOINT 18

#define IF_ELSE 19
#define IF 20
#define ELSE 21

#define LOOP 22
#define WHILE 23
#define REPEAT_UNTIL 24
#define DO_WHILE 25

#define PLUS 26
#define MINUS 27
#define DIV 28
#define MUL 29
#define MOD 30

#define LT 31
#define LE 32
#define GT 33
#define GE 34
#define NE 35
#define EQ 36

#define ARGUMENT 37
#define RETURN 38
#define NULL_ 39
#define FIELD 40
#define ALLOC 41
#define FREE 42
#define INITIALIZE 43
#define FIELDFUNCTION 44
#define NEW 45
#define DELETE 46

int ADDR;
int LABEL;
int line;
int class_section;
int comment_section;

//------------------------------------Static Storage Allocation---------------------------
//returns next available address
int allocate(int);
//resets addr variable to zero
void init_storage();
//----------------------------------------------------------------------------------------

//---------------------------------------Label Allocation---------------------------------
//resets LABEL variable to 0
void init_Label();
//returns next available LABEL
int getLabel();
//-----------------------------------------------------------------------------------------

//-----------------------------------------Parameter Linked List---------------------------
struct ParamNode
{
    char *varname;
    struct TypeTableNode *type;
    int type_of_var;
    struct ParamNode *next;
};

struct ParamList
{
    struct ParamNode *head;
    struct ParamNode *tail;
    int size;
};

struct ParamNode *init_ParamNode(char *, struct TypeTableNode *, int);
struct ParamList *init_ParamList();
struct ParamList *ParamInsert(struct ParamList *, char *, struct TypeTableNode *, int);
struct ParamList *ParamDelete(struct ParamList *h);
void printParamList(struct ParamList *);
int ParamGetSize(struct ParamList *);
//---------------------------------------------------------------------------------------------------------

//--------------------------------------Type Table ----------------------------------------
struct TypeTableNode
{
    char *name;
    int size;
    struct FieldList *field;
    struct TypeTableNode *next;
};

struct TypeTable
{
    struct TypeTableNode *head, *tail;
    int entry;
} * T;

struct TypeTableNode *newTypeTableNode(char *, int, struct FieldList *);
struct TypeTable *initTypeTable();
struct TypeTable *installTypeTableNode(struct TypeTable *, char *, int, struct FieldList *);
struct TypeTableNode *TypeTableLookUp(struct TypeTable *, char *);
int GetSizeType(struct TypeTableNode *);
void printTypeTable(struct TypeTable *);

//-----------------------------------------------------------------------------------------

//--------------------------------------Class Table----------------------------------------
struct ClassTableNode
{
    char *name;
    int classIdx, fieldCount, methodCount;
    struct FieldList *field;
    struct MethodList *method;
    struct ClassTableNode *parent, *next;
};

struct ClassTable
{
    int entry;
    struct ClassTableNode *head, *tail;
} * C;

struct ClassTable *initClassTable();
struct ClassTableNode *newClassTableNode(char *, int, int, int, struct FieldList *, struct MethodList *, struct ClassTableNode *);
struct ClassTableNode *ClassTableLookUp(struct ClassTable *, char *);
struct ClassTable *installClassTableNode(struct ClassTable *, struct TypeTable *, char *, char *);
struct FieldListNode *ClassFieldLookUp(struct ClassTableNode *, char *);
struct ClassTableNode *installClassFieldNode(struct ClassTableNode *, struct ClassTable *, struct TypeTable *, char *, char *);
struct ClassTableNode *installClassMethodListNode(struct ClassTableNode *, struct ClassTable *, struct TypeTableNode *, char *, struct ParamList *);
struct ClassTableNode *checkInheritence(struct ClassTableNode *, struct ClassTableNode *);
struct ClassTableNode *inheritMemberField(struct ClassTableNode *);
struct ClassTableNode *inheritMethod(struct ClassTableNode *);
void printClassTable(struct ClassTable *);
//-----------------------------------------------------------------------------------------

//--------------------------------------Field List-----------------------------------------
struct FieldListNode
{
    char *name;
    char *type_info;
    int fieldIndex;
    struct TypeTableNode *type;
    struct ClassTableNode *class;
    struct FieldListNode *next;
};

struct FieldList
{
    struct FieldListNode *head, *tail;
    int entry;
};

struct FieldList *initFieldList();
struct FieldListNode *newFieldListNode(char *, int, char *, struct TypeTableNode *, struct ClassTableNode *);
struct FieldList *installField(struct TypeTable *, struct ClassTable *, struct FieldList *, char *, char *);
void ValidateFieldList(struct TypeTableNode *, struct ClassTableNode *);
struct FieldListNode *FieldListLookUp(struct TypeTableNode *, char *);
void printFieldList(struct FieldList *);
//-----------------------------------------------------------------------------------------

//-------------------------------------Method List Table-----------------------------------
struct MethodListNode
{
    char *name;
    int methodIdx, Mlabel;
    int inherited, overridden;
    struct TypeTableNode *type;
    struct ParamList *param;
    struct MethodListNode *next;
};

struct MethodList
{
    int entry;
    struct MethodListNode *head, *tail;
};

struct MethodList *initMethodList();
struct MethodListNode *newMethodListNode(char *, int, int, int, int, struct TypeTableNode *, struct ParamList *);
struct MethodListNode *MethodLookUp(struct ClassTableNode *, char *);
struct ClassTableNode *installMethodListNode(struct ClassTableNode *, struct ClassTable *, char *, struct TypeTableNode *, struct ParamList *);
void printMethodList(struct MethodList *);
//-----------------------------------------------------------------------------------------

//-----------------------------------------Local Symbol Table-----------------------------------------------
struct LSTNode
{
    struct TypeTableNode *type;
    struct ClassTableNode *class;
    int type_of_var;
    char *varname;
    int binding_addr;
    struct LSTNode *next;
};

struct LSTable
{
    struct LSTNode *head;
    struct LSTNode *tail;
    int size;
};

struct LSTNode *init_LSTNode(struct TypeTableNode *, struct ClassTableNode *, int, char *, int);
struct LSTable *init_LSTable();
struct LSTable *LSTInstall(struct LSTable *, char *, struct TypeTableNode *, struct ClassTableNode *, int);
struct LSTNode *LSTLookUp(struct LSTable *, char *);
struct LSTable *LSTDelete(struct LSTable *);
void printLST(struct LSTable *);
int LSTGetSize(struct LSTable *);
//----------------------------------------------------------------------------------------------------------

//-----------------------------------------Global Symbol Table----------------------------------------------
struct GSTNode
{
    struct TypeTableNode *type;
    struct ClassTableNode *class;
    int type_of_var;
    char *varname;
    int binding_addr;
    int size;
    int fun_defined;
    struct ParamList *param;
    struct LSTable *lst;
    struct GSTNode *next;
};

struct GSTable
{
    struct GSTNode *head, *tail;
    int size;
};

//for creating new global symbol table
struct GSTable *init_GSTable();
//for creating new node
struct GSTNode *init_GSTNode(struct TypeTableNode *, struct ClassTableNode *, int, char *, int, int, struct ParamList *, struct LSTable *);
//checks whether id is already present in symbol table if it is, it returns pointer to it o/w NULL
struct GSTNode *GSTLookUp(struct GSTable *, char *);
//installs identifier in symbol table
struct GSTable *GSTInstall(struct GSTable *, struct TypeTableNode *, struct ClassTableNode *, int, char *, int, struct ParamList *, struct LSTable *);
//for deleting GSTable
struct GSTable *GSTDelete(struct GSTable *);
//for getting size of global symbol table
int GSTableGetSize(struct GSTable *);
//printing Symbol Table
void printGST(struct GSTable *);
//-------------------------------------------------------------------------------------------------------

//--------------------------------------Abstract Syntax Tree Declrations---------------------------------
struct AST_Node
{
    int nodetype;
    struct TypeTableNode *type;
    struct ClassTableNode *class;
    char *varname;
    int oper;
    int val;
    char *s;
    struct GSTNode *gst;
    struct AST_Node *param;
    struct AST_Node *next_param;
    struct AST_Node *left, *right;
};

//function declaration for Abstract Syntax Tree
struct AST_Node *makeTreeNode(int, struct TypeTableNode *, struct ClassTableNode *, char *, int, int, struct AST_Node *, struct AST_Node *, struct GSTNode *, char *);
//for printing syntax tree
void ASTPrintTree(struct AST_Node *);
//for printing argument list attached to function call node
void ASTPrintParam(struct AST_Node *);
//for deleting argument list attached to function call node in syntax tree
struct AST_Node *ASTDeleteParam(struct AST_Node *);
//for deleting syntax tree
struct AST_Node *ASTDelete(struct AST_Node *);
//----------------------------------------------------------------------------------------------------------

//-----------------------------------Auxiliary Function----------------------------------------
int typeCheckExp(struct AST_Node *);
int typeCheckBool(struct AST_Node *);
int typeCheckStr(struct AST_Node *);
int getFunctionLabel(struct GSTable *, char *);
struct LSTable *ParamToLSTInstall(struct LSTable *, struct ParamList *);
int checkASTParam(struct ParamList *, struct AST_Node *);
int checkParamList(struct ParamList *p1, struct ParamList *p2);
struct AST_Node *insertASTParam(struct AST_Node *, struct AST_Node *);
int DataTypeDefined(struct TypeTable *, char *);
//---------------------------------------------------------------------------------------------

//-----------------------------------------Register Allocation Strategy---------------------------------------------------
#define reg_idx int
int reg_pool[20];

void init_reg_pool();
//returns smallest i where Ri is free reg available in pool
reg_idx getReg();
//releases greatest i where Ri is allocated register
reg_idx freeReg();
//------------------------------------------------------------------------------------------------------------------------

//---------------------------------------CodeGen Stack-------------------------------
struct StackNode
{
    struct AST_Node *ast;
    struct LSTable *lst;
    struct ClassTableNode *class;
    struct StackNode *next;
};

struct Stack
{
    struct StackNode *head;
    int size;
};

struct StackNode *init_StackNode(struct AST_Node *, struct LSTable *, struct ClassTableNode *);
struct Stack *init_Stack();
struct Stack *push(struct Stack *, struct AST_Node *, struct LSTable *, struct ClassTableNode *);
struct Stack *pop(struct Stack *);
struct StackNode *top(struct Stack *);
int StackGetSize(struct Stack *);
//-------------------------------------------------------------------------------

//-------------------------------------String Stack------------------------------
struct StringStackNode
{
    char *str;
    struct StringStackNode *next;
};

struct StringStack
{
    struct StringStackNode *head;
    int size;
} * TYPE_STACK;

struct StringStackNode *init_StringStackNode(char *);
struct StringStack *init_StringStack();
struct StringStack *push_string(struct StringStack *, char *);
struct StringStack *pop_string(struct StringStack *);
char *top_string(struct StringStack *);
int StringStackGetSize(struct StringStack *);
//-------------------------------------------------------------------------------

//-----------------------------------------Code Generation Function-------------------------------------------------------
reg_idx expression_code_generator(FILE *, struct AST_Node *, struct GSTable *, struct LSTable *, struct ClassTableNode *);
int assignment_code_generator(FILE *, struct AST_Node *, struct GSTable *, struct LSTable *, struct ClassTableNode *);
int read_code_generator(FILE *, struct AST_Node *, struct GSTable *, struct LSTable *, struct ClassTableNode *);
int write_code_generator(FILE *, struct AST_Node *, struct GSTable *, struct LSTable *, struct ClassTableNode *);
void boolean_code_generator(FILE *, struct AST_Node *, int, struct GSTable *, struct LSTable *, struct ClassTableNode *);
void if_else_code_generator(FILE *, struct AST_Node *, int, int, struct GSTable *, struct LSTable *, struct ClassTableNode *);
void while_code_generator(FILE *, struct AST_Node *, int, int, struct GSTable *, struct LSTable *, struct ClassTableNode *);
void repeat_until_code_generator(FILE *, struct AST_Node *, int, int, struct GSTable *, struct LSTable *, struct ClassTableNode *);
void do_while_code_generator(FILE *, struct AST_Node *, int, int, struct GSTable *, struct LSTable *, struct ClassTableNode *);
void break_code_generator(FILE *, struct AST_Node *, int, int);
void continue_code_generator(FILE *, struct AST_Node *, int, int);
void breakpoint_code_generator(FILE *, struct AST_Node *);
reg_idx functionCall_code_generator(FILE *, struct AST_Node *, struct GSTable *, struct LSTable *, struct ClassTableNode *);
reg_idx fieldFunctionCall_code_generator(FILE *, struct AST_Node *, struct GSTable *, struct LSTable *, struct ClassTableNode *);
void return_code_generator(FILE *, struct AST_Node *, struct GSTable *, struct LSTable *, struct ClassTableNode *);
void code_generator_util(FILE *, struct AST_Node *, int, int, struct GSTable *, struct LSTable *, struct ClassTableNode *);
void code_generator(FILE *, struct AST_Node *, struct GSTable *, struct LSTable *, struct ClassTableNode *);
void generateExit(FILE *);
void generateHeader(FILE *);
reg_idx getArrayNodeAddress(FILE *, struct AST_Node *, struct GSTable *, struct LSTable *, struct ClassTableNode *);
reg_idx getAddress(FILE *, char *, struct GSTable *, struct LSTable *, struct ClassTableNode *);
reg_idx getVFTPointerAddress(FILE *, struct AST_Node *, struct GSTable *, struct LSTable *, struct ClassTableNode *);
reg_idx getVFTPointer(FILE *, struct AST_Node *, struct GSTable *, struct LSTable *, struct ClassTableNode *);
reg_idx getClassVFTPointer(FILE *, struct ClassTableNode *);
void PushArgument(FILE *, struct AST_Node *, struct GSTable *, struct LSTable *, struct ClassTableNode *);
reg_idx alloc_code_generator(FILE *);
reg_idx free_code_generator(FILE *, struct AST_Node *, struct GSTable *, struct LSTable *, struct ClassTableNode *);
void new_code_generator(FILE *, struct AST_Node *, struct GSTable *, struct LSTable *, struct ClassTableNode *);
void delete_code_generator(FILE *, struct AST_Node *, struct GSTable *, struct LSTable *, struct ClassTableNode *);
void initialize_code_generator(FILE *);
reg_idx getAddressOfField(FILE *, struct AST_Node *, struct GSTable *, struct LSTable *, struct ClassTableNode *);
//------------------------------------------------------------------------------------------------------------------------

//-----------------------------------------------Evaluator Function-------------------------------------------------------
int expression_evaluator(struct AST_Node *);
void assignment_evaluator(struct AST_Node *);
void read_evaluator(struct AST_Node *);
void write_evaluator(struct AST_Node *);
void evaluator_util(struct AST_Node *);
void evaluator(struct AST_Node *);
//------------------------------------------------------------------------------------------------------------------------
