void allocate()
{
	int curr = 4096;
	for (int i = 0; i < 26; i++)
	{
		address[i] = curr;
		curr++;
	}
}
//--------------------------------------Abstract Syntax Tree Declrations---------------------------------
struct AST_Node *makeVariableLeafNode(int nodetype, int type, char varname)
{
	struct AST_Node *newn;
	newn = (struct AST_Node *)malloc(sizeof(struct AST_Node));
	newn->type = type;
	newn->nodetype = nodetype;
	newn->varname = (char *)malloc(sizeof(char));
	*(newn->varname) = varname;
	newn->left = newn->right = NULL;
	newn->oper = NULL;
	return newn;
}

struct AST_Node *makeConstantLeafNode(int nodetype, int type, int val)
{
	struct AST_Node *newn = (struct AST_Node *)malloc(sizeof(struct AST_Node));
	newn->nodetype = nodetype;
	newn->type = type;
	newn->val = val;
	newn->left = newn->right = NULL;
	newn->oper = newn->varname = NULL;
	return newn;
}

struct AST_Node *makeStatementNode(int nodetype, int type, struct AST_Node *l, struct AST_Node *r)
{
	struct AST_Node *newn = (struct AST_Node *)malloc(sizeof(struct AST_Node));
	newn->nodetype = nodetype;
	newn->type = type;
	newn->varname = newn->oper = NULL;
	newn->left = l;
	newn->right = r;
	return newn;
}

struct AST_Node *makeExpressionNode(int nodetype, int type, char op, struct AST_Node *l, struct AST_Node *r)
{
	struct AST_Node *newn = (struct AST_Node *)malloc(sizeof(struct AST_Node));
	newn->nodetype = nodetype;
	newn->type = type;
	newn->oper = (char *)malloc(sizeof(char));
	*(newn->oper) = op;
	newn->left = l;
	newn->right = r;
	newn->varname = NULL;
	return newn;
}

struct AST_Node *makeRWNode(int nodetype, int type, struct AST_Node *l)
{
	struct AST_Node *newn = (struct AST_Node *)malloc(sizeof(struct AST_Node));
	newn->nodetype = nodetype;
	newn->type = type;
	newn->right = NULL;
	newn->left = l;
	newn->varname = newn->oper = NULL;
	return newn;
}

void print_tree(struct AST_Node *root){
	if(root){
		printf("%d %d\n",root->nodetype,root->type);
		print_tree(root->left);
		print_tree(root->right);
	}
}
//----------------------------------------------------------------------------------------------------------

//-----------------------------Register Allocation Functions-------------------------
void init_reg_pool()
{
	for (int i = 0; i < 20; i++)
		reg_pool[i] = 0;
	return;
}

reg_idx getReg()
{
	for (int i = 0; i < 20; i++)
	{
		if (reg_pool[i] == 0)
		{
			reg_pool[i] = 1;
			return i;
		}
	}
	printf("Allocating Register Error\n");
	return -1;
}

reg_idx freeReg()
{
	int mx = -1;
	for (int i = 0; i < 20; i++)
	{
		if (reg_pool[i] == 1 && i > mx)
			mx = i;
	}
	if (mx != -1)
	{
		reg_pool[mx] = 0;
		return mx;
	}
	printf("Release Reg Error\n");
	return -1;
}
//-----------------------------------------------------------------------------------

//-------------------------------Code Generation-------------------------------------
reg_idx code_generator_util(FILE *ft, struct ET_Node *root)
{
	if (root->oper == NULL)
	{
		reg_idx id = getReg();
		if (id == -1)
			exit(1);
		fprintf(ft, "MOV R%d,%d\n", id, root->val);
		return id;
	}
	else
	{
		reg_idx a = code_generator_util(ft, root->left);
		reg_idx b = code_generator_util(ft, root->right);
		reg_idx id;
		switch (*(root->oper))
		{
		case '+':
			fprintf(ft, "ADD R%d,R%d\n", a, b);
			id = freeReg();
			if (id == -1)
				exit(1);
			return a;
			break;
		case '-':
			fprintf(ft, "SUB R%d,R%d\n", a, b);
			id = freeReg();
			if (id == -1)
				exit(1);
			return a;
			break;
		case '/':
			fprintf(ft, "DIV R%d,R%d\n", a, b);
			id = freeReg();
			if (id == -1)
				exit(1);
			return a;
			break;
		case '*':
			fprintf(ft, "MUL R%d,R%d\n", a, b);
			id = freeReg();
			if (id == -1)
				exit(1);
			return a;
			break;
		}
	}
}
void code_generator(FILE *ft, struct ET_Node *root)
{
	init_reg_pool();
	fprintf(ft, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", 0, 2056, 0, 0, 0, 0, 0, 0);
	fprintf(ft, "BRKP\n");
	reg_idx res = code_generator_util(ft, root);
	if (res == -1)
		exit(1);
	fprintf(ft, "MOV [4096],R%d\n", res);
	fprintf(ft, "MOV SP,4096\n");
	reg_idx temp = getReg();
	if (temp == -1)
		exit(1);
	fprintf(ft, "MOV R%d,\"Write\"\n", temp);
	fprintf(ft, "PUSH R%d\n", temp);
	fprintf(ft, "MOV R%d,-2\n", temp);
	fprintf(ft, "PUSH R%d\n", temp);
	fprintf(ft, "PUSH R%d\n", res);
	fprintf(ft, "PUSH R%d\n", temp);
	fprintf(ft, "PUSH R%d\n", temp);
	fprintf(ft, "CALL 0\n");
	fprintf(ft, "POP R%d\n", temp);
	fprintf(ft, "POP R%d\n", temp);
	fprintf(ft, "POP R%d\n", res);
	fprintf(ft, "POP R%d\n", temp);
	fprintf(ft, "POP R%d\n", temp);
	fprintf(ft, "MOV R%d,\"Exit\"\n", temp);
	fprintf(ft, "PUSH R%d\n", temp);
	fprintf(ft, "PUSH R%d\n", temp);
	fprintf(ft, "PUSH R%d\n", temp);
	fprintf(ft, "PUSH R%d\n", temp);
	fprintf(ft, "PUSH R%d\n", temp);
	fprintf(ft, "CALL 0\n");
	fclose(ft);
}
//-----------------------------------------------------------------------------------
