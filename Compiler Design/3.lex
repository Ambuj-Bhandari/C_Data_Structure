// Lex Program to Identify and Count valid identifier

//Lex program to identify and valid identifier of C/C++ in given input pattern
%{
int count=0;
%}

op [+-*/]
letter [a-zA-Z]
digit [0-9]
id {letter}*|({letter}+{digit})+
notid ({digit}{letter}+)

%%
[\t\n]+
("int")|("float")|("char")|("case")|("default")|("if")|("for")|("printf")|("scanf") {printf("%s is a keyword\n",yytext);}
{id} {printf("%s is a identifier\n",yytext);count++;}
{notid} {printf("%s is not a identifier\n",yytext);}
{digit}* {printf("%s is not a identifier\n",yytext);}
[$] return 0;
%%
yywrap(){}
int main(int argc,char *argv[])
{
yylex();
printf("Total Number of IDentifiers: %d\n",count);
return 0;
}



/* Final Code

%{
int count=0;
%}

op [%+*/]
letter [a-zA-Z]
TEXT_NUMBERS [a-zA-Z0-9]
undsc [_]
digit [0-9]
id [a-zA-Z_][a-zA-Z0-9_]*
notid ({digit}*{letter}*)
%%
[\t\n]+
({op}+{letter}*)* {printf("%s is not an identifier\n",yytext);}
("int")|("float")|("char")|("case")|("default")|("if")|("for")|("printf")|("scanf") {printf("%s is a keyword\n",yytext);}
{digit}+{id}* {printf("%s is not a identifier\n",yytext);} 
{id} {printf("%s is a identifier\n",yytext);count++;}
{notid} {printf("%s is not a identifier\n",yytext);}
{digit}+ {printf("%s is not a identifier\n",yytext);} 
[$] return 0;
%%
int yywrap(){} // jese ye wale:  12_ 12a_ 12_a
int main(int argc,char *argv[])
{
yylex();
printf("Total Number of IDentifiers: %d\n",count);
return 0;
}



*/
