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

//--------------------------------------Abstract Syntax Tree Declrations---------------------------------
struct AST_Node
{
	int val;
	int type;
	char *varname;
	int nodetype;
	char *oper;
	struct AST_Node *left, *right;
};

int address[26];

void allocate();
struct AST_Node *makeVariableLeafNode(int, int, char);
struct AST_Node *makeConstantLeafNode(int, int, int);
struct AST_Node *makeStatementNode(int, int, struct AST_Node *, struct AST_Node *);
struct AST_Node *makeExpressionNode(int, int, char, struct AST_Node *, struct AST_Node *);
struct AST_Node *makeRWNode(int, int, struct AST_Node *);
void print_tree(struct AST_Node *);
//----------------------------------------------------------------------------------------------------------

//-----------------------------------------Register Allocation Strategy---------------------------------------------------
#define reg_idx int
int reg_pool[20];

void init_reg_pool();
//returns smallest i where Ri is free reg available in pool
reg_idx getReg();
//releases greatest i where Ri is allocated register
reg_idx freeReg();
reg_idx code_generator_util(FILE *,struct AST_Node *);
void code_generator(FILE *,struct AST_Node *);
//------------------------------------------------------------------------------------------------------------------------
