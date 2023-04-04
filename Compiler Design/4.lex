// Lex program to count totals characters ,white spaces, and words froma text file 'INPUT.txt'
//Count lines,tabs,spaces and characters
%{
    int cc=0 , wc=0 , sc=0 , tc=0 , lc=0;
%}

%%
[a-zA-Z0-9][" "] {cc++;wc++;sc++;}
[a-zA-Z0-9][\t] {cc++;wc++;tc++;}
[a-zA-Z0-9][\n] {cc++;wc++;lc++;}
[a-zA-Z0-9] {cc++;}
[" "] {sc++;}
[\t] {tc++;}
[\n] {lc++;}
EOF {return 0;}
%%
yywrap(){}
int main(int argc,char *argv[])
{
extern FILE *yyin;
yyin=fopen("Input.txt","r");
yylex();
printf("Total characters: %d\n Blanks: %d\n words:%d\n Lines:%d\n tab space:%d\n" , cc,sc,wc,lc,tc);
return 0;
}
