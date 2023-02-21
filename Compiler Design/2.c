// Lex Program to identify Integer or Float
%{

%}

DIGIT [0=9]
%%
    {DIGIT}* {ECHO; printf("Integer\n");}  //ECHO prints the currently enetered number
    {DIGIT}* ?\{DIGIT}* {ECHO; printf("Float\n");} /* ?\ means that the left hand side may or maynot be present*/
%%

yywrap(){}
int main(int argc, char const *argv[])
{
    yylex();
    return 0;
}
