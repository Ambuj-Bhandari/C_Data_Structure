// Lex program to replace white spaces of 'INPUT.txt' by a single blank character into 'OUTPUT.txt'
//Count lines,tabs,spaces and characters
%{
    //#include<stdio.h>
    int ln=0,wr=0,sp=0,tot=0;
%}

Space [\t]
emptylines \n
%%
   {Space}+ printf(" ");
   {emptylines}+ printf("\n");
   .ECHO;     // prints the o/p file
%%
yywrap(){}
int main(int argc,char *argv[])
{
    extern FILE *yyin;
    yyin=fopen(argv[1],"r");

    yylex();
    return 0;
}