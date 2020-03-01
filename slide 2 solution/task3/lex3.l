%option yylineno
%option noyywrap
%%
^\n fprintf(yyout,"%4d\n", yylineno-1);
(.*) fprintf(yyout,"%4d\t%s\n", yylineno, yytext);
\n ;
%%
int main(int argc, char *argv[]) {
yyin = fopen("input.txt", "r");
yyout = fopen("output.txt", "w");
yylex();
fclose(yyin);
fclose(yyout);
}
