%{
#include "y.tab.h"
extern int yyval;
%}

%%
[0-9]+ {yylval=atoi(yytext); return NUM;}
\n return 0;
. return *yytext;
%%
int yywrap(){
return 1;
}

