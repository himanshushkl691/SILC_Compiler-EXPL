//------------------------------------------Abstract Syntax Tree Declaration Section--------------------------------------
struct AST_Node{
	int val;
	char *oper;
	struct AST_Node *left,*right;
};

struct AST_Node *makeLeafNode(int);
struct AST_Node *makeOperatorNode(char,struct AST_Node *,struct AST_Node *);
void postfix(struct AST_Node *);
void prefix(struct AST_Node *);
int evaluate(struct AST_Node *);
//------------------------------------------------------------------------------------------------------------------------

//----------------Auxiliary Data Structure-----------------
typedef struct vector{
	int *arr;
	int size;
	int capacity;
}vector;
vector *init_vector();
vector *push_back(vector *,int);
int size(vector *v);
//---------------------------------------------------------

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
