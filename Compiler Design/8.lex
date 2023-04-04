//LEX PRogram to extract all html tags at runtime and store it ina file.

%{
%}
%%
"<"[^>]*">" fprintf(yyout,"%s",yytext);
[$] return 0;
. ;
%%
int yywrap(){}

main(int args,char **argv)
{
extern FILE *yyin,*yout;
yyin=fopen("Input.html","r");
yyout=fopen("Output.html","w");
yylex();
}
