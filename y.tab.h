/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    QUOTES = 258,
    DEFINE = 259,
    SEMI_COLON = 260,
    COMMA = 261,
    PARENTHESIS_OPEN = 262,
    PARENTHESIS_CLOSE = 263,
    CURLY_BRACE_OPEN = 264,
    CURLY_BRACE_CLOSE = 265,
    SQUARE_BRACE_OPEN = 266,
    SQUARE_BRACE_CLOSE = 267,
    DEF = 268,
    RETURN = 269,
    INPUT = 270,
    WHILE = 271,
    IF = 272,
    ELIF = 273,
    ELSE = 274,
    AND = 275,
    OR = 276,
    PRINT = 277,
    TRUE = 278,
    FALSE = 279,
    EQUALS = 280,
    NOT = 281,
    LESS = 282,
    MORE = 283,
    LESS_E = 284,
    MORE_E = 285,
    PLUS = 286,
    MINUS = 287,
    MULT = 288,
    DIV = 289,
    REST = 290,
    DIV_INT = 291,
    POW = 292,
    DATA_TYPE = 293,
    CHARACTER_VALUE = 294,
    INTEGER_VALUE = 295,
    FLOAT_VALUE = 296,
    STRING_VALUE = 297,
    IDENTIFIER_VALUE = 298
  };
#endif
/* Tokens.  */
#define QUOTES 258
#define DEFINE 259
#define SEMI_COLON 260
#define COMMA 261
#define PARENTHESIS_OPEN 262
#define PARENTHESIS_CLOSE 263
#define CURLY_BRACE_OPEN 264
#define CURLY_BRACE_CLOSE 265
#define SQUARE_BRACE_OPEN 266
#define SQUARE_BRACE_CLOSE 267
#define DEF 268
#define RETURN 269
#define INPUT 270
#define WHILE 271
#define IF 272
#define ELIF 273
#define ELSE 274
#define AND 275
#define OR 276
#define PRINT 277
#define TRUE 278
#define FALSE 279
#define EQUALS 280
#define NOT 281
#define LESS 282
#define MORE 283
#define LESS_E 284
#define MORE_E 285
#define PLUS 286
#define MINUS 287
#define MULT 288
#define DIV 289
#define REST 290
#define DIV_INT 291
#define POW 292
#define DATA_TYPE 293
#define CHARACTER_VALUE 294
#define INTEGER_VALUE 295
#define FLOAT_VALUE 296
#define STRING_VALUE 297
#define IDENTIFIER_VALUE 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "samba_syntax.y"

	char* dataType;
	char charVal;
	int intVal;
	float floatVal;
	char* strVal;

#line 151 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
