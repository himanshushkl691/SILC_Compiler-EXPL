//--------------------------------------Static Storage Allocation---------------------------------------
void allocate()
{
	int curr = 4096;
	for (int i = 0; i < 26; i++)
	{
		address[i] = curr;
		curr++;
	}
}

void clear_storage()
{
	for (int i = 0; i < 26; i++)
		storage[i] = 0;
	return;
}
//-------------------------------------------------------------------------------------------------------

//--------------------------------------Abstract Syntax Tree Declrations---------------------------------
struct AST_Node *makeVariableLeafNode(int nodetype, int type, char varname, char *s)
{
	struct AST_Node *newn;
	newn = (struct AST_Node *)malloc(sizeof(struct AST_Node));
	newn->oper = (char *)malloc(sizeof(char));
	newn->s = (char *)malloc(strlen(s) * sizeof(char));
	newn->s = strdup(s);
	newn->type = type;
	newn->nodetype = nodetype;
	newn->varname = (char *)malloc(sizeof(char));
	*(newn->varname) = varname;
	newn->left = newn->right = NULL;
	newn->oper = NULL;
	return newn;
}

struct AST_Node *makeConstantLeafNode(int nodetype, int type, int val, char *s)
{
	struct AST_Node *newn = (struct AST_Node *)malloc(sizeof(struct AST_Node));
	newn->oper = (char *)malloc(sizeof(char));
	newn->s = (char *)malloc(strlen(s) * sizeof(char));
	newn->s = strdup(s);
	newn->nodetype = nodetype;
	newn->type = type;
	newn->val = val;
	newn->left = newn->right = NULL;
	newn->oper = newn->varname = NULL;
	return newn;
}

struct AST_Node *makeStatementNode(int nodetype, int type, struct AST_Node *l, struct AST_Node *r, char *s)
{
	struct AST_Node *newn = (struct AST_Node *)malloc(sizeof(struct AST_Node));
	newn->oper = (char *)malloc(sizeof(char));
	newn->s = (char *)malloc(strlen(s) * sizeof(char));
	newn->s = strdup(s);
	newn->nodetype = nodetype;
	newn->type = type;
	newn->varname = newn->oper = NULL;
	newn->left = l;
	newn->right = r;
	return newn;
}

struct AST_Node *makeExpressionNode(int nodetype, int type, char op, struct AST_Node *l, struct AST_Node *r, char *s)
{
	struct AST_Node *newn = (struct AST_Node *)malloc(sizeof(struct AST_Node));
	newn->nodetype = nodetype;
	newn->type = type;
	newn->oper = (char *)malloc(sizeof(char));
	newn->s = (char *)malloc(strlen(s) * sizeof(char));
	newn->s = strdup(s);
	*(newn->oper) = op;
	newn->left = l;
	newn->right = r;
	newn->varname = NULL;
	return newn;
}

struct AST_Node *makeRWNode(int nodetype, int type, struct AST_Node *l, char *s)
{
	struct AST_Node *newn = (struct AST_Node *)malloc(sizeof(struct AST_Node));
	newn->oper = (char *)malloc(sizeof(char));
	newn->s = (char *)malloc(strlen(s) * sizeof(char));
	newn->s = strdup(s);
	newn->nodetype = nodetype;
	newn->type = type;
	newn->right = NULL;
	newn->left = l;
	newn->varname = newn->oper = NULL;
	return newn;
}

void print_tree(struct AST_Node *root)
{
	if (root)
	{
		print_tree(root->left);
		printf("%s ", root->s);
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
reg_idx expression_code_generator(FILE *ft, struct AST_Node *root)
{
	if (root->nodetype == CONSTANT && root->type == INTEGER && root->oper == NULL)
	{
		reg_idx id = getReg();
		if (id == -1)
			exit(1);
		fprintf(ft, "MOV R%d,%d\n", id, root->val);
		return id;
	}
	if (root->nodetype == VARIABLE && root->type == INTEGER && root->varname != NULL)
	{
		int aRes = address[*(root->varname) - 'a'];
		reg_idx id = getReg();
		if (id == -1)
			exit(1);
		fprintf(ft, "MOV R%d,[%d]\n", id, aRes);
		return id;
	}
	else
	{
		reg_idx a = expression_code_generator(ft, root->left);
		reg_idx b = expression_code_generator(ft, root->right);
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

int assignment_code_generator(FILE *ft, struct AST_Node *root)
{
	if (root && root->left && root->right)
	{
		reg_idx id = expression_code_generator(ft, root->right);
		int aRes = address[*(root->left->varname) - 'a'];
		fprintf(ft, "MOV [%d],R%d\n", aRes, id);
		id = freeReg();
		if (id == -1)
			exit(1);
		return 1;
	}
	printf("Improper Assignment Node\n");
	exit(1);
	return -1;
}

int write_code_generator(FILE *ft, struct AST_Node *root)
{
	if (root && root->left)
	{
		reg_idx id = expression_code_generator(ft, root->left);
		reg_idx temp = getReg();
		if (temp == -1)
			exit(1);
		fprintf(ft, "MOV R%d,\"Write\"\n", temp);
		fprintf(ft, "PUSH R%d\n", temp);
		fprintf(ft, "MOV R%d,-2\n", temp);
		fprintf(ft, "PUSH R%d\n", temp);
		fprintf(ft, "PUSH R%d\n", id);
		fprintf(ft, "PUSH R%d\n", temp);
		fprintf(ft, "PUSH R%d\n", temp);
		fprintf(ft, "CALL 0\n");
		fprintf(ft, "POP R%d\n", temp);
		fprintf(ft, "POP R%d\n", temp);
		fprintf(ft, "POP R%d\n", temp);
		fprintf(ft, "POP R%d\n", temp);
		fprintf(ft, "POP R%d\n", temp);
		id = freeReg();
		if (id == -1)
			exit(1);
		id = freeReg();
		if (id == -1)
			exit(1);
		return 1;
	}
	printf("Improper Writing Node\n");
	return -1;
}

int read_code_generator(FILE *ft, struct AST_Node *root)
{
	int aRes = address[*(root->left->varname) - 'a'];
	reg_idx id = getReg();
	if (id == -1)
		exit(1);
	reg_idx temp = getReg();
	if (temp == -1)
		exit(1);
	fprintf(ft, "MOV R%d,%d\n", id, aRes);
	fprintf(ft, "MOV R%d,\"Read\"\n", temp);
	fprintf(ft, "PUSH R%d\n", temp);
	fprintf(ft, "MOV R%d,-1\n", temp);
	fprintf(ft, "PUSH R%d\n", temp);
	fprintf(ft, "PUSH R%d\n", id);
	fprintf(ft, "PUSH R%d\n", temp);
	fprintf(ft, "PUSH R%d\n", temp);
	fprintf(ft, "CALL 0\n");
	fprintf(ft, "POP R%d\n", temp);
	fprintf(ft, "POP R%d\n", temp);
	fprintf(ft, "POP R%d\n", temp);
	fprintf(ft, "POP R%d\n", temp);
	fprintf(ft, "POP R%d\n", temp);
	temp = freeReg();
	if (temp == -1)
		exit(1);
	id = freeReg();
	if (id == -1)
		exit(1);
	return 1;
}

void code_generator_util(FILE *ft, struct AST_Node *root)
{
	if (root)
	{
		if (root->nodetype == EXPRESSION && root->type == ASSIGNMENT)
		{
			assignment_code_generator(ft, root);
			return;
		}
		if (root->nodetype == STATEMENT && root->type == READ)
		{
			read_code_generator(ft, root);
			return;
		}
		if (root->nodetype == STATEMENT && root->type == WRITE)
		{
			write_code_generator(ft, root);
			return;
		}
		code_generator_util(ft, root->left);
		code_generator_util(ft, root->right);
	}
	return;
}

void code_generator(FILE *ft, struct AST_Node *root)
{
	init_reg_pool();
	allocate();
	fprintf(ft, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", 0, 2056, 0, 0, 0, 0, 0, 0);
	fprintf(ft, "BRKP\n");
	fprintf(ft, "MOV SP,4121\n");
	code_generator_util(ft, root);
	reg_idx temp = getReg();
	if (temp == -1)
		exit(1);
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

//----------------------------------Evaluator----------------------------------------
int expression_evaluator(struct AST_Node *root)
{
	if (root->nodetype == CONSTANT && root->type == INTEGER && root->oper == NULL)
	{
		int ans = root->val;
		return ans;
	}
	if (root->nodetype == VARIABLE && root->type == INTEGER && root->varname != NULL)
	{
		int aRes = *(root->varname) - 'a';
		return storage[aRes];
	}
	else
	{
		int a = expression_evaluator(root->left);
		int b = expression_evaluator(root->right);
		switch (*(root->oper))
		{
		case '+':
			return (a + b);
			break;
		case '-':
			return (a - b);
			break;
		case '/':
			return (a / b);
			break;
		case '*':
			return (a * b);
			break;
		}
	}
}

void assignment_evaluator(struct AST_Node *root)
{
	int ans = expression_evaluator(root->right);
	int aRes = *(root->left->varname) - 'a';
	storage[aRes] = ans;
	return;
}
void write_evaluator(struct AST_Node *root)
{
	int ans = expression_evaluator(root->left);
	printf("%d\n", ans);
	return;
}
void read_evaluator(struct AST_Node *root)
{
	int aRes = *(root->left->varname) - 'a';
	scanf("%d", &storage[aRes]);
	return;
}
void evaluator_util(struct AST_Node *root)
{
	if (root)
	{
		if (root->nodetype == EXPRESSION && root->type == ASSIGNMENT)
		{
			assignment_evaluator(root);
			return;
		}
		if (root->nodetype == STATEMENT && root->type == READ)
		{
			read_evaluator(root);
			return;
		}
		if (root->nodetype == STATEMENT && root->type == WRITE)
		{
			write_evaluator(root);
			return;
		}
		evaluator_util(root->left);
		evaluator_util(root->right);
	}
	return;
}
void evaluator(struct AST_Node *root)
{
	clear_storage();
	evaluator_util(root);
}
//-----------------------------------------------------------------------------------
