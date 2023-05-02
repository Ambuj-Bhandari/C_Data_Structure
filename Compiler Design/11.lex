%{
%}
%s A B C D Y Z
%%
<INITIAL>[A-Za-z_] BEGIN B;
<INITIAL>[0-9] BEGIN A;
<INITIAL>[.] BEGIN Y;
<INITIAL>[^A_Za-z0-9_.\n] BEGIN Z;
<INITIAL>\n BEGIN INITIAL;printf("Not Accepted\n");
<A>[.] BEGIN C;
<A>[0-9] BEGIN A;
<A>[A-Za-z_] BEGIN Y;
<A>[^A_Za-z0-9_.\n] BEGIN Z;
<A>\n BEGIN INITIAL;printf("INTEGER\n");
<B>[A-Za-z_] BEGIN B;
<B>[0-9] BEGIN B;
<B>[.] BEGIN Y;
<B>[^A_Za-z0-9_.\n] BEGIN Z;
<B>\n BEGIN INITIAL; printf("IDENTIFIER\n");
<C>[0-9] BEGIN D;
<C>[.] BEGIN Y;
<C>[A-Za-z_] BEGIN Y;
<C>[^A_Za-z0-9_.\n] BEGIN Z;
<C>\n BEGIN INITIAL;printf("Not Accepted\n");
<D>[0-9] BEGIN D;
<D>[.] BEGIN Y;
<D>[A-Za-z_] BEGIN Y;
<D>[^A_Za-z0-9_.\n] BEGIN Z;
<D>\n BEGIN INITIAL; printf("FLOAT\n");
<Y>[A_Za-z0-9_.] BEGIN Y;
<Y>[^A_Za-z0-9_.\n] BEGIN Z;
<Y>[\n] BEGIN INITIAL;printf("Not Accpeted\n");
<Z>[^\n] BEGIN Z;
<Z>[\n] BEGIN INITIAL;printf("Invalid Input\n");
%%

int yywrap(){}
main()
{
printf("Enter the character A-Z ,a-z, 0-9, _ or . only\n");
yylex();
return 0;
}
