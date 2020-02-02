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

int ADDR;
int LABEL;
int line;
int TYPE;

//-----------------------------------------Parameter Linked List-------------------------------------------
struct ParamNode
{
	char *varname;
	int type;
	int type_of_var;
	struct ParamNode *next;
};

struct ParamList
{
	struct ParamNode *head;
	struct ParamNode *tail;
	int size;
};

struct ParamNode *init_ParamNode(char *, int, int);
struct ParamList *init_ParamList();
struct ParamList *ParamInsert(struct ParamList *, char *, int, int);
struct ParamList *ParamDelete(struct ParamList *h);
void printParamList(struct ParamList *);
int ParamGetSize(struct ParamList *);
//---------------------------------------------------------------------------------------------------------

//-----------------------------------------Local Symbol Table-----------------------------------------------
struct LSTNode
{
	int type;
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

struct LSTNode *init_LSTNode(int, int, char *, int);
struct LSTable *init_LSTable();
struct LSTable *LSTInstall(struct LSTable *, char *, int, int);
struct LSTNode *LSTLookUp(struct LSTable *, char *);
struct LSTable *LSTDelete(struct LSTable *);
void printLST(struct LSTable *);
int LSTGetSize(struct LSTable *);
//----------------------------------------------------------------------------------------------------------

//-----------------------------------------Global Symbol Table----------------------------------------------
struct GSTNode
{
	int type;
	int type_of_var;
	char *varname;
	int binding_addr;
	int size;
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
struct GSTNode *init_GSTNode(int, int, char *, int, struct ParamList *, struct LSTable *);
//checks whether id is already present in symbol table if it is, it returns pointer to it o/w NULL
struct GSTNode *GSTLookUp(struct GSTable *, char *);
//installs identifier in symbol table
struct GSTable *GSTInstall(struct GSTable *, int, int, char *, int, struct ParamList *, struct LSTable *);
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
	int type;
	char *varname;
	int oper;
	int val;
	char *s;
	struct GSTNode *gst;
	struct AST_Node *left, *right;
};

//function declaration for Abstract Syntax Tree
struct AST_Node *makeTreeNode(int, int, char *, int, int, struct AST_Node *, struct AST_Node *, struct GSTNode *, char *);
//for printing syntax tree
void print_tree(struct AST_Node *);
//----------------------------------------------------------------------------------------------------------

//-----------------------------------Auxiliary Function----------------------------------------
//returns next available address
int allocate(int);
//resets addr variable to zero
void init_storage();
//resets LABEL variable to 0
void init_Label();
//returns next available LABEL
int getLabel();
int typeCheckExp(struct AST_Node *);
int typeCheckBool(struct AST_Node *);
int typeCheckStr(struct AST_Node *);
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

//-----------------------------------------Code Generation Function-------------------------------------------------------
reg_idx expression_code_generator(FILE *, struct AST_Node *, struct GSTNode *);
int assignment_code_generator(FILE *, struct AST_Node *, struct GSTNode *);
int read_code_generator(FILE *, struct AST_Node *, struct GSTNode *);
int write_code_generator(FILE *, struct AST_Node *, struct GSTNode *);
void boolean_code_generator(FILE *, struct AST_Node *, int, struct GSTNode *);
void if_else_code_generator(FILE *, struct AST_Node *, int, int, struct GSTNode *);
void while_code_generator(FILE *, struct AST_Node *, int, int, struct GSTNode *);
void break_code_generator(FILE *, struct AST_Node *, int, int);
void continue_code_generator(FILE *, struct AST_Node *, int, int);
void breakpoint_code_generator(FILE *, struct AST_Node *);
void repeat_until_code_generator(FILE *, struct AST_Node *, int, int, struct GSTNode *);
void do_while_code_generator(FILE *, struct AST_Node *, int, int, struct GSTNode *);
void code_generator_util(FILE *, struct AST_Node *, int, int, struct GSTNode *);
void code_generator(FILE *, struct AST_Node *, struct GSTNode *);
reg_idx getArrayNodeAddress(FILE *, struct AST_Node *, struct GSTNode *);
//------------------------------------------------------------------------------------------------------------------------

//-----------------------------------------------Evaluator Function-------------------------------------------------------
int expression_evaluator(struct AST_Node *);
void assignment_evaluator(struct AST_Node *);
void read_evaluator(struct AST_Node *);
void write_evaluator(struct AST_Node *);
void evaluator_util(struct AST_Node *);
void evaluator(struct AST_Node *);
//------------------------------------------------------------------------------------------------------------------------
