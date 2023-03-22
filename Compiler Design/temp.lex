%{
%}

space [\t]
emptyline [\n]

%%
{space}+ printf(" ");
{emptyline}+ printf("\n");
[$] return 0;
%%

yywrap(){}
main(int argc, char *argv[])
{
extern FILE *yyin;
yyin=fopen("Input.txt","r");
yylex();
return 0;
}
