#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "astree.h"
#include "astree.c"

int main()
{
    struct TypeTable *T;
    T = initTypeTable();
    struct FieldList *F;
    F = initFieldList();
    F = installField(T, F, "list", "LinkedList");
    F = installField(T, F, "a", "int");
    T = installTypeTableNode(T, "LinkedList", 16, F);
    ValidateFieldList(TypeTableLookUp(T, "LinkedList"));
    printTypeTable(T);
    return 0;
}