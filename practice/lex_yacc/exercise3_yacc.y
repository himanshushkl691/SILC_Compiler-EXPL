/*Declaration Section*/
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    char * cat(char ,char *,char *);
%}

%union{
    char character;
    char* string;
};

%token IDENTIFIER
%token NEWLINE
%left '+'
%left '*'
%type <string> IDENTIFIER

%%
start: expr NEWLINE {printf("%s\nParsing Completed.\n",$<string>$);exit(1);};
expr:   expr '+' expr {$<string>$ = cat($<character>2,$<string>1,$<string>3);}
| expr '*' expr {$<string>$ = cat($<character>2,$<string>1,$<string>3);}
| IDENTIFIER {$<string>$ = $<string>1;}
;
%%

void yyerror(const char *err){
    printf("yyparse error: %s",err);
    return;
}

char* cat(char s1,char *s2,char *s3){
    int l2 = strlen(s2),l3 = strlen(s3);
    char * news = (char *)malloc((l2 + l3 + 3) * sizeof(char));
    int z = 0;
    for(int i = 0;i < 1;i++){
        news[z++] =  s1;
    }
    news[z++] = ' ';
    for(int i = 0;i < l2;i++){
        news[z++] = s2[i];
    }
    news[z++] = ' ';
    for(int i = 0;i < l3;i++){
        news[z++] = s3[i];
    }
    return news;
}

int main()
{
    yyparse();
    return 1;
}