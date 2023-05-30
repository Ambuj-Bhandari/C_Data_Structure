%{
#include "y.tab.h"
extern int yyval;
%}

%%
[a-z] {yylval=*yytext-'a'; return id;}
[0-9]+ {yylval=atoi(yytext); return digit;}
[-+()=/*\n] {return *yytext;}
[ \t] ;
. yyerror("invalid character");
%%
int yywrap(){
return 1;
}

