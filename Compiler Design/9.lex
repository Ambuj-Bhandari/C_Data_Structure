//Lex Program  using DFA to accept even number of input(Even number of a and even number of b)
%{

%}
reg (aa|bb)*((ab|ba)(aa|bb)*(ab|ba)(aa|bb)*)*
%%
{reg} printf("%s is Accepted\n",yytext);
.* printf("%s Not Accepted\n",yytext);
%%

yywrap(){}
main(int argc,cgar *agrv[])
{


/*Format CONSIDERED
%s S A B C F
%%
<S>\n printf(" Aceepetd\n"); BEGIN S;
<S>a BEGIN A;
<S>b BEGIN B;
<A>a BEGIN S;
<A>b BEGIN C;
<A>\n BEGIN S; printf("not accepted\n");
<B>a BEGIN C;
<B>b BEGIN S;
<B>\n BEGIN S; printf("not accepted\n");
<C>a BEGIN B;
<C>b BEGIN A;
<C>\nBEGIN S; printf("not accepted\n");
<A>[^ab\n] BEGIN F;
<B>[^ab\n] BEGIN F;
<C>[^ab\n] BEGIN F;
<S>[^ab\n] BEGIN F;
<F>[^\n] BEGIN F;
<F>[\n] BEGIN S; printf("INVALID ARGUMENT\n");
[$] return 0; ;
%%
yywrap(){}
main()
{
printf("Enter the string of a and b only\n");
yylex();
return 0;
}
