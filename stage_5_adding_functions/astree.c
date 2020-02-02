//-------------------------Static Storage Allocation----------------------------------
int allocate(int size)
{
	int a = ADDR;
	ADDR += size;
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
//-----------------------------------------------------------------------------------

//-----------------------------------------Parameter Linked List-------------------------------------------
struct ParamNode *init_ParamNode(char *s, int type, int type_of_var)
{
	struct ParamNode *newn = (struct ParamNode *)malloc(sizeof(struct ParamNode));
	newn->varname = (char *)malloc(sizeof(char) * strlen(s));
	newn->varname = strdup(s);
	newn->type = type;
	newn->type_of_var = type_of_var;
	newn->next = NULL;
	return newn;
}

struct ParamList *init_ParamList()
{
	struct ParamList *newn = (struct ParamList *)malloc(sizeof(struct ParamList));
	newn->head = newn->tail = NULL;
	newn->size = 0;
	return newn;
}

struct ParamList *ParamInsert(struct ParamList *h, char *s, int type, int type_of_var)
{
	if (h->head == NULL)
		h->head = h->tail = init_ParamNode(s, type, type_of_var);
	else
	{
		h->tail->next = init_ParamNode(s, type, type_of_var);
		h->tail = h->tail->next;
	}
	h->size++;
	return h;
}

struct ParamList *ParamDelete(struct ParamList *h)
{
	struct ParamNode *curr, *curr2;
	curr = h->head;
	while (curr)
	{
		curr2 = curr->next;
		curr = NULL;
		free(curr);
		curr = curr2;
	}
	h = init_ParamList();
	return h;
}

void printParamList(struct ParamList *h)
{
	printf("ParamList\n");
	if (h)
	{
		struct ParamNode *curr = h->head;
		while (curr)
		{
			printf("%s %d %d\n", curr->varname, curr->type, curr->type_of_var);
			curr = curr->next;
		}
	}
	return;
}

int ParamGetSize(struct ParamList *h)
{
	if (h)
		return h->size;
	else
		return 0;
}
//---------------------------------------------------------------------------------------------------------

//-----------------------------------------Local Symbol Table-----------------------------------------------
struct LSTNode *init_LSTNode(int type, int type_of_var, char *var, int binding)
{
	struct LSTNode *newn = (struct LSTNode *)malloc(sizeof(struct LSTNode));
	newn->type = type;
	newn->type_of_var = type_of_var;
	newn->varname = (char *)malloc(strlen(var) * sizeof(char));
	newn->varname = strdup(var);
	newn->binding_addr = binding;
	newn->next = NULL;
	return newn;
}

struct LSTable *init_LSTable()
{
	struct LSTable *newn = (struct LSTable *)malloc(sizeof(struct LSTable));
	newn->head = newn->tail = NULL;
	newn->size = 0;
	return newn;
}

struct LSTable *LSTInstall(struct LSTable *h, char *varname, int type, int type_of_var)
{
	struct LSTNode *curr = LSTLookUp(h, varname);
	if (curr)
	{
		printf("**\"%s\" redeclared(LST)\n", varname);
		exit(1);
	}
	h->size++;
	if (h->head == NULL)
		h->head = h->tail = init_LSTNode(type, type_of_var, varname, h->size);
	else
	{
		h->tail->next = init_LSTNode(type, type_of_var, varname, h->size);
		h->tail = h->tail->next;
	}
	return h;
}

struct LSTNode *LSTLookUp(struct LSTable *h, char *s)
{
	struct LSTNode *curr = h->head;
	while (curr)
	{
		if (strcmp(curr->varname, s) == 0)
			return curr;
		curr = curr->next;
	}
	return NULL;
}

struct LSTable *LSTDelete(struct LSTable *h)
{
	struct LSTNode *curr, *curr2;
	curr = h->head;
	while (curr)
	{
		curr2 = curr->next;
		curr = NULL;
		free(curr);
		curr = curr2;
	}
	h = init_LSTable();
	return h;
}

void printLST(struct LSTable *h)
{
	printf("LST\n");
	if (h)
	{
		struct LSTNode *curr = h->head;
		while (curr)
		{
			printf("%s %d %d %d\n", curr->varname, curr->type, curr->type_of_var, curr->binding_addr);
			curr = curr->next;
		}
	}
}

int LSTGetSize(struct LSTable *h)
{
	if (h)
		return h->size;
	else
		return 0;
}
//----------------------------------------------------------------------------------------------------------

//-----------------------------Global Symbol Table-----------------------------------
struct GSTNode *init_GSTNode(int type, int type_of_var, char *varname, int size, struct ParamList *p, struct LSTable *l)
{
	struct GSTNode *newn = (struct GSTNode *)malloc(sizeof(struct GSTNode));
	newn->type = type;
	newn->type_of_var = type_of_var;
	newn->varname = (char *)malloc(strlen(varname) * sizeof(char));
	newn->varname = strdup(varname);
	newn->size = size;
	if (type_of_var != FUNCTION)
		newn->binding_addr = allocate(size);
	else
		newn->binding_addr = getLabel();
	newn->lst = l;
	newn->param = p;
	newn->next = NULL;
	return newn;
}

struct GSTable *init_GSTable()
{
	struct GSTable *newn = (struct GSTable *)malloc(sizeof(struct GSTable));
	newn->head = newn->tail = NULL;
	newn->size = 0;
	return newn;
}

struct GSTNode *GSTLookUp(struct GSTable *h, char *s)
{
	struct GSTNode *curr;
	curr = h->head;
	while (curr)
	{
		if (strcmp(curr->varname, s) == 0)
			return curr;
		curr = curr->next;
	}
	return NULL;
}

struct GSTable *GSTInstall(struct GSTable *h, int type, int type_of_var, char *varname, int size, struct ParamList *p, struct LSTable *l)
{
	struct GSTNode *curr = GSTLookUp(h, varname);
	if (curr)
	{
		printf("**\"%s\" redeclared(GST)\n", varname);
		exit(1);
	}
	else
	{
		if (h->head == NULL)
			h->head = h->tail = init_GSTNode(type, type_of_var, varname, size, p, l);
		else
		{
			h->tail->next = init_GSTNode(type, type_of_var, varname, size, p, l);
			h->tail = h->tail->next;
		}
		h->size++;
	}
	return h;
}

struct GSTable *GSTDelete(struct GSTable *h)
{
	struct GSTNode *curr, *curr2;
	curr = h->head;
	while (curr)
	{
		curr2 = curr->next;
		curr = NULL;
		free(curr);
		curr = curr2;
	}
	h = init_GSTable();
	return h;
}

int GSTableGetSize(struct GSTable *g)
{
	if (g)
		return g->size;
	else
		return 0;
}

void printGST(struct GSTable *g)
{
	printf("GST\n");
	if (g)
	{
		struct GSTNode *curr = g->head;
		while (curr)
		{
			printf("Varname		DataType		TypeOfVar		Size		BindingAddr\n");
			printf("%s		%d			%d			%d		%d\n", curr->varname, curr->type, curr->type_of_var, curr->size, curr->binding_addr);
			printf("LST of \"%s\":\n", curr->varname);
			printLST(curr->lst);
			printf("ParamList of \"%s\":\n", curr->varname);
			printParamList(curr->param);
			printf("----------------------------------------------------------------------------------------------\n");
			curr = curr->next;
		}
	}
}
//-----------------------------------------------------------------------------------

//--------------------------------------Abstract Syntax Tree Declrations---------------------------------
struct AST_Node *makeTreeNode(int nodetype, int type, char *varname, int oper, int val, struct AST_Node *l, struct AST_Node *r, struct GSTNode *gst, char *s)
{
	struct AST_Node *newn = (struct AST_Node *)malloc(sizeof(struct AST_Node));
	newn->nodetype = nodetype;
	newn->type = type;
	if (varname)
	{
		newn->varname = (char *)malloc(strlen(varname) * sizeof(char));
		newn->varname = strdup(varname);
	}
	else
		newn->varname = NULL;
	newn->oper = oper;
	newn->val = val;
	newn->s = (char *)malloc(strlen(s) * sizeof(char));
	newn->s = strdup(s);
	newn->gst = gst;
	newn->left = l;
	newn->right = r;
	return newn;
}

struct AST_Node *ASTDelete(struct AST_Node *root)
{
	if (root)
	{
		ASTDelete(root->left);
		ASTDelete(root->right);
		root = NULL;
		free(root);
	}
	return NULL;
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

//-------------------------------Auxiliary Functions---------------------------------
int typeCheckExp(struct AST_Node *l)
{
	if (l->type == INTEGER)
		return 1;
	return 0;
}

int typeCheckBool(struct AST_Node *l)
{
	if (l->type == BOOLEAN)
		return 1;
	return 0;
}

int typeCheckStr(struct AST_Node *l)
{
	if (l->type == STRING)
		return 1;
	return 0;
}

int checkParamList(struct ParamList *p1, struct ParamList *p2)
{
	if (ParamGetSize(p1) != ParamGetSize(p2))
		return 0;
	struct ParamNode *curr1, *curr2;
	curr1 = p1->head;
	curr2 = p2->head;
	while (curr1 && curr2)
	{
		if (curr1->type != curr2->type || curr1->type_of_var != curr2->type_of_var)
			return 0;
		curr1 = curr1->next;
		curr2 = curr2->next;
	}
	return 1;
}

struct LSTable *ParamToLSTInstall(struct LSTable *l, struct ParamList *p)
{
	struct ParamNode *curr = p->head;
	while (curr)
	{
		l = LSTInstall(l, curr->varname, curr->type, curr->type_of_var);
		curr = curr->next;
	}
	return l;
}
//-----------------------------------------------------------------------------------

//-------------------------------Code Generation-------------------------------------
// reg_idx expression_code_generator(FILE *ft, struct AST_Node *root, struct GSTNode *head)
// {
// 	if (root->nodetype == CONSTANT && root->type == INTEGER && root->oper == NULL)
// 	{
// 		reg_idx id = getReg();
// 		fprintf(ft, "MOV R%d, %d\n", id, root->val);
// 		return id;
// 	}
// 	if (root->nodetype == VARIABLE && root->type == INTEGER && root->varname != NULL)
// 	{
// 		int aRes = GSTgetAddr(head, root->varname);
// 		reg_idx id = getReg();
// 		fprintf(ft, "MOV R%d, [%d]\n", id, aRes);
// 		return id;
// 	}
// 	if (root->nodetype == CONSTANT && root->type == STRING && root->oper == NULL)
// 	{
// 		reg_idx id = getReg();
// 		fprintf(ft, "MOV R%d, %s\n", id, root->s);
// 		return id;
// 	}
// 	if (root->nodetype == VARIABLE && root->type == STRING && root->varname != NULL)
// 	{
// 		int aRes = GSTgetAddr(head, root->varname);
// 		reg_idx id = getReg();
// 		fprintf(ft, "MOV R%d, [%d]\n", id, aRes);
// 		return id;
// 	}
// 	if (root->nodetype == ARRAY_VARIABLE)
// 	{
// 		reg_idx id = getReg();
// 		reg_idx aRes = GSTgetArrayNodeAddress(ft, root, head);
// 		fprintf(ft, "MOV R%d, [R%d]\n", id, aRes);
// 		aRes = freeReg();
// 		return id;
// 	}
// 	else
// 	{
// 		reg_idx a = expression_code_generator(ft, root->left, head);
// 		reg_idx b = expression_code_generator(ft, root->right, head);
// 		reg_idx id;
// 		switch (*(root->oper))
// 		{
// 		case '+':
// 			fprintf(ft, "ADD R%d, R%d\n", a, b);
// 			id = freeReg();
// 			return a;
// 			break;
// 		case '-':
// 			fprintf(ft, "SUB R%d, R%d\n", a, b);
// 			id = freeReg();
// 			return a;
// 			break;
// 		case '/':
// 			fprintf(ft, "DIV R%d, R%d\n", a, b);
// 			id = freeReg();
// 			return a;
// 			break;
// 		case '*':
// 			fprintf(ft, "MUL R%d, R%d\n", a, b);
// 			id = freeReg();
// 			return a;
// 			break;
// 		case '%':
// 			fprintf(ft, "MOD R%d, R%d\n", a, b);
// 			id = freeReg();
// 			return a;
// 			break;
// 		}
// 	}
// }

// reg_idx GSTgetArrayNodeAddress(FILE *ft, struct AST_Node *root, struct GSTNode *head)
// {
// 	struct GSTNode *curr = GSTLookUp(head, root->left->varname);
// 	if (!curr)
// 		exit(1);
// 	reg_idx temp0 = getReg();
// 	fprintf(ft, "MOV R%d, %d\n", temp0, curr->binding_addr);
// 	reg_idx temp1 = expression_code_generator(ft, root->right, head);
// 	fprintf(ft, "ADD R%d, R%d\n", temp0, temp1);
// 	temp1 = freeReg();
// 	return temp0;
// }

// int assignment_code_generator(FILE *ft, struct AST_Node *root, struct GSTNode *head)
// {
// 	if (root && root->left && root->right)
// 	{
// 		reg_idx id = expression_code_generator(ft, root->right, head);
// 		int aRes = -1;
// 		if (root->left->nodetype == VARIABLE)
// 		{
// 			aRes = GSTgetAddr(head, root->left->varname);
// 			fprintf(ft, "MOV [%d], R%d\n", aRes, id);
// 		}
// 		else if (root->left->nodetype == ARRAY_VARIABLE)
// 		{
// 			aRes = GSTgetArrayNodeAddress(ft, root->left, head);
// 			fprintf(ft, "MOV [R%d], R%d\n", aRes, id);
// 			aRes = freeReg();
// 		}
// 		id = freeReg();
// 		return 1;
// 	}
// 	printf("Improper Assignment Node\n");
// 	exit(1);
// 	return -1;
// }

// int write_code_generator(FILE *ft, struct AST_Node *root, struct GSTNode *head)
// {
// 	if (root && root->left)
// 	{
// 		reg_idx id = expression_code_generator(ft, root->left, head);
// 		reg_idx temp = getReg();
// 		fprintf(ft, "MOV R%d, \"Write\"\n", temp);
// 		fprintf(ft, "PUSH R%d\n", temp);
// 		fprintf(ft, "MOV R%d, -2\n", temp);
// 		fprintf(ft, "PUSH R%d\n", temp);
// 		fprintf(ft, "PUSH R%d\n", id);
// 		fprintf(ft, "PUSH R%d\n", temp);
// 		fprintf(ft, "PUSH R%d\n", temp);
// 		fprintf(ft, "CALL 0\n");
// 		fprintf(ft, "POP R%d\n", temp);
// 		fprintf(ft, "POP R%d\n", temp);
// 		fprintf(ft, "POP R%d\n", temp);
// 		fprintf(ft, "POP R%d\n", temp);
// 		fprintf(ft, "POP R%d\n", temp);
// 		id = freeReg();
// 		id = freeReg();
// 		return 1;
// 	}
// 	printf("Improper Writing Node\n");
// 	return -1;
// }

// int read_code_generator(FILE *ft, struct AST_Node *root, struct GSTNode *head)
// {
// 	if (root && root->left)
// 	{
// 		int aRes = -1;
// 		reg_idx id = getReg();
// 		if (root->left->nodetype == VARIABLE)
// 		{
// 			aRes = GSTgetAddr(head, root->left->varname);
// 			fprintf(ft, "MOV R%d, %d\n", id, aRes);
// 		}
// 		else if (root->left->nodetype == ARRAY_VARIABLE)
// 		{
// 			aRes = GSTgetArrayNodeAddress(ft, root->left, head);
// 			fprintf(ft, "MOV R%d, R%d\n", id, aRes);
// 			aRes = freeReg();
// 		}
// 		reg_idx temp = getReg();
// 		fprintf(ft, "MOV R%d, \"Read\"\n", temp);
// 		fprintf(ft, "PUSH R%d\n", temp);
// 		fprintf(ft, "MOV R%d, -1\n", temp);
// 		fprintf(ft, "PUSH R%d\n", temp);
// 		fprintf(ft, "PUSH R%d\n", id);
// 		fprintf(ft, "PUSH R%d\n", temp);
// 		fprintf(ft, "PUSH R%d\n", temp);
// 		fprintf(ft, "CALL 0\n");
// 		fprintf(ft, "POP R%d\n", temp);
// 		fprintf(ft, "POP R%d\n", temp);
// 		fprintf(ft, "POP R%d\n", temp);
// 		fprintf(ft, "POP R%d\n", temp);
// 		fprintf(ft, "POP R%d\n", temp);
// 		temp = freeReg();
// 		id = freeReg();
// 	}
// 	return 1;
// }

// void boolean_code_generator(FILE *ft, struct AST_Node *root, int label, struct GSTNode *head)
// {
// 	if (root && root->left && root->right)
// 	{
// 		reg_idx a = expression_code_generator(ft, root->left, head);
// 		reg_idx b = expression_code_generator(ft, root->right, head);
// 		switch (root->type)
// 		{
// 		case LT:
// 			fprintf(ft, "LT R%d, R%d\n", a, b);
// 			break;
// 		case LE:
// 			fprintf(ft, "LE R%d, R%d\n", a, b);
// 			break;
// 		case GT:
// 			fprintf(ft, "GT R%d, R%d\n", a, b);
// 			break;
// 		case GE:
// 			fprintf(ft, "GE R%d, R%d\n", a, b);
// 			break;
// 		case EQ:
// 			fprintf(ft, "EQ R%d, R%d\n", a, b);
// 			break;
// 		case NE:
// 			fprintf(ft, "NE R%d, R%d\n", a, b);
// 			break;
// 		}
// 		reg_idx temp = freeReg();
// 		fprintf(ft, "JZ R%d, _L%d\n", a, label);
// 		temp = freeReg();
// 		return;
// 	}
// 	printf("Invalid boolean node\n");
// 	exit(1);
// }

// void if_else_code_generator(FILE *ft, struct AST_Node *root, int blabel, int clabel, struct GSTNode *head)
// {
// 	if (root)
// 	{
// 		if (root->left)
// 		{
// 			int first_label = getLabel();
// 			int second_label = getLabel();
// 			if (root->left->left)
// 				boolean_code_generator(ft, root->left->left, first_label, head);
// 			if (root->left->right)
// 				code_generator_util(ft, root->left->right, blabel, clabel, head);
// 			fprintf(ft, "JMP _L%d\n", second_label);
// 			fprintf(ft, "_L%d:\n", first_label);
// 			if (root->right)
// 				code_generator_util(ft, root->right, blabel, clabel, head);
// 			fprintf(ft, "_L%d:\n", second_label);
// 		}
// 		return;
// 	}
// 	printf("Invalid IF_ELSE node\n");
// 	return;
// }

// void while_code_generator(FILE *ft, struct AST_Node *root, int blabel, int clabel, struct GSTNode *head)
// {
// 	if (root)
// 	{
// 		if (root->left)
// 		{
// 			int first_label = getLabel();
// 			int second_label = getLabel();
// 			fprintf(ft, "_L%d:\n", first_label);
// 			boolean_code_generator(ft, root->left, second_label, head);
// 			if (root->right)
// 				code_generator_util(ft, root->right, second_label, first_label, head);
// 			fprintf(ft, "JMP _L%d\n", first_label);
// 			fprintf(ft, "_L%d:\n", second_label);
// 		}
// 		return;
// 	}
// 	printf("Invalid WHILE node\n");
// 	return;
// }

// void do_while_code_generator(FILE *ft, struct AST_Node *root, int blabel, int clabel, struct GSTNode *head)
// {
// 	if (root)
// 	{
// 		if (root->right)
// 		{
// 			int first_label = getLabel();
// 			int second_label = getLabel();
// 			fprintf(ft, "_L%d:\n", first_label);
// 			if (root->left)
// 				code_generator_util(ft, root->left, second_label, first_label, head);
// 			boolean_code_generator(ft, root->right, second_label, head);
// 			fprintf(ft, "JMP _L%d\n", first_label);
// 			fprintf(ft, "_L%d:\n", second_label);
// 		}
// 		return;
// 	}
// 	printf("Invalid DO_WHILE node\n");
// 	return;
// }

// void repeat_until_code_generator(FILE *ft, struct AST_Node *root, int blabel, int clabel, struct GSTNode *head)
// {
// 	if (root)
// 	{
// 		if (root->right)
// 		{
// 			int first_label = getLabel();
// 			int second_label = getLabel();
// 			fprintf(ft, "_L%d:\n", first_label);
// 			if (root->left)
// 				code_generator_util(ft, root->left, second_label, first_label, head);
// 			boolean_code_generator(ft, root->right, first_label, head);
// 			fprintf(ft, "_L%d:\n", second_label);
// 		}
// 		return;
// 	}
// 	printf("Invalid REPEAT_UNTIL node\n");
// 	return;
// }

// void break_code_generator(FILE *ft, struct AST_Node *root, int blabel, int clabel)
// {
// 	if (blabel == -1)
// 		return;
// 	fprintf(ft, "JMP _L%d\n", blabel);
// 	return;
// }

// void continue_code_generator(FILE *ft, struct AST_Node *root, int blabel, int clabel)
// {
// 	if (clabel == -1)
// 		return;
// 	fprintf(ft, "JMP _L%d\n", clabel);
// 	return;
// }

// void breakpoint_code_generator(FILE *ft, struct AST_Node *root)
// {
// 	fprintf(ft, "BRKP\n");
// 	return;
// }

// void code_generator_util(FILE *ft, struct AST_Node *root, int blabel, int clabel, struct GSTNode *head)
// {
// 	if (root)
// 	{
// 		if (root->nodetype == EXPRESSION && root->type == ASSIGNMENT)
// 		{
// 			assignment_code_generator(ft, root, head);
// 			return;
// 		}
// 		if (root->nodetype == STATEMENT && root->type == READ)
// 		{
// 			read_code_generator(ft, root, head);
// 			return;
// 		}
// 		if (root->nodetype == STATEMENT && root->type == WRITE)
// 		{
// 			write_code_generator(ft, root, head);
// 			return;
// 		}
// 		if (root->nodetype == STATEMENT && root->type == IF_ELSE)
// 		{
// 			if_else_code_generator(ft, root, blabel, clabel, head);
// 			return;
// 		}
// 		if (root->nodetype == LOOP && root->type == WHILE)
// 		{
// 			while_code_generator(ft, root, blabel, clabel, head);
// 			return;
// 		}
// 		if (root->nodetype == LOOP && root->type == DO_WHILE)
// 		{
// 			do_while_code_generator(ft, root, blabel, clabel, head);
// 			return;
// 		}
// 		if (root->nodetype == LOOP && root->type == REPEAT_UNTIL)
// 		{
// 			repeat_until_code_generator(ft, root, blabel, clabel, head);
// 			return;
// 		}
// 		if (root->nodetype == BREAK)
// 		{
// 			break_code_generator(ft, root, blabel, clabel);
// 			return;
// 		}
// 		if (root->nodetype == CONTINUE)
// 		{
// 			continue_code_generator(ft, root, blabel, clabel);
// 			return;
// 		}
// 		if (root->nodetype == BREAKPOINT)
// 		{
// 			breakpoint_code_generator(ft, root);
// 			return;
// 		}
// 		code_generator_util(ft, root->left, blabel, clabel, head);
// 		code_generator_util(ft, root->right, blabel, clabel, head);
// 	}
// 	return;
// }

// void code_generator(FILE *ft, struct AST_Node *root,struct GSTable *g,struct LSTable *l)
// {
// 	fprintf(ft, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", 0, 2056, 0, 0, 0, 0, 0, 0);
// 	fprintf(ft, "MOV SP, %d\n", ADDR - 1);
// 	code_generator_util(ft, root, -1, -1, head);
// 	reg_idx temp = getReg();
// 	fprintf(ft, "MOV R%d, \"Exit\"\n", temp);
// 	fprintf(ft, "PUSH R%d\n", temp);
// 	fprintf(ft, "PUSH R%d\n", temp);
// 	fprintf(ft, "PUSH R%d\n", temp);
// 	fprintf(ft, "PUSH R%d\n", temp);
// 	fprintf(ft, "PUSH R%d\n", temp);
// 	fprintf(ft, "CALL 0\n");
// 	fclose(ft);
// }
// //-----------------------------------------------------------------------------------