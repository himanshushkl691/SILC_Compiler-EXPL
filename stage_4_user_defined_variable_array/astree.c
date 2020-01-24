//--------------------------------------Static Storage Allocation---------------------------------------
int allocate()
{
	int a = ADDR;
	ADDR++;
	return a;
}

void init_storage()
{
	ADDR = 4096;
}

void init_Label()
{
	LABEL = 0;
	return;
}

int getLabel()
{
	int a = LABEL;
	LABEL++;
	return a;
}
//-------------------------------------------------------------------------------------------------------

//-----------------------------Global Symbol Table-----------------------------------
void printGST(struct GSTNode *root)
{
	struct GSTNode *curr = root;
	while (curr)
	{
		printf("%s		%d			%d			%d\n", curr->varname, curr->type, curr->size, curr->binding_addr);
		curr = curr->next;
	}
}

struct GSTNode *init_node(int type, int size, char *s)
{
	struct GSTNode *newn = (struct GSTNode *)malloc(sizeof(struct GSTNode));
	newn->varname = (char *)malloc(strlen(s) * sizeof(char));
	newn->varname = strdup(s);
	newn->type = type;
	newn->size = size;
	newn->binding_addr = allocate();
	newn->next = NULL;
	return newn;
}

struct GSTNode *LookUp(struct GSTNode *root, char *s)
{
	struct GSTNode *curr;
	curr = root;
	while (curr)
	{
		if (strcmp(curr->varname, s) == 0)
			return curr;
		curr = curr->next;
	}
	return NULL;
}

struct GSTNode *InstallID(struct GSTNode *root, int type, int size, char *s)
{
	if (LookUp(root, s))
	{
		printf("Variable \"%s\" redeclared\n", s);
		exit(1);
	}
	else
	{
		struct GSTNode *curr, *prev;
		curr = root;
		prev = NULL;
		while (curr)
		{
			prev = curr;
			curr = curr->next;
		}
		if (prev)
		{
			prev->next = init_node(type, size, s);
		}
		else
			root = init_node(type, size, s);
		if (LookUp(root, s))
			return root;
		else
		{
			printf("Installation error\n");
			exit(1);
		}
	}
}

struct GSTNode *GSTchangeType(struct GSTNode *root, int type, char *s)
{
	struct GSTNode *curr = LookUp(root, s);
	if (!curr)
	{
		printf("ChangeTypeError: Variable not found\n");
		exit(1);
	}
	curr->type = type;
	return root;
}

struct GSTNode *GSTchangeSize(struct GSTNode *root, int size, char *s)
{
	struct GSTNode *curr = LookUp(root, s);
	if (!curr)
	{
		printf("ChangeSizeError: Variable not declared\n");
		exit(1);
	}
	curr->size = size;
	return root;
}

int getAddr(struct GSTNode *root, char *s)
{
	struct GSTNode *curr;
	curr = LookUp(root, s);
	if (!curr)
	{
		printf("AddressRetrievalError: Variable not declared\n");
		exit(1);
	}
	return (curr->binding_addr);
}
//-----------------------------------------------------------------------------------

//--------------------------------------Abstract Syntax Tree Declrations---------------------------------
struct AST_Node *makeVariableLeafNode(int nodetype, int type, char *varname, char *s)
{
	struct AST_Node *newn;
	newn = (struct AST_Node *)malloc(sizeof(struct AST_Node));
	newn->oper = (char *)malloc(sizeof(char));
	newn->s = (char *)malloc(strlen(s) * sizeof(char));
	newn->s = strdup(s);
	newn->type = type;
	newn->nodetype = nodetype;
	newn->varname = (char *)malloc(strlen(varname) * sizeof(char));
	newn->varname = strdup(varname);
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

struct AST_Node *makeConstantStringLeaf(int nodetype, int type, char *s)
{
	struct AST_Node *newn = (struct AST_Node *)malloc(sizeof(struct AST_Node));
	newn->s = (char *)malloc(strlen(s) * sizeof(char));
	newn->s = strdup(s);
	newn->nodetype = nodetype;
	newn->type = type;
	newn->left = newn->right = NULL;
	newn->oper = newn->varname = NULL;
	return newn;
}

//for break and continue
struct AST_Node *makeCBNode(int nodetype, int type, char *s)
{
	struct AST_Node *newn = (struct AST_Node *)malloc(sizeof(struct AST_Node));
	newn->nodetype = nodetype;
	newn->type = type;
	newn->s = (char *)malloc(strlen(s) * sizeof(char));
	newn->s = strdup(s);
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

struct AST_Node *ASTchangeType(struct GSTNode *head, struct AST_Node *root, int type)
{
	if (root)
	{
		root->left = ASTchangeType(head, root->left, type);
		root->right = ASTchangeType(head, root->right, type);
		if (root->nodetype == VARIABLE)
			head = GSTchangeType(head, type, root->varname);
		root = NULL;
		free(root);
	}
	return root;
}
//----------------------------------------------------------------------------------------------------------
/*
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
	exit(1);
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
	exit(1);
}
//-----------------------------------------------------------------------------------

//-------------------------------Code Generation-------------------------------------
reg_idx expression_code_generator(FILE *ft, struct AST_Node *root)
{
	if (root->nodetype == CONSTANT && root->type == INTEGER && root->oper == NULL)
	{
		reg_idx id = getReg();
		fprintf(ft, "MOV R%d, %d\n", id, root->val);
		return id;
	}
	if (root->nodetype == VARIABLE && root->type == INTEGER && root->varname != NULL)
	{
		int aRes = address[*(root->varname) - 'a'];
		reg_idx id = getReg();
		fprintf(ft, "MOV R%d, [%d]\n", id, aRes);
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
			fprintf(ft, "ADD R%d, R%d\n", a, b);
			id = freeReg();
			return a;
			break;
		case '-':
			fprintf(ft, "SUB R%d, R%d\n", a, b);
			id = freeReg();
			return a;
			break;
		case '/':
			fprintf(ft, "DIV R%d, R%d\n", a, b);
			id = freeReg();
			return a;
			break;
		case '*':
			fprintf(ft, "MUL R%d, R%d\n", a, b);
			id = freeReg();
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
		fprintf(ft, "MOV [%d], R%d\n", aRes, id);
		id = freeReg();
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
		fprintf(ft, "MOV R%d, \"Write\"\n", temp);
		fprintf(ft, "PUSH R%d\n", temp);
		fprintf(ft, "MOV R%d, -2\n", temp);
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
		id = freeReg();
		return 1;
	}
	printf("Improper Writing Node\n");
	return -1;
}

int read_code_generator(FILE *ft, struct AST_Node *root)
{
	if (root && root->left)
	{
		int aRes = address[*(root->left->varname) - 'a'];
		reg_idx id = getReg();
		reg_idx temp = getReg();
		fprintf(ft, "MOV R%d, %d\n", id, aRes);
		fprintf(ft, "MOV R%d, \"Read\"\n", temp);
		fprintf(ft, "PUSH R%d\n", temp);
		fprintf(ft, "MOV R%d, -1\n", temp);
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
		id = freeReg();
	}
	return 1;
}

void boolean_code_generator(FILE *ft, struct AST_Node *root, int label)
{
	if (root && root->left && root->right)
	{
		reg_idx a = expression_code_generator(ft, root->left);
		reg_idx b = expression_code_generator(ft, root->right);
		switch (root->type)
		{
		case LT:
			fprintf(ft, "LT R%d, R%d\n", a, b);
			break;
		case LE:
			fprintf(ft, "LE R%d, R%d\n", a, b);
			break;
		case GT:
			fprintf(ft, "GT R%d, R%d\n", a, b);
			break;
		case GE:
			fprintf(ft, "GE R%d, R%d\n", a, b);
			break;
		case EQ:
			fprintf(ft, "EQ R%d, R%d\n", a, b);
			break;
		case NE:
			fprintf(ft, "NE R%d, R%d\n", a, b);
			break;
		}
		reg_idx temp = freeReg();
		fprintf(ft, "JZ R%d, _L%d\n", a, label);
		temp = freeReg();
		return;
	}
	printf("Invalid boolean node\n");
	exit(1);
}

void if_else_code_generator(FILE *ft, struct AST_Node *root, int blabel, int clabel)
{
	if (root)
	{
		if (root->left)
		{
			int first_label = getLabel();
			int second_label = getLabel();
			if (root->left->left)
				boolean_code_generator(ft, root->left->left, first_label);
			if (root->left->right)
				code_generator_util(ft, root->left->right, blabel, clabel);
			fprintf(ft, "JMP _L%d\n", second_label);
			fprintf(ft, "_L%d:\n", first_label);
			if (root->right)
				code_generator_util(ft, root->right, blabel, clabel);
			fprintf(ft, "_L%d:\n", second_label);
		}
		return;
	}
	printf("Invalid IF_ELSE node\n");
	return;
}

void while_code_generator(FILE *ft, struct AST_Node *root, int blabel, int clabel)
{
	if (root)
	{
		if (root->left)
		{
			int first_label = getLabel();
			int second_label = getLabel();
			fprintf(ft, "_L%d:\n", first_label);
			boolean_code_generator(ft, root->left, second_label);
			if (root->right)
				code_generator_util(ft, root->right, second_label, first_label);
			fprintf(ft, "JMP _L%d\n", first_label);
			fprintf(ft, "_L%d:\n", second_label);
		}
		return;
	}
	printf("Invalid WHILE node\n");
	return;
}

void do_while_code_generator(FILE *ft, struct AST_Node *root, int blabel, int clabel)
{
	if (root)
	{
		if (root->right)
		{
			int first_label = getLabel();
			int second_label = getLabel();
			fprintf(ft, "_L%d:\n", first_label);
			if (root->left)
				code_generator_util(ft, root->left, second_label, first_label);
			boolean_code_generator(ft, root->right, second_label);
			fprintf(ft, "JMP _L%d\n", first_label);
			fprintf(ft, "_L%d:\n", second_label);
		}
		return;
	}
	printf("Invalid DO_WHILE node\n");
	return;
}

void repeat_until_code_generator(FILE *ft, struct AST_Node *root, int blabel, int clabel)
{
	if (root)
	{
		if (root->right)
		{
			int first_label = getLabel();
			int second_label = getLabel();
			fprintf(ft, "_L%d:\n", first_label);
			if (root->left)
				code_generator_util(ft, root->left, second_label, first_label);
			boolean_code_generator(ft, root->right, first_label);
			fprintf(ft, "_L%d:\n", second_label);
		}
		return;
	}
	printf("Invalid REPEAT_UNTIL node\n");
	return;
}

void break_code_generator(FILE *ft, struct AST_Node *root, int blabel, int clabel)
{
	if (blabel == -1)
		return;
	fprintf(ft, "JMP _L%d\n", blabel);
	return;
}

void continue_code_generator(FILE *ft, struct AST_Node *root, int blabel, int clabel)
{
	if (clabel == -1)
		return;
	fprintf(ft, "JMP _L%d\n", clabel);
	return;
}

void breakpoint_code_generator(FILE *ft, struct AST_Node *root)
{
	fprintf(ft, "BRKP\n");
	return;
}

void code_generator_util(FILE *ft, struct AST_Node *root, int blabel, int clabel)
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
		if (root->nodetype == STATEMENT && root->type == IF_ELSE)
		{
			if_else_code_generator(ft, root, blabel, clabel);
			return;
		}
		if (root->nodetype == LOOP && root->type == WHILE)
		{
			while_code_generator(ft, root, blabel, clabel);
			return;
		}
		if (root->nodetype == LOOP && root->type == DO_WHILE)
		{
			do_while_code_generator(ft, root, blabel, clabel);
			return;
		}
		if (root->nodetype == LOOP && root->type == REPEAT_UNTIL)
		{
			repeat_until_code_generator(ft, root, blabel, clabel);
			return;
		}
		if (root->nodetype == BREAK)
		{
			break_code_generator(ft, root, blabel, clabel);
			return;
		}
		if (root->nodetype == CONTINUE)
		{
			continue_code_generator(ft, root, blabel, clabel);
			return;
		}
		if (root->nodetype == BREAKPOINT)
		{
			breakpoint_code_generator(ft, root);
			return;
		}
		code_generator_util(ft, root->left, blabel, clabel);
		code_generator_util(ft, root->right, blabel, clabel);
	}
	return;
}

void code_generator(FILE *ft, struct AST_Node *root)
{
	init_reg_pool();
	init_Label();
	int temp = allocate();
	fprintf(ft, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", 0, 2056, 0, 0, 0, 0, 0, 0);
	fprintf(ft, "MOV SP, %d\n", temp);
	code_generator_util(ft, root, -1, -1);
	reg_idx temp = getReg();
	fprintf(ft, "MOV R%d, \"Exit\"\n", temp);
	fprintf(ft, "PUSH R%d\n", temp);
	fprintf(ft, "PUSH R%d\n", temp);
	fprintf(ft, "PUSH R%d\n", temp);
	fprintf(ft, "PUSH R%d\n", temp);
	fprintf(ft, "PUSH R%d\n", temp);
	fprintf(ft, "CALL 0\n");
	fclose(ft);
}
//-----------------------------------------------------------------------------------*/