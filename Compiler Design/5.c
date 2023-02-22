// Lex program to count totals characters ,white spaces, and words froma text file 'INPUT.txt'
//Count lines,tabs,spaces and characters
%{
    //#include<stdio.h>
    int ln=0,wr=0,sp=0,tot=0;
%}

%%
    \n {ln++; wr++;tot++;}
    [\t ' '] {tot++;wr++;}
    [" "] {sp++;wr++;}
%%
yywrap(){}
int main(int argc,char *argv[])
{
    extern FILE *yyin;
    yyin=fopen(argv[1],"r");

    yylex();
    printf("Total charcters: %d\n Spaces: %d\n Words: %d\n Lines:%d\n",tot,sp,wr,ln);
    return 0;
}
