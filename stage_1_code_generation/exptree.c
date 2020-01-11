//---------------------------------------------Abstract Syntax Tree Functions------------------------------
struct AST_Node *makeLeafNode(int num){
	struct AST_Node *newnode;
	newnode = (struct AST_Node *)malloc(sizeof(struct AST_Node));
	newnode->val = num;
	newnode->oper = NULL;
	newnode->left = newnode->right = NULL;
	return newnode;
}

struct AST_Node *makeOperatorNode(char op,struct AST_Node *l,struct AST_Node *r){
	struct AST_Node *newnode;
	newnode = (struct AST_Node *)malloc(sizeof(struct AST_Node));
	newnode->oper = (char *)malloc(sizeof(char));
	*(newnode->oper) = op;
	newnode->left = l;
	newnode->right = r;
	return newnode;
}

void prefix(struct AST_Node *root){
	if(root->oper == NULL){
		printf("%d ",root->val);
		return;
	}
	printf("%c ",*(root->oper));
	prefix(root->left);
	prefix(root->right);
	return;
}

void postfix(struct AST_Node *root){
	if(root->oper == NULL){
		printf("%d ",root->val);
		return;
	}
	postfix(root->left);
	postfix(root->right);
	printf("%c ",*(root->oper));
	return;
}

int evaluate(struct AST_Node *root){
	if(root->oper == NULL)
		return root->val;
	else{
		int a = evaluate(root->left);
		int b = evaluate(root->right);
		switch(*(root->oper)){
			case '+':
				return (a + b);
				break;
			case '-':
				return (a - b);
				break;
			case '*':
				return (a * b);
				break;
			case '/':
				return (a / b);
				break;
		}
	}
}
//-----------------------------------------------------------------------------------

//-----------------------------Auxiliary Data Structure function---------------------
vector *init_vector(){
	vector *newn = (vector *)malloc(sizeof(vector));
	newn->capacity = 2;
	newn->arr = (int *)malloc(sizeof(int) * 2);
	newn->size = 0;
	return newn;
}

vector *push_back(vector *v,int val){
	if(v->size == v->capacity){
		v->capacity *= 2;
		v->arr = (int *)realloc(v->arr,v->capacity * sizeof(int));
	}
	v->arr[v->size] = val;
	v->size++;
	return v;
}
int size(vector *v){
	return (v->size);
}
//-----------------------------------------------------------------------------------

//-----------------------------Register Allocation Functions-------------------------
reg_idx getReg(){
	for(int i = 0;i < 20;i++){
		if(reg_pool[i] == 0){
			reg_pool[i] = 1;
			return i;
		}
	}
	printf("Allocating Register Error\n");
	return -1;
}

reg_idx freeReg(){
	int mx = -1;
	for(int i = 0;i < 20;i++)
	{
		if(reg_pool[i] == 1 && i > mx)
			mx = i;
	}
	if(mx != -1){
		reg_pool[mx] = 0;
		return mx;
	}
	printf("Release Reg Error\n");
	return -1;
}
//-----------------------------------------------------------------------------------

//-------------------------------Code Generation-------------------------------------
reg_idx code_generator_util(FILE *ft,struct AST_Node *root){
	if(root->oper == NULL){
		reg_idx id = getReg();
		if(id == -1) exit(1);
		fprintf(ft,"MOV R%d,%d\n",id,root->val);
		return id;
	}
	else{
		reg_idx a = code_generator_util(ft,root->left);
		reg_idx b = code_generator_util(ft,root->right);
		reg_idx id;
		switch(*(root->oper)){
			case '+':
				fprintf(ft,"ADD R%d,R%d\n",a,b);
				id = freeReg();
				if(id == -1) exit(1);
				return a;
				break;
			case '-':
				fprintf(ft,"SUB R%d,R%d\n",a,b);
				id = freeReg();
				if(id == -1) exit(1);
				return a;
				break;
			case '/':
				fprintf(ft,"DIV R%d,R%d\n",a,b);
				id = freeReg();
				if(id == -1) exit(1);
				return a;
				break;
			case '*':
				fprintf(ft,"MUL R%d,R%d\n",a,b);
				id = freeReg();
				if(id == -1) exit(1);
				return a;
				break;
		}
	}
}
void code_generator(FILE *ft,struct AST_Node *root){
	fprintf(ft,"%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
	fprintf(ft,"BRKP\n");
	reg_idx res = code_generator_util(ft,root);
	if(res == -1) exit(1);
	fprintf(ft,"MOV [4096],R%d\n",res);
	fprintf(ft,"MOV SP,4096\n");
	reg_idx temp = getReg();
	if(temp == -1) exit(1);
	fprintf(ft,"MOV R%d,\"Write\"\n",temp);
	fprintf(ft,"PUSH R%d\n",temp);
	fprintf(ft,"MOV R%d,-2\n",temp);
	fprintf(ft,"PUSH R%d\n",temp);
	fprintf(ft,"PUSH R%d\n",res);
	fprintf(ft,"PUSH R%d\n",temp);
	fprintf(ft,"PUSH R%d\n",temp);
	fprintf(ft,"CALL 0\n");
	fprintf(ft,"POP R%d\n",temp);
	fprintf(ft,"POP R%d\n",temp);
	fprintf(ft,"POP R%d\n",res);
	fprintf(ft,"POP R%d\n",temp);
	fprintf(ft,"POP R%d\n",temp);
	fprintf(ft,"MOV R%d,\"Exit\"\n",temp);
	fprintf(ft,"PUSH R%d\n",temp);
	fprintf(ft,"PUSH R%d\n",temp);
	fprintf(ft,"PUSH R%d\n",temp);
	fprintf(ft,"PUSH R%d\n",temp);
	fprintf(ft,"PUSH R%d\n",temp);
	fprintf(ft,"CALL 0\n");
	fclose(ft);
}
//-----------------------------------------------------------------------------------
