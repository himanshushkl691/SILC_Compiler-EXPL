#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "astree.h"

int main()
{
    struct LSTable *h = init_LSTable();
    char *s;
    int type;
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", s);
        scanf("%d", &type);
        h = LSTInstall(h, s, type);
    }
    printf("size: %d\n",LSTGetSize(h));
    printLSTable(h);
    return 0;
}