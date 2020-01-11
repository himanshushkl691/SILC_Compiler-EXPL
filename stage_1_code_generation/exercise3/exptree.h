//------------------------------------------Expression Tree Declaration Section--------------------------------------
struct ET_Node{
	int val;
	char *oper;
	struct ET_Node *left,*right;
};

struct ET_Node *makeLeafNode(int);
struct ET_Node *makeOperatorNode(char,struct ET_Node *,struct ET_Node *);
void postfix(struct ET_Node *);
void prefix(struct ET_Node *);
int evaluate(struct ET_Node *);
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
reg_idx code_generator_util(FILE *,struct ET_Node *);
void code_generator(FILE *,struct ET_Node *);
//------------------------------------------------------------------------------------------------------------------------
