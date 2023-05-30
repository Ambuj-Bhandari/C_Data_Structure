%{
#include<stdio.h>
void yyerror(char *);
int yylex();
int sym[26];
%}
%token id digit
%left '+' '-'
%left '*' '/'
%%
P: P S '\n'
| ;
S: E  {printf("Output: %d\n",$1);}
	| id '=' E {sym[$1]=$3;}
;
E: digit {$$=$1}
    |id {$$=sym[$1];}
    | E '+' E {$$=$1+$3;}
    | E '-' E {$$=$1-$3;}
    |E '*' E {$$=$1*$3;}
    |E '/' E {$$=$1/$3;}
    | '(' E ')'  {$$=$2;}
    ;
%%

int main()
{
  yyparse();
  return 0;
}
void yyerror(char *msg)
{
   return fprintf(stderr,"%s\n", msg);
}
