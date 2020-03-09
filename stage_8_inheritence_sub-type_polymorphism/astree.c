// #include "astree.h"
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
//------------------------------------------------------------------------------------

//-------------------------Label Allocation------------------------------------
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

//--------------------------------------Type Table ----------------------------------------
struct TypeTableNode *newTypeTableNode(char *name, int size, struct FieldList *field)
{
	struct TypeTableNode *newn = (struct TypeTableNode *)malloc(sizeof(struct TypeTableNode));
	newn->name = strdup(name);
	newn->size = size;
	newn->field = field;
	newn->next = NULL;
	return newn;
}

struct TypeTable *initTypeTable()
{
	struct TypeTable *newn = (struct TypeTable *)malloc(sizeof(struct TypeTable));
	newn->head = newn->tail = NULL;
	newn->entry = 0;
	newn = installTypeTableNode(newn, "int", 8, NULL);
	newn = installTypeTableNode(newn, "str", 8, NULL);
	newn = installTypeTableNode(newn, "boolean", 8, NULL);
	newn = installTypeTableNode(newn, "void", 8, NULL);
	return newn;
}

struct TypeTable *installTypeTableNode(struct TypeTable *t, char *name, int size, struct FieldList *fl)
{
	struct TypeTableNode *error = TypeTableLookUp(t, name);
	if (error)
	{
		printf("line %d: User-Defined type already defined\n", line);
		exit(0);
	}
	else if (t->head == NULL)
		t->head = t->tail = newTypeTableNode(name, size, fl);
	else
	{
		t->tail->next = newTypeTableNode(name, size, fl);
		t->tail = t->tail->next;
	}
	t->entry++;
	return t;
}

struct TypeTableNode *TypeTableLookUp(struct TypeTable *t, char *name)
{
	if (t->head == NULL)
		return NULL;
	struct TypeTableNode *curr = t->head;
	while (curr)
	{
		if (strcmp(name, curr->name) == 0)
			return curr;
		curr = curr->next;
	}
	return NULL;
}

int GetSizeType(struct TypeTableNode *t)
{
	if (t == NULL)
		return 0;
	return (t->size);
}

void printTypeTable(struct TypeTable *t)
{
	printf("Type Table\n");
	struct TypeTableNode *curr = t->head;
	while (curr)
	{
		printf("------------------------\n");
		printf("name: %s\nsize: %d\n", curr->name, curr->size);
		printFieldList(curr->field);
		curr = curr->next;
		printf("------------------------\n");
	}
	return;
}
//-----------------------------------------------------------------------------------------

//--------------------------------------Field List-----------------------------------------
struct FieldList *initFieldList()
{
	struct FieldList *newn = (struct FieldList *)malloc(sizeof(struct FieldList));
	newn->head = newn->tail = NULL;
	newn->entry = 0;
	return newn;
}

struct FieldListNode *newFieldListNode(char *name, int fieldindex, char *type_info, struct TypeTableNode *type, struct ClassTableNode *class)
{
	struct FieldListNode *newn = (struct FieldListNode *)malloc(sizeof(struct FieldListNode));
	newn->name = strdup(name);
	newn->type_info = (char *)malloc(sizeof(char) * strlen(type_info));
	newn->type_info = strdup(type_info);
	newn->fieldIndex = fieldindex;
	newn->type = type;
	newn->class = class;
	newn->next = NULL;
	return newn;
}

struct FieldList *installField(struct TypeTable *t, struct ClassTable *C, struct FieldList *fl, char *name, char *type_info)
{
	int error = 0;
	struct FieldListNode *curr = fl->head;
	while (curr)
	{
		if (strcmp(name, curr->name) == 0)
		{
			error = 1;
			break;
		}
		curr = curr->next;
	}
	if (error)
	{
		printf("*Line %d: Field name cannot be same\n", line);
		exit(0);
	}
	struct TypeTableNode *proceed1 = TypeTableLookUp(t, type_info);
	struct ClassTableNode *proceed2 = ClassTableLookUp(C, type_info);
	if (fl->head == NULL)
		fl->head = fl->tail = newFieldListNode(name, fl->entry, type_info, proceed1, proceed2);
	else
	{
		fl->tail->next = newFieldListNode(name, fl->entry, type_info, proceed1, proceed2);
		fl->tail = fl->tail->next;
	}
	fl->entry++;
	return fl;
}

void ValidateFieldList(struct TypeTableNode *t, struct ClassTableNode *c)
{
	if (t)
	{
		struct FieldListNode *curr;
		if (!t->field)
			return;
		curr = t->field->head;
		while (curr)
		{
			if (curr->type == NULL)
			{
				if (strcmp(curr->type_info, t->name) != 0)
				{
					printf("*Line %d : User-Type/Class not defined\n", line);
					exit(0);
				}
				curr->type = t;
			}
			curr = curr->next;
		}
	}
	else if (c)
	{
		struct FieldListNode *curr;
		if (!c->field)
			return;
		curr = c->field->head;
		while (curr)
		{
			if (curr->class == NULL && curr->type == NULL)
			{
				if (strcmp(curr->type_info, c->name) != 0)
				{
					printf("*line %d: User-Type/Class not defined\n", line);
					exit(0);
				}
				curr->class = c;
			}
			curr = curr->next;
		}
	}
	else
	{
		printf("No type\n");
		exit(0);
	}
	return;
}

struct FieldListNode *FieldListLookUp(struct TypeTableNode *t, char *name)
{
	if (t == NULL)
		return NULL;
	if (t->field)
	{
		struct FieldListNode *curr = t->field->head;
		while (curr)
		{
			if (strcmp(name, curr->name) == 0)
				return curr;
			curr = curr->next;
		}
	}
	return NULL;
}

void printFieldList(struct FieldList *f)
{
	if (f)
	{
		printf("FieldList\n");
		struct FieldListNode *curr = f->head;
		while (curr)
		{
			printf("************************\n");
			if (curr->type)
				printf("fieldIdx: %d\nname: %s\ntype_info: %s\ntype: %s\n", curr->fieldIndex, curr->name, curr->type_info, curr->type->name);
			else if (curr->class)
				printf("fieldIdx: %d\nname: %s\ntype_info: %s\nclassType: %s\n", curr->fieldIndex, curr->name, curr->type_info, curr->class->name);
			else
				printf("fieldIdx: %d\nname: %s\ntype_info: %s\ntype/class: NULL\n", curr->fieldIndex, curr->name, curr->type_info);
			curr = curr->next;
			printf("************************\n");
		}
	}
	return;
}
//-----------------------------------------------------------------------------------------

//-----------------------------------------Parameter Linked List-------------------------------------------
struct ParamNode *init_ParamNode(char *s, struct TypeTableNode *type, int type_of_var)
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

struct ParamList *ParamInsert(struct ParamList *h, char *s, struct TypeTableNode *type, int type_of_var)
{
	if (type == NULL)
	{
		printf("line %d: invalid parameter type\n", line);
		exit(0);
	}
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
			printf("%s %s %d\n", curr->varname, curr->type->name, curr->type_of_var);
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
struct LSTNode *init_LSTNode(struct TypeTableNode *type, struct ClassTableNode *class, int type_of_var, char *var, int binding)
{
	struct LSTNode *newn = (struct LSTNode *)malloc(sizeof(struct LSTNode));
	newn->type = type;
	newn->class = class;
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

struct LSTable *LSTInstall(struct LSTable *h, char *varname, struct TypeTableNode *type, struct ClassTableNode *class, int type_of_var)
{
	if (type == NULL && class == NULL)
	{
		printf("*line %d: Invalid data type\n", line);
		exit(0);
	}
	struct LSTNode *curr = LSTLookUp(h, varname);
	if (curr)
	{
		printf("**line %d: \"%s\" redeclared(LST)\n", line, varname);
		exit(1);
	}
	h->size++;
	if (h->head == NULL)
		h->head = h->tail = init_LSTNode(type, class, type_of_var, varname, h->size);
	else
	{
		h->tail->next = init_LSTNode(type, class, type_of_var, varname, h->size);
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
			if (curr->type)
				printf("%s %s %d %d\n", curr->varname, curr->type->name, curr->type_of_var, curr->binding_addr);
			else if (curr->class)
				printf("%s %s %d %d\n", curr->varname, curr->class->name, curr->type_of_var, curr->binding_addr);
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
struct GSTNode *init_GSTNode(struct TypeTableNode *type, struct ClassTableNode *class, int type_of_var, char *varname, int size, int fun_defined, struct ParamList *p, struct LSTable *l)
{
	struct GSTNode *newn = (struct GSTNode *)malloc(sizeof(struct GSTNode));
	newn->type = type;
	newn->class = class;
	newn->type_of_var = type_of_var;
	newn->varname = (char *)malloc(strlen(varname) * sizeof(char));
	newn->varname = strdup(varname);
	newn->size = size;
	newn->fun_defined = fun_defined;
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

struct GSTable *GSTInstall(struct GSTable *h, struct TypeTableNode *type, struct ClassTableNode *class, int type_of_var, char *varname, int size, struct ParamList *p, struct LSTable *l)
{
	if (type == NULL && class == NULL)
	{
		printf("*line %d: Invalid Data type\n", line);
		exit(0);
	}
	struct GSTNode *curr = GSTLookUp(h, varname);
	if (curr)
	{
		printf("**line %d: \"%s\" redeclared(GST)\n", line, varname);
		exit(1);
	}
	else
	{
		if (h->head == NULL)
			h->head = h->tail = init_GSTNode(type, class, type_of_var, varname, size, 0, p, l);
		else
		{
			h->tail->next = init_GSTNode(type, class, type_of_var, varname, size, 0, p, l);
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
			if (curr->type)
				printf("%s		%s			%d			%d		%d\n", curr->varname, curr->type->name, curr->type_of_var, curr->size, curr->binding_addr);
			if (curr->class)
				printf("%s		%s			%d			%d		%d\n", curr->varname, curr->class->name, curr->type_of_var, curr->size, curr->binding_addr);
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

//-------------------------------------Method List Table-----------------------------------
struct MethodList *initMethodList()
{
	struct MethodList *newn = (struct MethodList *)malloc(sizeof(struct MethodList));
	newn->entry = 0;
	newn->head = newn->tail = NULL;
	return newn;
}

struct MethodListNode *newMethodListNode(char *name, int methodIdx, int Mlabel, int defined, struct TypeTableNode *type, struct ParamList *param)
{
	struct MethodListNode *newn = (struct MethodListNode *)malloc(sizeof(struct MethodListNode));
	newn->name = (char *)malloc(sizeof(char) * strlen(name));
	newn->name = strdup(name);
	newn->methodIdx = methodIdx;
	newn->Mlabel = Mlabel;
	newn->type = type;
	newn->param = param;
	newn->defined = defined;
	newn->next = NULL;
	return newn;
}

struct MethodListNode *MethodLookUp(struct ClassTableNode *c, char *name)
{
	if (c == NULL)
		return NULL;
	if (name == NULL)
		return NULL;
	struct MethodListNode *curr = c->method->head;
	while (curr)
	{
		if (strcmp(name, curr->name) == 0)
			return curr;
		curr = curr->next;
	}
	return NULL;
}

struct ClassTableNode *installMethodListNode(struct ClassTableNode *c, struct ClassTable *C, char *name, struct TypeTableNode *type, struct ParamList *param)
{
	if (MethodLookUp(c, name))
	{
		printf("line %d: Two functions cannot have same name\n", line);
		exit(1);
	}
	if (type == NULL)
	{
		printf("*line %d: No type provided\n", line);
		exit(0);
	}
	if (c->method->entry == 0)
		c->method->head = c->method->tail = newMethodListNode(name, c->method->entry, getLabel(), 0, type, param);
	else
	{
		c->method->tail->next = newMethodListNode(name, c->method->entry, getLabel(), 0, type, param);
		c->method->tail = c->method->tail->next;
	}
	c->method->entry++;
	return c;
}

void printMethodList(struct MethodList *M)
{
	struct MethodListNode *curr = M->head;
	printf("Method List\n");
	while (curr)
	{
		printf("MethodName: %s\nMethodIdx: %d\nMethodLabel: %d\nMethodType: %s\n", curr->name, curr->methodIdx, curr->Mlabel, curr->type->name);
		printParamList(curr->param);
		curr = curr->next;
	}
	return;
}
//-----------------------------------------------------------------------------------------

//--------------------------------------Class Table----------------------------------------
struct ClassTable *initClassTable()
{
	struct ClassTable *newn = (struct ClassTable *)malloc(sizeof(struct ClassTable));
	newn->entry = 0;
	newn->head = newn->tail = NULL;
	return newn;
}

struct ClassTableNode *newClassTableNode(char *name, int classIdx, int fieldCount, int methodCount, struct FieldList *field, struct MethodList *method, struct ClassTableNode *parent)
{
	struct ClassTableNode *newn = (struct ClassTableNode *)malloc(sizeof(struct ClassTableNode));
	newn->name = (char *)malloc(sizeof(char) * strlen(name));
	newn->name = strdup(name);
	newn->classIdx = classIdx;
	newn->fieldCount = fieldCount;
	newn->methodCount = methodCount;
	newn->field = field;
	newn->method = method;
	newn->parent = parent;
	newn->next = NULL;
	return newn;
}

struct ClassTableNode *ClassTableLookUp(struct ClassTable *C, char *name)
{
	if (name == NULL)
		return NULL;
	struct ClassTableNode *curr = C->head;
	while (curr)
	{
		if (strcmp(name, curr->name) == 0)
			return curr;
		curr = curr->next;
	}
	return NULL;
}

struct ClassTable *installClassTableNode(struct ClassTable *C, struct TypeTable *T, char *name, char *parent)
{
	if (TypeTableLookUp(T, name))
	{
		printf("line %d: Cannot define class with name of previously defined type\n", line);
		exit(0);
	}
	if (ClassTableLookUp(C, name))
	{
		printf("line %d: Class \"%s\" already defined\n", line, name);
		exit(1);
	}
	if (C->entry == 0)
		C->head = C->tail = newClassTableNode(name, C->entry, 0, 0, NULL, NULL, ClassTableLookUp(C, parent));
	else
	{
		C->tail->next = newClassTableNode(name, C->entry, 0, 0, NULL, NULL, ClassTableLookUp(C, parent));
		C->tail = C->tail->next;
	}
	C->entry++;
	return C;
}

struct FieldListNode *ClassFieldLookUp(struct ClassTableNode *c, char *name)
{
	if (c == NULL)
		return NULL;
	if (name == NULL)
		return NULL;
	struct FieldListNode *curr = c->field->head;
	while (curr)
	{
		if (strcmp(name, curr->name) == 0)
			return curr;
		curr = curr->next;
	}
	return NULL;
}

struct ClassTableNode *installClassFieldNode(struct ClassTableNode *c, struct ClassTable *C, struct TypeTable *T, char *name, char *type)
{
	if (c->field == NULL)
		c->field = initFieldList();
	c->field = installField(T, C, c->field, name, type);
	c->fieldCount++;
	return c;
}

struct ClassTableNode *installClassMethodListNode(struct ClassTableNode *c, struct ClassTable *C, struct TypeTableNode *type, char *name, struct ParamList *param)
{
	if (c->method == NULL)
		c->method = initMethodList();
	if (ClassFieldLookUp(c, name))
	{
		printf("*line %d: \"%s\" already declared as member field\n", line, name);
		exit(0);
	}
	c = installMethodListNode(c, C, name, type, param);
	c->methodCount++;
	return c;
}

void printClassTable(struct ClassTable *C)
{
	struct ClassTableNode *curr = C->head;
	printf("Class Table\n");
	while (curr)
	{
		printf("ClassName: %s\nClassIdx: %d\nfieldCount: %d\nmethodCount: %d\n", curr->name, curr->classIdx, curr->fieldCount, curr->methodCount);
		printFieldList(curr->field);
		printMethodList(curr->method);
		curr = curr->next;
	}
	return;
}
//-----------------------------------------------------------------------------------------

//--------------------------------------Abstract Syntax Tree Declrations---------------------------------
struct AST_Node *makeTreeNode(int nodetype, struct TypeTableNode *type, struct ClassTableNode *class, char *varname, int oper, int val, struct AST_Node *l, struct AST_Node *r, struct GSTNode *gst, char *s)
{
	struct AST_Node *newn = (struct AST_Node *)malloc(sizeof(struct AST_Node));
	newn->nodetype = nodetype;
	newn->type = type;
	newn->class = class;
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
	newn->param = NULL;
	newn->next_param = NULL;
	newn->left = l;
	newn->right = r;
	return newn;
}

struct AST_Node *ASTDeleteParam(struct AST_Node *root)
{
	if (root)
	{
		struct AST_Node *temp = root->next_param;
		ASTDelete(root);
		ASTDeleteParam(temp);
	}
	return NULL;
}

struct AST_Node *ASTDelete(struct AST_Node *root)
{
	if (root)
	{
		ASTDelete(root->left);
		ASTDelete(root->right);
		if (root->nodetype == FUNCTION)
			ASTDeleteParam(root->param);
		root = NULL;
		free(root);
	}
	return NULL;
}

void ASTPrintParam(struct AST_Node *root)
{
	if (root)
	{
		ASTPrintTree(root);
		ASTPrintParam(root->next_param);
	}
}

void ASTPrintTree(struct AST_Node *root)
{
	if (root)
	{
		ASTPrintTree(root->left);
		printf("%s ", root->s);
		if (root->nodetype == FUNCTION)
			ASTPrintParam(root->param);
		ASTPrintTree(root->right);
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
	if (l->type == TypeTableLookUp(T, "int"))
		return 1;
	return 0;
}

int typeCheckBool(struct AST_Node *l)
{
	if (l->type == TypeTableLookUp(T, "boolean"))
		return 1;
	return 0;
}

int typeCheckStr(struct AST_Node *l)
{
	if (l->type == TypeTableLookUp(T, "str"))
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

struct AST_Node *insertASTParam(struct AST_Node *a, struct AST_Node *b)
{
	struct AST_Node *curr, *prev;
	prev = NULL;
	curr = a;
	while (curr)
	{
		prev = curr;
		curr = curr->next_param;
	}
	prev->next_param = b;
	return a;
}

int checkASTParam(struct ParamList *param, struct AST_Node *a)
{
	struct ParamNode *curr1 = param->head;
	struct AST_Node *curr2 = a;
	while (curr1 && curr2)
	{
		if ((curr1->type != curr2->type) || curr2->class)
			return 0;
		curr1 = curr1->next;
		curr2 = curr2->next_param;
	}
	if (curr1 || curr2)
		return 0;
	else
		return 1;
}

struct LSTable *ParamToLSTInstall(struct LSTable *l, struct ParamList *p)
{
	struct ParamNode *curr = p->head;
	int i = -3;
	while (curr)
	{
		l = LSTInstall(l, curr->varname, curr->type, NULL, curr->type_of_var);
		l->tail->binding_addr = i;
		i--;
		curr = curr->next;
	}
	if (class_section)
	{
		l = LSTInstall(l, "self", NULL, C->tail, VARIABLE);
		l->tail->binding_addr = i;
	}
	return l;
}

int getFunctionLabel(struct GSTable *gst, char *fname)
{
	return (GSTLookUp(gst, fname)->binding_addr);
}

int DataTypeDefined(struct TypeTable *T, char *name)
{
	if (T->head == NULL)
		return 0;
	struct TypeTableNode *curr = T->head;
	while (curr)
	{
		if (strcmp(curr->name, name) == 0)
			return 1;
		curr = curr->next;
	}
	return 0;
}
//-----------------------------------------------------------------------------------

//---------------------------------------CodeGen Stack-------------------------------
struct StackNode *init_StackNode(struct AST_Node *ast, struct LSTable *lst, struct ClassTableNode *class)
{
	struct StackNode *newn = (struct StackNode *)malloc(sizeof(struct StackNode));
	newn->ast = (struct AST_Node *)malloc(sizeof(struct AST_Node));
	*(newn->ast) = *(ast);
	newn->lst = (struct LSTable *)malloc(sizeof(struct LSTable));
	*(newn->lst) = *(lst);
	newn->class = class;
	newn->next = NULL;
	return newn;
}

struct Stack *init_Stack()
{
	struct Stack *newn = (struct Stack *)malloc(sizeof(struct Stack));
	newn->head = NULL;
	newn->size = 0;
	return newn;
}

struct Stack *push(struct Stack *stack, struct AST_Node *ast, struct LSTable *lst, struct ClassTableNode *class)
{
	if (stack->head == NULL)
		stack->head = init_StackNode(ast, lst, class);
	else
	{
		struct StackNode *temp = init_StackNode(ast, lst, class);
		temp->next = stack->head;
		stack->head = temp;
	}
	stack->size++;
	return stack;
}

struct Stack *pop(struct Stack *stack)
{
	struct StackNode *temp = stack->head;
	stack->head = temp->next;
	stack->size--;
	return stack;
}

struct StackNode *top(struct Stack *stack)
{
	return (stack->head);
}

int StackGetSize(struct Stack *s)
{
	if (s)
		return s->size;
	else
		return 0;
}
//-------------------------------------------------------------------------------

//---------------------------------------String Stack-------------------------------
struct StringStackNode *init_StringStackNode(char *str)
{
	struct StringStackNode *newn = (struct StringStackNode *)malloc(sizeof(struct StringStackNode));
	newn->str = (char *)malloc(sizeof(char) * strlen(str));
	newn->str = strdup(str);
	newn->next = NULL;
	return newn;
}

struct StringStack *init_StringStack()
{
	struct StringStack *newn = (struct StringStack *)malloc(sizeof(struct StringStack));
	newn->head = NULL;
	newn->size = 0;
	return newn;
}

struct StringStack *push_string(struct StringStack *stack, char *str)
{
	if (stack->head == NULL)
		stack->head = init_StringStackNode(str);
	else
	{
		struct StringStackNode *temp = init_StringStackNode(str);
		temp->next = stack->head;
		stack->head = temp;
	}
	stack->size++;
	return stack;
}

struct StringStack *pop_string(struct StringStack *stack)
{
	struct StringStackNode *temp = stack->head;
	stack->head = temp->next;
	stack->size--;
	return stack;
}

char *top_string(struct StringStack *stack)
{
	return (stack->head->str);
}

int StringStackGetSize(struct StringStack *s)
{
	if (s)
		return s->size;
	else
		return 0;
}
//-------------------------------------------------------------------------------

//-------------------------------Code Generation-- -----------------------------------
reg_idx expression_code_generator(FILE *ft, struct AST_Node *root, struct GSTable *g, struct LSTable *l, struct ClassTableNode *class)
{
	if (root->nodetype == CONSTANT)
	{
		reg_idx id = getReg();
		if (root->type == TypeTableLookUp(T, "int"))
			fprintf(ft, "MOV R%d, %d\n", id, root->val);
		else if (root->type == TypeTableLookUp(T, "str"))
			fprintf(ft, "MOV R%d, %s\n", id, root->s);
		return id;
	}
	else if (root->nodetype == VARIABLE)
	{
		reg_idx id = getReg();
		reg_idx aRes = getAddress(ft, root->varname, g, l, class);
		fprintf(ft, "MOV R%d, [R%d]\n", id, aRes);
		aRes = freeReg();
		return id;
	}
	else if (root->nodetype == ARRAY_VARIABLE)
	{
		reg_idx id = getReg();
		reg_idx aRes = getArrayNodeAddress(ft, root, g, l, class);
		fprintf(ft, "MOV R%d, [R%d]\n", id, aRes);
		aRes = freeReg();
		return id;
	}
	else if (root->nodetype == FUNCTION)
		return functionCall_code_generator(ft, root, g, l, class);
	else if (root->nodetype == FIELD)
	{
		reg_idx id = getReg();
		reg_idx aRes = getAddressOfField(ft, root, g, l, class);
		fprintf(ft, "MOV R%d, [R%d]\n", id, aRes);
		aRes = freeReg();
		return id;
	}
	else if (root->nodetype == FIELDFUNCTION)
		return fieldFunctionCall_code_generator(ft, root, g, l, class);
	else if (root->nodetype == NULL_)
	{
		reg_idx id = getReg();
		fprintf(ft, "MOV R%d, -1\n", id);
		return id;
	}
	else if (root->nodetype == ALLOC)
		return alloc_code_generator(ft);
	else if (root->nodetype == FREE)
		return free_code_generator(ft, root, g, l, class);
	else
	{
		reg_idx a = expression_code_generator(ft, root->left, g, l, class);
		reg_idx b = expression_code_generator(ft, root->right, g, l, class);
		reg_idx id;
		switch (root->oper)
		{
		case PLUS:
			fprintf(ft, "ADD R%d, R%d\n", a, b);
			id = freeReg();
			return a;
			break;
		case MINUS:
			fprintf(ft, "SUB R%d, R%d\n", a, b);
			id = freeReg();
			return a;
			break;
		case DIV:
			fprintf(ft, "DIV R%d, R%d\n", a, b);
			id = freeReg();
			return a;
			break;
		case MUL:
			fprintf(ft, "MUL R%d, R%d\n", a, b);
			id = freeReg();
			return a;
			break;
		case MOD:
			fprintf(ft, "MOD R%d, R%d\n", a, b);
			id = freeReg();
			return a;
			break;
		}
	}
}

int assignment_code_generator(FILE *ft, struct AST_Node *root, struct GSTable *g, struct LSTable *l, struct ClassTableNode *class)
{
	if (root && root->left && root->right)
	{
		reg_idx id = expression_code_generator(ft, root->right, g, l, class);
		if (root->left->nodetype == VARIABLE)
		{
			reg_idx aRes = getAddress(ft, root->left->varname, g, l, class);
			fprintf(ft, "MOV [R%d], R%d\n", aRes, id);
			aRes = freeReg();
		}
		else if (root->left->nodetype == ARRAY_VARIABLE)
		{
			reg_idx aRes = getArrayNodeAddress(ft, root->left, g, l, class);
			fprintf(ft, "MOV [R%d], R%d\n", aRes, id);
			aRes = freeReg();
		}
		else if (root->left->nodetype == FIELD)
		{
			reg_idx aRes = getAddressOfField(ft, root->left, g, l, class);
			fprintf(ft, "MOV [R%d], R%d\n", aRes, id);
			aRes = freeReg();
		}
		id = freeReg();
		return 1;
	}
	printf("Improper Assignment Node\n");
	exit(1);
	return -1;
}

int write_code_generator(FILE *ft, struct AST_Node *root, struct GSTable *g, struct LSTable *l, struct ClassTableNode *class)
{
	if (root && root->left)
	{
		reg_idx id = expression_code_generator(ft, root->left, g, l, class);
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

int read_code_generator(FILE *ft, struct AST_Node *root, struct GSTable *g, struct LSTable *l, struct ClassTableNode *class)
{
	if (root && root->left)
	{
		reg_idx id = getReg();
		if (root->left->nodetype == VARIABLE)
		{
			reg_idx aRes = getAddress(ft, root->left->varname, g, l, class);
			fprintf(ft, "MOV R%d, R%d\n", id, aRes);
			aRes = freeReg();
		}
		else if (root->left->nodetype == ARRAY_VARIABLE)
		{
			reg_idx aRes = getArrayNodeAddress(ft, root->left, g, l, class);
			fprintf(ft, "MOV R%d, R%d\n", id, aRes);
			aRes = freeReg();
		}
		reg_idx temp = getReg();
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

void boolean_code_generator(FILE *ft, struct AST_Node *root, int label, struct GSTable *g, struct LSTable *l, struct ClassTableNode *class)
{
	if (root && root->left && root->right)
	{
		reg_idx a = expression_code_generator(ft, root->left, g, l, class);
		reg_idx b = expression_code_generator(ft, root->right, g, l, class);
		switch (root->oper)
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

void if_else_code_generator(FILE *ft, struct AST_Node *root, int blabel, int clabel, struct GSTable *g, struct LSTable *l, struct ClassTableNode *class)
{
	if (root)
	{
		if (root->left)
		{
			int first_label = getLabel();
			int second_label = getLabel();
			if (root->left->left)
				boolean_code_generator(ft, root->left->left, first_label, g, l, class);
			if (root->left->right)
				code_generator_util(ft, root->left->right, blabel, clabel, g, l, class);
			fprintf(ft, "JMP _L%d\n", second_label);
			fprintf(ft, "_L%d:\n", first_label);
			if (root->right)
				code_generator_util(ft, root->right, blabel, clabel, g, l, class);
			fprintf(ft, "_L%d:\n", second_label);
		}
		return;
	}
	printf("Invalid IF_ELSE node\n");
	return;
}

void while_code_generator(FILE *ft, struct AST_Node *root, int blabel, int clabel, struct GSTable *g, struct LSTable *l, struct ClassTableNode *class)
{
	if (root)
	{
		if (root->left)
		{
			int first_label = getLabel();
			int second_label = getLabel();
			fprintf(ft, "_L%d:\n", first_label);
			boolean_code_generator(ft, root->left, second_label, g, l, class);
			if (root->right)
				code_generator_util(ft, root->right, second_label, first_label, g, l, class);
			fprintf(ft, "JMP _L%d\n", first_label);
			fprintf(ft, "_L%d:\n", second_label);
		}
		return;
	}
	printf("Invalid WHILE node\n");
	return;
}

void do_while_code_generator(FILE *ft, struct AST_Node *root, int blabel, int clabel, struct GSTable *g, struct LSTable *l, struct ClassTableNode *class)
{
	if (root)
	{
		if (root->right)
		{
			int first_label = getLabel();
			int second_label = getLabel();
			fprintf(ft, "_L%d:\n", first_label);
			if (root->left)
				code_generator_util(ft, root->left, second_label, first_label, g, l, class);
			boolean_code_generator(ft, root->right, second_label, g, l, class);
			fprintf(ft, "JMP _L%d\n", first_label);
			fprintf(ft, "_L%d:\n", second_label);
		}
		return;
	}
	printf("Invalid DO_WHILE node\n");
	return;
}

void repeat_until_code_generator(FILE *ft, struct AST_Node *root, int blabel, int clabel, struct GSTable *g, struct LSTable *l, struct ClassTableNode *class)
{
	if (root)
	{
		if (root->right)
		{
			int first_label = getLabel();
			int second_label = getLabel();
			fprintf(ft, "_L%d:\n", first_label);
			if (root->left)
				code_generator_util(ft, root->left, second_label, first_label, g, l, class);
			boolean_code_generator(ft, root->right, first_label, g, l, class);
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

reg_idx functionCall_code_generator(FILE *ft, struct AST_Node *root, struct GSTable *gst, struct LSTable *lst, struct ClassTableNode *class)
{
	int cnt = 0;
	for (int i = 0; i < 20; i++)
	{
		if (reg_pool[i])
		{
			cnt++;
			fprintf(ft, "PUSH R%d\n", i);
			freeReg();
		}
	}
	PushArgument(ft, root->param, gst, lst, class);
	reg_idx z = getReg();
	fprintf(ft, "PUSH R%d\n", z);
	z = freeReg();
	struct GSTNode *curr = GSTLookUp(gst, root->varname);
	fprintf(ft, "CALL _F%d\n", curr->binding_addr);
	int temp = cnt;
	while (temp--)
		getReg();
	z = getReg();
	temp = ParamGetSize(curr->param) + 1;
	int i = 0;
	reg_idx t = getReg();
	while (temp--)
	{
		if (i == 0)
		{
			fprintf(ft, "POP R%d\n", z);
			i = 1;
		}
		else
			fprintf(ft, "POP R%d\n", t);
	}
	t = freeReg();
	for (int i = cnt - 1; i >= 0; i--)
		fprintf(ft, "POP R%d\n", i);
	return z;
}

reg_idx fieldFunctionCall_code_generator(FILE *ft, struct AST_Node *root, struct GSTable *g, struct LSTable *l, struct ClassTableNode *class)
{
	int cnt = 0;
	for (int i = 0; i < 20; i++)
	{
		if (reg_pool[i])
		{
			cnt++;
			fprintf(ft, "PUSH R%d\n", i);
			freeReg();
		}
	}
	reg_idx z = expression_code_generator(ft, root->left, g, l, class);
	fprintf(ft, "PUSH R%d\n", z);
	z = freeReg();
	PushArgument(ft, root->right->param, g, l, class);
	z = getReg();
	fprintf(ft, "PUSH R%d\n", z);
	z = freeReg();
	struct MethodListNode *found = MethodLookUp(root->left->class, root->right->varname);
	fprintf(ft, "CALL _F%d\n", found->Mlabel);
	int temp = cnt;
	while (temp--)
		getReg();
	z = getReg();
	temp = ParamGetSize(found->param) + 2;
	int i = 0;
	reg_idx t = getReg();
	while (temp--)
	{
		if (i == 0)
		{
			fprintf(ft, "POP R%d\n", z);
			i = 1;
		}
		else
			fprintf(ft, "POP R%d\n", t);
	}
	t = freeReg();
	for (int i = cnt - 1; i >= 0; i--)
		fprintf(ft, "POP R%d\n", i);
	return z;
}

void return_code_generator(FILE *ft, struct AST_Node *root, struct GSTable *gst, struct LSTable *lst, struct ClassTableNode *class)
{
	reg_idx z1 = getReg();
	reg_idx z2 = expression_code_generator(ft, root->left, gst, lst, class);
	fprintf(ft, "MOV R%d, BP\nSUB R%d, 2\nMOV [R%d], R%d\n", z1, z1, z1, z2);
	z2 = freeReg();
	z1 = freeReg();
	fprintf(ft, "MOV SP, BP\nPOP BP\nRET\n");
	return;
}

void code_generator_util(FILE *ft, struct AST_Node *root, int blabel, int clabel, struct GSTable *g, struct LSTable *l, struct ClassTableNode *class)
{
	if (root)
	{
		//for assignment statement
		if (root->nodetype == ASSIGNMENT)
		{
			assignment_code_generator(ft, root, g, l, class);
			return;
		}
		//for read statement
		else if (root->nodetype == READ)
		{
			read_code_generator(ft, root, g, l, class);
			return;
		}
		//for write statement
		else if (root->nodetype == WRITE)
		{
			write_code_generator(ft, root, g, l, class);
			return;
		}
		//for if else statement construct
		else if (root->nodetype == IF_ELSE)
		{
			if_else_code_generator(ft, root, blabel, clabel, g, l, class);
			return;
		}
		//for while loop construct
		else if (root->nodetype == WHILE)
		{
			while_code_generator(ft, root, blabel, clabel, g, l, class);
			return;
		}
		//for do while loop construct
		else if (root->nodetype == DO_WHILE)
		{
			do_while_code_generator(ft, root, blabel, clabel, g, l, class);
			return;
		}
		//for repeat-until loop construct
		else if (root->nodetype == REPEAT_UNTIL)
		{
			repeat_until_code_generator(ft, root, blabel, clabel, g, l, class);
			return;
		}
		//for break statement
		else if (root->nodetype == BREAK)
		{
			break_code_generator(ft, root, blabel, clabel);
			return;
		}
		//for continue statement
		else if (root->nodetype == CONTINUE)
		{
			continue_code_generator(ft, root, blabel, clabel);
			return;
		}
		//for breakpoint statement
		else if (root->nodetype == BREAKPOINT)
		{
			breakpoint_code_generator(ft, root);
			return;
		}
		else if (root->nodetype == RETURN)
		{
			return_code_generator(ft, root, g, l, class);
			return;
		}
		else if (root->nodetype == INITIALIZE)
		{
			initialize_code_generator(ft);
			return;
		}
		code_generator_util(ft, root->left, blabel, clabel, g, l, class);
		code_generator_util(ft, root->right, blabel, clabel, g, l, class);
	}
	return;
}

void generateHeader(FILE *ft)
{
	fprintf(ft, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", 0, 2056, 0, 0, 0, 0, 0, 0);
	fprintf(ft, "MOV SP, %d\nMOV BP, 4096\nPUSH R0\n", ADDR - 1);
	return;
}

void generateExit(FILE *ft)
{
	fprintf(ft, "INT 10\n");
	// reg_idx temp = getReg();
	// fprintf(ft, "MOV R%d, \"Exit\"\n", temp);
	// fprintf(ft, "PUSH R%d\n", temp);
	// fprintf(ft, "PUSH R%d\n", temp);
	// fprintf(ft, "PUSH R%d\n", temp);
	// fprintf(ft, "PUSH R%d\n", temp);
	// fprintf(ft, "PUSH R%d\n", temp);
	// fprintf(ft, "CALL 0\n");
	// temp = freeReg();
	return;
}

reg_idx getAddress(FILE *ft, char *varname, struct GSTable *g, struct LSTable *l, struct ClassTableNode *class)
{
	struct GSTNode *curr1;
	struct LSTNode *curr2;
	curr2 = LSTLookUp(l, varname);
	if (curr2)
	{
		reg_idx a = getReg();
		fprintf(ft, "MOV R%d, BP\n", a);
		fprintf(ft, "ADD R%d, %d\n", a, curr2->binding_addr);
		return a;
	}
	else
	{
		curr1 = GSTLookUp(g, varname);
		reg_idx a = getReg();
		fprintf(ft, "MOV R%d, %d\n", a, curr1->binding_addr);
		return a;
	}
}

reg_idx getArrayNodeAddress(FILE *ft, struct AST_Node *root, struct GSTable *g, struct LSTable *l, struct ClassTableNode *class)
{
	struct GSTNode *curr = GSTLookUp(g, root->left->varname);
	reg_idx temp0 = getReg();
	fprintf(ft, "MOV R%d, %d\n", temp0, curr->binding_addr);
	reg_idx temp1 = expression_code_generator(ft, root->right, g, l, class);
	fprintf(ft, "ADD R%d, R%d\n", temp0, temp1);
	temp1 = freeReg();
	return temp0;
}

reg_idx alloc_code_generator(FILE *ft)
{
	reg_idx z = getReg(), temp = getReg();
	fprintf(ft, "MOV R%d, \"Alloc\"\nPUSH R%d\nMOV R%d, 8\nPUSH R%d\nPUSH R%d\nPUSH R%d\nPUSH R%d\nCALL 0\nPOP R%d\nPOP R%d\nPOP R%d\nPOP R%d\nPOP R%d\n", z, z, z, z, z, z, z, z, temp, temp, temp, temp);
	temp = freeReg();
	return z;
}

reg_idx free_code_generator(FILE *ft, struct AST_Node *root, struct GSTable *g, struct LSTable *l, struct ClassTableNode *class)
{
	reg_idx z = -1, id = -1;
	if (root->left->nodetype == VARIABLE)
		id = getAddress(ft, root->left->varname, g, l, class);
	else if (root->left->nodetype == FIELD)
		id = getAddressOfField(ft, root->left, g, l, class);
	z = getReg();
	fprintf(ft, "MOV R%d, R%d\n", z, id);
	fprintf(ft, "MOV R%d, [R%d]\n", id, id);
	reg_idx temp = getReg();
	fprintf(ft, "PUSH R%d\nMOV R%d, \"Free\"\nPUSH R%d\nPUSH R%d\nPUSH R%d\nPUSH R%d\nPUSH R%d\nCALL 0\nPOP R%d\nPOP R%d\nPOP R%d\nPOP R%d\nPOP R%d\nPOP R%d\n", z, temp, temp, id, temp, temp, temp, id, temp, temp, temp, temp, z);
	fprintf(ft, "MOV [R%d], -1\n", z);
	temp = freeReg();
	z = freeReg();
	return id;
}

void initialize_code_generator(FILE *ft)
{
	reg_idx id = getReg();
	fprintf(ft, "MOV R%d, \"Heapset\"\n", id);
	fprintf(ft, "PUSH R%d\nPUSH R%d\nPUSH R%d\nPUSH R%d\nPUSH R%d\n", id, id, id, id, id);
	fprintf(ft, "CALL 0\n");
	fprintf(ft, "POP R%d\nPOP R%d\nPOP R%d\nPOP R%d\nPOP R%d\n", id, id, id, id, id);
	id = freeReg();
	return;
}

reg_idx getAddressOfField(FILE *ft, struct AST_Node *root, struct GSTable *g, struct LSTable *l, struct ClassTableNode *class)
{
	if (root)
	{
		reg_idx a = getAddressOfField(ft, root->left, g, l, class);
		if (root->nodetype == VARIABLE)
		{
			a = getAddress(ft, root->varname, g, l, class);
		}
		else if (root->nodetype == FIELD)
		{
			int fieldindex = -1;
			if (root->left->type)
				fieldindex = FieldListLookUp(root->left->type, root->right->varname)->fieldIndex;
			else
				fieldindex = ClassFieldLookUp(root->left->class, root->right->varname)->fieldIndex;
			if (fieldindex == -1)
			{
				printf("Bad field index\n");
				exit(0);
			}
			fprintf(ft, "MOV R%d, [R%d]\n", a, a);
			fprintf(ft, "ADD R%d, %d\n", a, fieldindex);
		}
		return a;
	}
	else
		return -1;
}

void PushArgument(FILE *ft, struct AST_Node *root, struct GSTable *gst, struct LSTable *lst, struct ClassTableNode *class)
{
	if (root)
	{
		PushArgument(ft, root->next_param, gst, lst, class);
		reg_idx z = expression_code_generator(ft, root, gst, lst, class);
		fprintf(ft, "PUSH R%d\n", z);
		z = freeReg();
	}
}

void code_generator(FILE *ft, struct AST_Node *root, struct GSTable *g, struct LSTable *l, struct ClassTableNode *class)
{
	if (class)
	{
		struct MethodListNode *found = MethodLookUp(class, root->varname);
		fprintf(ft, "_F%d:\n", found->Mlabel);
		fprintf(ft, "PUSH BP\nMOV BP, SP\n");
		fprintf(ft, "ADD SP, %d\n", LSTGetSize(l) - ParamGetSize(found->param));
	}
	else
	{
		struct GSTNode *curr = GSTLookUp(g, root->varname);
		fprintf(ft, "_F%d:\n", curr->binding_addr);
		fprintf(ft, "PUSH BP\nMOV BP, SP\n");
		fprintf(ft, "ADD SP, %d\n", LSTGetSize(l) - ParamGetSize(curr->param));
	}
	code_generator_util(ft, root->left, -1, -1, g, l, class);
}
//-----------------------------------------------------------------------------------