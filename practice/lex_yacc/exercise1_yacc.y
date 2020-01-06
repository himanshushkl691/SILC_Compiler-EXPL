/*Declaration Section*/
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    char * cat(char *,char *,char);
    char *to_string(char);
%}

%union{
    char character;
    char* string;
};

%token IDENTIFIER
%token NEWLINE
%left '+'
%left '*'
%type <character> IDENTIFIER

%%
start: expr NEWLINE {printf("%s\nParsing Completed.\n",$<string>$);exit(1);};
expr:   expr '+' expr {$<string>$ = cat($<string>1,$<string>3,$<character>2);}
| expr '*' expr {$<string>$ = cat($<string>1,$<string>3,$<character>2);}
| IDENTIFIER {$<string>$ = to_string($<character>1);}
;
%%

void yyerror(const char *err){
    printf("yyparse error: %s",err);
    return;
}

char* cat(char *s1,char *s2,char s3){
    int l1 = strlen(s1),l2 = strlen(s2);
    char * news = (char *)malloc((l1 + l2 + 1) * sizeof(char));
    int z = 0;
    for(int i = 0;i < l1;i++){
        news[z++] = s1[i];
    }
    for(int i = 0;i < l2;i++){
        news[z++] = s2[i];
    }
    for(int i = 0;i < 1;i++){
        news[z++] =  s3;
    }
    return news;
}
char *to_string(char c){
    char *news = (char *)malloc(1 * sizeof(char));
    news[0] = c;
    return news;
}

int main()
{
    yyparse();
    return 1;
}