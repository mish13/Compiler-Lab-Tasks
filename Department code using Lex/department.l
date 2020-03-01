%%
[\t]+
CSE |
EEE |
SWE |
PHY |
MAT |
GEB |
STA |
SOC |
BMB |
IPE |
CEE |
CEP |
ENG |
BBA |
BAN |
ECO |
CHE |
FET	{printf("%s : is a department code of SUST\n",yytext);}
[a-z A-Z]+	{printf("%s : is not a department code of SUST\n",yytext);}
.|\n

%%
main()
{
yylex();
}
