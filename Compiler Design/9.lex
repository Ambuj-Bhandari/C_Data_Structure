//LEX PRogram to extract all html tags

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
