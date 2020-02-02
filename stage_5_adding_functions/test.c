#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "astree.c"

int main()
{
    struct ParamList *p;
    struct GSTable *g;
    p = init_ParamList();
    g = init_GSTable();
    char *s;
    int type;
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", s);
        scanf("%d", &type);
        p = ParamInsert(p, s, type);
    }
    g = GSTInstall(g,101,102,"himanshu",1,p,NULL);
    p = ParamDelete(p);
    printGST(g);
    printParamList(g->head->param);
    p = ParamInsert(p,"abc",105);
    g = GSTInstall(g,103,104,"shukla",1,p,NULL);
    p = ParamDelete(p);
    printGST(g);
    printParamList(g->head->next->param);
    return 0;
}