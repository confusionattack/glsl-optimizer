
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ATTRIBUTE = 258,
     CONST_TOK = 259,
     BOOL_T = 260,
     FLOAT_T = 261,
     INT_T = 262,
     UINT_T = 263,
     BREAK = 264,
     CONTINUE = 265,
     DO = 266,
     ELSE = 267,
     FOR = 268,
     IF = 269,
     DISCARD = 270,
     RETURN = 271,
     SWITCH = 272,
     CASE = 273,
     DEFAULT = 274,
     BVEC2 = 275,
     BVEC3 = 276,
     BVEC4 = 277,
     IVEC2 = 278,
     IVEC3 = 279,
     IVEC4 = 280,
     UVEC2 = 281,
     UVEC3 = 282,
     UVEC4 = 283,
     VEC2 = 284,
     VEC3 = 285,
     VEC4 = 286,
     MAT2_T = 287,
     MAT3 = 288,
     MAT4 = 289,
     CENTROID = 290,
     IN_T = 291,
     OUT_T = 292,
     INOUT = 293,
     UNIFORM = 294,
     VARYING = 295,
     NOPERSPECTIVE = 296,
     FLAT = 297,
     SMOOTH = 298,
     MAT2X2 = 299,
     MAT2X3 = 300,
     MAT2X4 = 301,
     MAT3X2 = 302,
     MAT3X3 = 303,
     MAT3X4 = 304,
     MAT4X2 = 305,
     MAT4X3 = 306,
     MAT4X4 = 307,
     SAMPLER1D = 308,
     SAMPLER2D = 309,
     SAMPLER3D = 310,
     SAMPLERCUBE = 311,
     SAMPLER1DSHADOW = 312,
     SAMPLER2DSHADOW = 313,
     SAMPLERCUBESHADOW = 314,
     SAMPLER1DARRAY = 315,
     SAMPLER2DARRAY = 316,
     SAMPLER1DARRAYSHADOW = 317,
     SAMPLER2DARRAYSHADOW = 318,
     ISAMPLER1D = 319,
     ISAMPLER2D = 320,
     ISAMPLER3D = 321,
     ISAMPLERCUBE = 322,
     ISAMPLER1DARRAY = 323,
     ISAMPLER2DARRAY = 324,
     USAMPLER1D = 325,
     USAMPLER2D = 326,
     USAMPLER3D = 327,
     USAMPLERCUBE = 328,
     USAMPLER1DARRAY = 329,
     USAMPLER2DARRAY = 330,
     STRUCT = 331,
     VOID_T = 332,
     WHILE = 333,
     IDENTIFIER = 334,
     FLOATCONSTANT = 335,
     INTCONSTANT = 336,
     UINTCONSTANT = 337,
     BOOLCONSTANT = 338,
     FIELD_SELECTION = 339,
     LEFT_OP = 340,
     RIGHT_OP = 341,
     INC_OP = 342,
     DEC_OP = 343,
     LE_OP = 344,
     GE_OP = 345,
     EQ_OP = 346,
     NE_OP = 347,
     AND_OP = 348,
     OR_OP = 349,
     XOR_OP = 350,
     MUL_ASSIGN = 351,
     DIV_ASSIGN = 352,
     ADD_ASSIGN = 353,
     MOD_ASSIGN = 354,
     LEFT_ASSIGN = 355,
     RIGHT_ASSIGN = 356,
     AND_ASSIGN = 357,
     XOR_ASSIGN = 358,
     OR_ASSIGN = 359,
     SUB_ASSIGN = 360,
     INVARIANT = 361,
     LOWP = 362,
     MEDIUMP = 363,
     HIGHP = 364,
     PRECISION = 365,
     VERSION = 366,
     EXTENSION = 367,
     LINE = 368,
     PRAGMA = 369,
     COLON = 370,
     EOL = 371,
     INTERFACE = 372,
     OUTPUT = 373,
     LAYOUT_TOK = 374,
     ASM = 375,
     CLASS = 376,
     UNION = 377,
     ENUM = 378,
     TYPEDEF = 379,
     TEMPLATE = 380,
     THIS = 381,
     PACKED = 382,
     GOTO = 383,
     INLINE_TOK = 384,
     NOINLINE = 385,
     VOLATILE = 386,
     PUBLIC_TOK = 387,
     STATIC = 388,
     EXTERN = 389,
     EXTERNAL = 390,
     LONG_T = 391,
     SHORT_T = 392,
     DOUBLE = 393,
     HALF = 394,
     FIXED_T = 395,
     UNSIGNED = 396,
     INPUT_T = 397,
     OUPTUT = 398,
     HVEC2 = 399,
     HVEC3 = 400,
     HVEC4 = 401,
     DVEC2 = 402,
     DVEC3 = 403,
     DVEC4 = 404,
     FVEC2 = 405,
     FVEC3 = 406,
     FVEC4 = 407,
     SAMPLER2DRECT = 408,
     SAMPLER3DRECT = 409,
     SAMPLER2DRECTSHADOW = 410,
     SIZEOF = 411,
     CAST = 412,
     NAMESPACE = 413,
     USING = 414
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 45 "glsl_parser.ypp"

   int n;
   float real;
   char *identifier;

   union {
      struct ast_type_qualifier q;
      unsigned i;
   } type_qualifier;

   struct ast_node *node;
   struct ast_type_specifier *type_specifier;
   struct ast_fully_specified_type *fully_specified_type;
   struct ast_function *function;
   struct ast_parameter_declarator *parameter_declarator;
   struct ast_function_definition *function_definition;
   struct ast_compound_statement *compound_statement;
   struct ast_expression *expression;
   struct ast_declarator_list *declarator_list;
   struct ast_struct_specifier *struct_specifier;
   struct ast_declaration *declaration;

   struct {
      struct ast_node *cond;
      struct ast_expression *rest;
   } for_rest_statement;



/* Line 1676 of yacc.c  */
#line 241 "glsl_parser.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif



#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


