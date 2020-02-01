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

#define LOOP 20
#define WHILE 21
#define REPEAT_UNTIL 22
#define DO_WHILE 23

#define PLUS 24
#define MINUS 25
#define DIV 26
#define MUL 27
#define MOD 28

#define LT 29
#define LE 30
#define GT 31
#define GE 32
#define NE 33
#define EQ 34

int ADDR;
int LABEL;
int line;

//-----------------------------------------Parameter Linked List-------------------------------------------
struct ParamNode
{
	char *varname;
	int type;
	struct ParamNode *next;
};

struct ParamList
{
	struct ParamNode *head;
	struct ParamNode *tail;
	int size;
};

struct ParamNode *init_ParamNode(char *, int);
struct ParamList *init_ParamList();
struct ParamList *ParamInsert(struct ParamList *, char *, int);
struct ParamList *ParamDelete(struct ParamList *h);
void printParamList(struct ParamList *);
int ParamGetSize(struct ParamList *);
//---------------------------------------------------------------------------------------------------------

//-----------------------------------------Local Symbol Table-----------------------------------------------
struct LSTNode
{
	int type;
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

struct LSTNode *init_LSTNode(int, char *, int);
struct LSTable *init_LSTable();
struct LSTable *LSTInstall(struct LSTable *, char *, int);
struct LSTNode *LSTLookUp(struct LSTable *, char *);
struct LSTable *LSTDelete(struct LSTable *);
void printLSTable(struct LSTable *);
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
	struct LSTable *lst;
	struct AST_Node *left, *right;
};

//function declaration for Abstract Syntax Tree
struct AST_Node *makeTreeNode(int, int, char *, int, int, struct AST_Node *, struct AST_Node *, struct GSTNode *, struct LSTable *, char *);
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
