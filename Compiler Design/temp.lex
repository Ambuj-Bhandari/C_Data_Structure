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

%}
digit [0-9]
alpha [a-zA-Z0-9]
%%
"<"[/]{alpha}{digit}*">" fprintf(yyout,"%s",yytext);
. ;
%%
int yywrap(){};
int main()
{
	extern FILE *yyin,*yyout;
	yyin=fopen("Input.html","r");
	yyout=fopen("Output.html","w");
	yylex();
	return 0
