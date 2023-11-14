%{
#include<stdio.h>
%}
%%
bool|int|float|if|else|for|while|return printf("keyword");
[-,+]?[0-9]+ printf("constants");
[,.'"]+ printf("punctuation");
[!@#$%^&*()]+ printf("specialchar");
[a-zA-Z]+ printf("identifiers");
%%
int yywrap(){
return 1;
}
int main()
{
printf("enter the value:");
yylex();
}
