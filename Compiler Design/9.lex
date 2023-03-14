//LEX PRogram to extract all html tags at runtime and store it ina file.

%{
%}
%%
"<"[^>]*">" fprintf(yyout,"%s",yytext);
. ;
%%
yywrap(){}

main(int args,char **argv)
{
extern FILE *yyin,*yout;
yyin=fopen(argv[1],"r");
yyout=fopen(argv[2],"w");
yylex();
}
