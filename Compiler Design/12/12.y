// YAAC code for + - * and / of integer with precedence
%{
#include<stdio.h>
int yylex();
void yyerror(char *);
%}
%token digit
%left '+' '-'
%left '*' '/'

%%
S:S E '\n' {$$=$2;printf("output=%d\n",$$);}
| ;
E:E'+'E {$$=$1+$3;}
|E'-'E {$$=$1-$3;}
|E'*'E {$$=$1*$3;}
|E'/'E {$$=$1/$3;}
|digit {$$=$1;}
 ;
%%
int main(){
yyparse();
return 0;
}
void yyerror(char *msg)
{
printf("\n%s",msg);
printf("Arithematic Expression is invalid\n");
}