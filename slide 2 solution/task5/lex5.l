%%
\t     |
\n 		;
if     |
else   |
switch |
case   |
while  |
for    		{printf("KEY:lexeme\n");}
[a-z A-Z]+_*[a-z A-Z]*[0-9]*[a-z A-Z]*	{printf("ID:lexeme\n");}
[0-9]+\.[0-9]+	{printf("FLT:floating_value_in_decimal notation\n");}
[0-9]+		{printf("INT:integer_value\n");}
\+	|
\-       |
\*	|
\/		{printf("OP:lexeme\n");}
.		{printf("NOT_RECOGNIZED\n");}
%%
main()
{
yylex();
}
