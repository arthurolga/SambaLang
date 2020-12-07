%{
    #include <string.h>
    #include <stdlib.h>
    #include "y.tab.h"
    void extern yyerror(char*);
    void InvalidToken();

%}

whitespace      [ \t\r\v\f]
linefeed        \n
%%
"vazio"  |
"booleano"  |
"inteiro"   |
"decimal"   |
"caracter"  |
"corda"    {yylval.dataType = strdup(yytext);return DATA_TYPE;}


"'"                                             {return QUOTES;}
"="												{return DEFINE;}
","                                             {return COMMA;}
";"                                             {return SEMI_COLON;}
"="                                             {return EQUALS;}
"("                                             {return PARENTHESIS_OPEN;}
")"                                             {return PARENTHESIS_CLOSE;}
"{"                                             {return CURLY_BRACE_OPEN;}
"}"                                             {return CURLY_BRACE_CLOSE;}
"["                                             {return SQUARE_BRACE_CLOSE;}
"]"                                             {return SQUARE_BRACE_CLOSE;}

"funcao"											{return DEF;}
"retorna"                                        {return RETURN;}
"recebe"                                         {return INPUT;}
"enquanto"											{return WHILE;}
"se"											{return IF;}
"ou"											{return ELIF;}
"senao"											{return ELSE;}
"&&"											{return AND;}
"||"											{return OR;}
"escreve"                                         {return PRINT;}
"verdadeiro"                                          {return TRUE;}
"falso"                                         {return FALSE;}
"=="											{return EQUALS;}
"!"											    {return NOT;}
"<"											    {return LESS;}
">"											    {return MORE;}
"<="											{return LESS_E;}
">="											{return MORE_E;}
"+"												{return	PLUS;}
"-"												{return MINUS;}
"*"												{return MULT;}
"/"											    {return DIV;}
"%"												{return REST;}
"\\\\"											{return DIV_INT;}
"^"											    {return POW;}


[\'][a-zA-Z][\']                                {yylval.charVal = yytext[1];    return CHARACTER_VALUE;}
[-+]?[0-9]+                                     {yylval.intVal = atoi(yytext);  return INTEGER_VALUE;}
[-+]?[0-9]*\.?[0-9]+                            {yylval.floatVal = atof(yytext); return FLOAT_VALUE;}

[a-zA-Z][_a-zA-Z0-9]*                           {yylval.dataType = strdup(yytext); return IDENTIFIER_VALUE;}


\"(\\.|[^"])*\"                                 {yylval.strVal = strdup(yytext); return STRING_VALUE;}


{linefeed}                                      {yylineno++;}
{whitespace}                                    ;
.                                               {InvalidToken();}


%%

int yywrap(void){
    return 1;
}

void yyerror(char *s) {
    fprintf(stderr, "\nERROR ON LINE %d : \n %s\n", yylineno, s);
    exit(0);
}

void InvalidToken(){
    printf("ERROR ON LINE %d : \n Invalid Token %s\n", yylineno,yytext);
    exit(0);
}
