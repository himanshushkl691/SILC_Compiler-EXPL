#define PROGRAM 0
#define STATEMENT 1
#define EXPRESSION 2
#define VARIABLE 3
#define INPUT 4
#define OUTPUT 5
#define ASSIGNMENT 6
#define PLUS 7
#define MINUS 8
#define MUL 9
#define DIV 10
#define CONSTANT 11
#define INTEGER 12
#define READ 13
#define WRITE 14
#define BOOLEAN 15
#define LT 16
#define LE 17
#define GT 18
#define GE 19
#define NE 20
#define EQ 21
#define IF 22
#define ELSE 23
#define IF_ELSE 24
#define WHILE 25
#define BREAK 26
#define CONTINUE 27
#define BREAKPOINT 28
#define LOOP 29
#define REPEAT_UNTIL 30
#define DO_WHILE 31
#define STRING 32
#define NONE 33

//--------------------------------------Abstract Syntax Tree Declrations---------------------------------
struct AST_Node
{
	int val;
	int type;
	char *varname;
	int nodetype;
	char *oper;
	char *s;
	struct AST_Node *left, *right;
};

int ADDR;
int LABEL;

//returns next available address
int allocate();
//resets addr variable to zero
void init_storage();
//resets LABEL variable to 0
void init_Label();
//returns next available LABEL
int getLabel();
//function declaration for Abstract Syntax Tree
//for creating variable node
struct AST_Node *makeVariableLeafNode(int, int, char *, char *);
//for creating constant node
struct AST_Node *makeConstantLeafNode(int, int, int, char *);
//for creating constant string node
struct AST_Node *makeConstantStringLeaf(int, int, char *);
//for creating break and continue statement node
struct AST_Node *makeCBNode(int, int, char *);
//for creating Statement node of category nodetype inlcludes assignment statement
struct AST_Node *makeStatementNode(int, int, struct AST_Node *, struct AST_Node *, char *);
//for creating node for expressions left and right subtree are expression
struct AST_Node *makeExpressionNode(int, int, char, struct AST_Node *, struct AST_Node *, char *);
//makes and return read or write statement node
struct AST_Node *makeRWNode(int, int, struct AST_Node *, char *);
void print_tree(struct AST_Node *);
//----------------------------------------------------------------------------------------------------------

//-----------------------------------------Global Symbol Table----------------------------------------------
struct GSTNode
{
	int type;
	char *varname;
	int binding_addr;
	int size;
	struct GSTNode *next;
};

//for creating
struct GSTNode *init_node(int, int, char *);
//checks whether id is already present in symbol table if it is returns pointer to it o/w NULL
struct GSTNode *LookUp(struct GSTNode *, char *);
//returns (1/0) whether id is installed or not in symbol table;
struct GSTNode *InstallID(struct GSTNode *, int, int, char *);
//function for changing type of a variable
struct GSTNode *changeType(struct GSTNode *, int, char *);
//function for changing size of a variable
struct GSTNode *changeSize(struct GSTNode *, int, char *);
//function for retrieving binding address of variable
int getAddr(struct GSTNode *, char *);
//----------------------------------------------------------------------------------------------------------

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
reg_idx expression_code_generator(FILE *, struct AST_Node *);
int assignment_code_generator(FILE *, struct AST_Node *);
int read_code_generator(FILE *, struct AST_Node *);
int write_code_generator(FILE *, struct AST_Node *);
void boolean_code_generator(FILE *, struct AST_Node *, int);
void if_else_code_generator(FILE *, struct AST_Node *, int, int);
void while_code_generator(FILE *, struct AST_Node *, int, int);
void break_code_generator(FILE *, struct AST_Node *, int, int);
void continue_code_generator(FILE *, struct AST_Node *, int, int);
void breakpoint_code_generator(FILE *, struct AST_Node *);
void repeat_until_code_generator(FILE *, struct AST_Node *, int, int);
void do_while_code_generator(FILE *, struct AST_Node *, int, int);
void code_generator_util(FILE *, struct AST_Node *, int, int);
void code_generator(FILE *, struct AST_Node *);
//------------------------------------------------------------------------------------------------------------------------

//-----------------------------------------------Evaluator Function-------------------------------------------------------
int expression_evaluator(struct AST_Node *);
void assignment_evaluator(struct AST_Node *);
void read_evaluator(struct AST_Node *);
void write_evaluator(struct AST_Node *);
void evaluator_util(struct AST_Node *);
void evaluator(struct AST_Node *);
//------------------------------------------------------------------------------------------------------------------------
