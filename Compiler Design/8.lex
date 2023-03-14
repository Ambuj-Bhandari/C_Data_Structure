//Lex program for tokenizing(identify and print operators,separators,keywords,Identifiers) of follwoing C-Program:
//int p=1,d=0,r=4;
//float m=0.0,n=2000;
//while(p<=3)
//{
//if(d==0)
//{m=m+n*r+4.5;d++}
//else
//{r++;m=m+r+1000.0}
//p++;}

%{
#include<stdio.h>
int n=0;
%}

DIGIT[0-9]
NUMBER {DIGIT}+
REAL {DIGIT}*"."{DIGIT}+
TEXT [a-zA-Z]+
TEXT_NUMBERS [a-zA-Z0-9]
CONDITIONALS"if"|"else"|"elseif"|"switch"|""case"
KEYWORD"break"|"continue"|"goto"|"printf"|"sprintf"|"sscanf"|"fopen"|"fwrite"|"fread"|"fclose"|"write"|"read"|"open"|"close"|"return"|"int"|"float"|"char"
ITERATORS"for"|"while"|"do"
IDENTIFIER[a-zA-Z]{TEXT_NUMBERS}*|[a-zA-Z]{TEXT_NUBERS}*[[{NUMBERS}+]]
OPERATORS"+"|+"-"|"*"|"/"|"="
UNARY"++"|"--"
BLOCK_BEGINS"{"
BLOCK_ENDS"}"
LOPERATORS"&"|"|"|"&&"|"||"|"~"|">"|"<"|">="|"<+"|"=="

%%
"while"|"if"|"else" {n++;printf("\t keywords: %s",yytext);}
"int"|"float" {n++;printf("\t keywords: %s",yytext);}
[a-zA-Z_][a-zA-Z0-9_]* {n++;printf("\t Identifier: %s",yytext);}
"<="|"=="|"="|"++"|"-"|"*"|"+"|"("|")"|"," {n++;printf("\t Operators: %s",yytext);}
"{"|"}"|";" {n++;printf("\t Seperators: %s",yytext);}
-?[0-9]+"."[0-9]+ {n++;printf("\t Float: %s",yytext);}
-?[0-9]+ {n++;printf("\t Integer: %s",yytext);}
. ;
%%

yywrap(){}
main()
{
yylex();
printf("\n TOTAL number of tokens: %d\n",n);
}


