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

int address[26];
int storage[26];
int LABEL;

//address for identifiers [a-z]
void allocate();
void clear_storage();
//for obtaining Labels
void init_Label();
int getLabel();
//function declaration for Abstract Syntax Tree
struct AST_Node *makeVariableLeafNode(int, int, char, char *);
struct AST_Node *makeConstantLeafNode(int, int, int, char *);
struct AST_Node *makeCBNode(int, int, char *);
struct AST_Node *makeContinueNode(int, int, char *);
struct AST_Node *makeStatementNode(int, int, struct AST_Node *, struct AST_Node *, char *);
struct AST_Node *makeExpressionNode(int, int, char, struct AST_Node *, struct AST_Node *, char *);
struct AST_Node *makeRWNode(int, int, struct AST_Node *, char *);
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
