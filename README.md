# SambaLang

EBNF
```
types = vazio|
        booleano|
        inteiro|
        decimal|
        caracter|
        corda|
        ;

if_se = "se ",condition,
"{", execute, "}",
{"senao ", is_se },
{"senao ","{",execute,"}"};

while_enquanto = "enquanto", condition, 
"{", execute, "}";

condition = exp | exp { ("==",">","<","!=","and","or"), exp };


factor = ("+"|"-"|"!") factor | num | "(", exp, ")" ;
term = factor, {("*"|"/"), factor};
exp = term, {("+"|"-"), term};
num = [0-9],{[0-9]};


id = char, {char} ;
char = ([a-z] | [A-Z] | "_");
typing = (types, id) | (types, set_var) ;
set_var = id, "=", exp;

execute = typing | set_var | if_se | while_enquanto | "return", (execute,"\n") ;

```
