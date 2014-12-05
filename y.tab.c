/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _INT = 258,
     _CHAR = 259,
     _BOOL = 260,
     _DOUBLE = 261,
     _FLOAT = 262,
     _STRING = 263,
     _ID = 264,
     _CTE_INT = 265,
     _CTE_CHAR = 266,
     _CTE_FLOAT = 267,
     _CTE_DOUBLE = 268,
     _CTE_BOOL_V = 269,
     _CTE_BOOL_F = 270,
     _CTE_STRING = 271,
     _ROLA_SE = 272,
     _END_ROLOU = 273,
     _NAO_ROLOU = 274,
     _END_NAO_ROLOU = 275,
     _ENROLANDO = 276,
     _END_ENROLANDO = 277,
     _ENROLA_SE = 278,
     _END_ENROLA_SE = 279,
     _FAZ = 280,
     _END_FAZ_DEPOIS_ENROLA = 281,
     _INVESTIGA = 282,
     _END_INVESTIGA = 283,
     _SUSPEITO = 284,
     _CASO_ENCERRADO = 285,
     _INOCENTE = 286,
     _GRADE = 287,
     _VETOR = 288,
     _CIN = 289,
     _COUT = 290,
     _FUNCAO_MAIN = 291,
     _VOID = 292,
     _PROTOTIPO = 293,
     _REF = 294,
     _ALFA = 295,
     _OMEGA = 296,
     _RETORNA_FUNCAO = 297,
     _INTERVALO = 298,
     _PIPE = 299,
     _FILTER = 300,
     _FOREACH = 301,
     _X = 302,
     _LASTN = 303,
     _FIRSTN = 304,
     _ATRIBUI = 305,
     _SHIFTR = 306,
     _SHIFTL = 307,
     _MENORIGUAL = 308,
     _MAIORIGUAL = 309,
     _DIFERENTE = 310,
     _IGUAL = 311,
     _AND = 312,
     _OR = 313,
     _NOT = 314,
     _MOD = 315
   };
#endif
/* Tokens.  */
#define _INT 258
#define _CHAR 259
#define _BOOL 260
#define _DOUBLE 261
#define _FLOAT 262
#define _STRING 263
#define _ID 264
#define _CTE_INT 265
#define _CTE_CHAR 266
#define _CTE_FLOAT 267
#define _CTE_DOUBLE 268
#define _CTE_BOOL_V 269
#define _CTE_BOOL_F 270
#define _CTE_STRING 271
#define _ROLA_SE 272
#define _END_ROLOU 273
#define _NAO_ROLOU 274
#define _END_NAO_ROLOU 275
#define _ENROLANDO 276
#define _END_ENROLANDO 277
#define _ENROLA_SE 278
#define _END_ENROLA_SE 279
#define _FAZ 280
#define _END_FAZ_DEPOIS_ENROLA 281
#define _INVESTIGA 282
#define _END_INVESTIGA 283
#define _SUSPEITO 284
#define _CASO_ENCERRADO 285
#define _INOCENTE 286
#define _GRADE 287
#define _VETOR 288
#define _CIN 289
#define _COUT 290
#define _FUNCAO_MAIN 291
#define _VOID 292
#define _PROTOTIPO 293
#define _REF 294
#define _ALFA 295
#define _OMEGA 296
#define _RETORNA_FUNCAO 297
#define _INTERVALO 298
#define _PIPE 299
#define _FILTER 300
#define _FOREACH 301
#define _X 302
#define _LASTN 303
#define _FIRSTN 304
#define _ATRIBUI 305
#define _SHIFTR 306
#define _SHIFTL 307
#define _MENORIGUAL 308
#define _MAIORIGUAL 309
#define _DIFERENTE 310
#define _IGUAL 311
#define _AND 312
#define _OR 313
#define _NOT 314
#define _MOD 315




/* Copy the first part of user declarations.  */
#line 1 "trabalho.y"

/*
 TRABALHO DE COMPILADORES - 2014/2 - PROFESSOR ZIMBRÃO

 Grupo: Felipe Lohnefink               DRE: 110027665
        Jonathan Rangel Porto          DRE: 110196757
        Leonardo Neves                 DRE: 110155777
*/
 
 
#include <cstring>
#include <string>
#include <iostream>
#include <map>

using namespace std;

#define TAM_MAX_OPERADORES 256
#define TAM_MAX_VARS 1024
#define TAM_MAX_PARAMS 1024
#define TAM_MAX_FUNCOES 1024


const int MAX_STR = 256;

struct Tipo {
  string nome;

  string tipo_base;
  int ndim;
  int tam_dim[2];

  Tipo() {}
  Tipo( string nome ) {
    this->nome = nome;
  }
};
struct Atributo {
  string v; 
  Tipo   t;  
  string c;  
  string p;  

  Atributo() {} 
  Atributo( string v, string t = "", string c = "", string p = "") { //!!!
    this->v = v;
    this->t.nome = t;
    this->c = c;
    this->p = p; //!!!!
  }
};


typedef struct _TIPO_OPER
{
  string operador, op1, op2, resultado;
} TIPO_OPER;

typedef struct _SIMBOLO_VAR
{
  string nome;
  Tipo t;
} SIMBOLO_VAR;

typedef struct _PARAM
{
  string nome;
  Tipo t;
} PARAM;

typedef struct _SIMBOLO_FUNCAO
{
  string nome;
  Tipo retorno;
  int nparam;
  PARAM parametro[TAM_MAX_PARAMS];
  string lista_parametros;
} SIMBOLO_FUNCAO;

struct _NTEMP
{
  int i, r, c, s, b, d; //int, real, char, string, boolean, double
} NTEMP = {0, 0, 0, 0, 0, 0};

struct _NTEMP_GLOBAL
{
  int i, r, c, s, b, d; //int, real, char, string, boolean, double
} NTEMP_GLOBAL = {0, 0, 0, 0, 0, 0};




/* Operacoes*/
TIPO_OPER tipo_operador[TAM_MAX_OPERADORES] = {
            {"+", "I", "I", "I"},
            {"+", "I", "R", "R"},
            {"+", "R", "R", "R"},
            {"+", "R", "I", "R"},
            {"+", "C", "C", "S"},
            {"+", "S", "C", "S"},
            {"+", "S", "S", "S"},
            {"+", "C", "I", "C"},
            {"-", "I", "I", "I"},
            {"-", "I", "R", "R"},
            {"-", "R", "R", "R"},
            {"-", "R", "I", "R"},
            {"*", "I", "I", "I"},
            {"*", "I", "R", "R"},
            {"*", "R", "I", "R"},
            {"*", "R", "R", "R"},
            {"/", "I", "I", "I"},
            {"/", "I", "R", "R"},
            {"/", "R", "I", "R"},
            {"/", "R", "R", "R"},
            {"==", "I", "I", "B"},
            {"==", "I", "R", "B"},
            {"==", "R", "I", "B"},
            {"==", "R", "R", "B"},
            {"==", "C", "C", "B"},
            {"==", "C", "S", "B"},
            {"==", "S", "C", "B"},
            {"==", "S", "S", "B"},
            {"==", "S", "S", "B"},
            {"<>", "I", "I", "B"},
            {"<>", "I", "R", "B"},
            {"<>", "R", "I", "B"},
            {"<>", "R", "R", "B"},
            {"<>", "C", "C", "B"},
            {"<>", "C", "S", "B"},
            {"<>", "S", "C", "B"},
            {"<>", "S", "S", "B"},
            {"<>", "S", "S", "B"},
            {">", "I", "I", "B"},
            {">", "I", "R", "B"},
            {">", "R", "I", "B"},
            {">", "R", "R", "B"},
            {">", "C", "C", "B"},
            {">", "C", "S", "B"},
            {">", "S", "C", "B"},
            {">", "S", "S", "B"},
            {">", "S", "S", "B"},
            {"<", "I", "I", "B"},
            {"<", "I", "R", "B"},
            {"<", "R", "I", "B"},
            {"<", "R", "R", "B"},
            {"<", "C", "C", "B"},
            {"<", "C", "S", "B"},
            {"<", "S", "C", "B"},
            {"<", "S", "S", "B"},
            {"<", "S", "S", "B"},
            {">=", "I", "I", "B"},
            {">=", "I", "R", "B"},
            {">=", "R", "I", "B"},
            {">=", "R", "R", "B"},
            {">=", "C", "C", "B"},
            {">=", "C", "S", "B"},
            {">=", "S", "C", "B"},
            {">=", "S", "S", "B"},
            {">=", "S", "S", "B"},
            {"<=", "I", "I", "B"},
            {"<=", "I", "R", "B"},
            {"<=", "R", "I", "B"},
            {"<=", "R", "R", "B"},
            {"<=", "C", "C", "B"},
            {"<=", "C", "S", "B"},
            {"<=", "S", "C", "B"},
            {"<=", "S", "S", "B"},
            {"<=", "S", "S", "B"},
            {"<-", "I", "I", "I"},
            {"<-", "R", "I", "R"},
            {"<-", "R", "R", "R"},
            {"<-", "C", "C", "C"},
            {"<-", "S", "C", "S"},
            {"<-", "S", "S", "S"},
            {"<-", "B", "B", "B"},
            {"OU", "B", "B", "B"},
            {"OU", "B", "I", "B"},
            {"OU", "I", "I", "B"},
            {"OU", "B", "C", "B"},
            {"OU", "C", "C", "B"},
            {"OU", "B", "R", "B"},
            {"OU", "R", "R", "B"},
            {"OU", "I", "B", "B"},
            {"OU", "C", "B", "B"},
            {"OU", "R", "B", "B"},
            {"E", "B", "B", "B"},
            {"E", "B", "I", "B"},
            {"E", "I", "I", "B"},
            {"E", "B", "C", "B"},
            {"E", "C", "C", "B"},
            {"E", "B", "R", "B"},
            {"E", "R", "R", "B"},
            {"E", "I", "B", "B"},
            {"E", "C", "B", "B"},
            {"E", "R", "B", "B"},
            {"+", "I", "D", "D"},
            {"+", "D", "D", "D"},
            {"+", "D", "I", "D"},
            {"-", "I", "D", "D"},
            {"-", "D", "D", "D"},
            {"-", "D", "I", "D"},
            {"*", "I", "D", "D"},
            {"*", "D", "I", "D"},
            {"*", "D", "D", "D"},
            {"*", "I", "D", "D"},
            {"*", "D", "I", "D"},
            {"*", "D", "D", "D"},
            {"*", "I", "D", "D"},
            {"*", "D", "I", "D"},
            {"*", "D", "D", "D"},
            {"==", "D", "I", "B"},
            {"==", "D", "D", "B"},
            {"<>", "I", "D", "B"},
            {"<>", "D", "I", "B"},
            {"<>", "D", "D", "B"},
            {">", "I", "D", "B"},
            {">", "D", "I", "B"},
            {">", "D", "D", "B"},
            {"<", "I", "D", "B"},
            {"<", "D", "I", "B"},
            {"<", "D", "D", "B"},
            {">=", "I", "D", "B"},
            {">=", "D", "I", "B"},
            {">=", "D", "D", "B"},
            {"<=", "I", "D", "B"},
            {"<=", "D", "I", "B"},
            {"<=", "D", "D", "B"},
            {"<-", "D", "I", "D"},
            {"<-", "D", "D", "D"},
            {"OU", "B", "D", "B"},
            {"OU", "D", "D", "B"},
            {"OU", "D", "B", "B"},
            {"E", "B", "D", "B"},
            {"E", "D", "D", "B"},
            {"E", "B", "D", "B"},
            {"E", "D", "D", "B"},
            {"+", "R", "D", "D"},
            {"+", "D", "R", "D"},
            {"-", "R", "D", "D"},
            {"-", "D", "R", "D"},
            {"*", "R", "D", "D"},
            {"*", "D", "R", "D"},
            {"/", "R", "D", "D"},
            {"/", "D", "R", "D"},
            {"==", "R", "D", "D"},
            {"==", "D", "R", "D"},
            {"<>", "R", "D", "D"},
            {"<>", "D", "R", "D"},
            {">", "R", "D", "D"},
            {">", "D", "R", "D"},
            {"<", "R", "D", "D"},
            {"<", "D", "R", "D"},
            {">=", "R", "D", "D"},
            {">=", "D", "R", "D"},
            {"<=", "R", "D", "D"},
            {"<=", "D", "R", "D"},
            {"<-", "R", "D", "D"},
            {"<-", "D", "R", "D"},
            {"OU", "R", "D", "D"},
            {"OU", "D", "R", "D"},
            {"E", "R", "D", "D"},
            {"E", "D", "R", "D"},
            {"%", "I", "I", "I"}
            };


SIMBOLO_VAR TS_varlocal[TAM_MAX_VARS];
SIMBOLO_VAR TS_varglobal[TAM_MAX_VARS];
SIMBOLO_FUNCAO TS_funcao[TAM_MAX_FUNCOES];

int nrotulos = 0;
int nvarlocal = 0;
int nvarglobal = 0;
int nfuncao = 0;
int ir = 0;
int nparams = 0;

//Objetos para o switch
string id_switch;
string fim_switch;


string Codigo_para_Var;
string pipeAtivo;
string RotuloFimPipe; 
string lastpipe;

//funcoes
void yyerror(const char*);
int yylex();
int yyparse();
void erro(string msg);

void tipo_resultado(string operador, Atributo op1, Atributo op2, Atributo &resultado);
void gera_codigo_operador(Atributo &ss, Atributo &s1, Atributo &s2, Atributo &s3);
void insere_varglobal (string nome, Tipo t);
void insere_varlocal (string nome, Tipo t);
void inclui_funcao(string nome, Tipo retorno, string lista_parametros);
void inclui_parametro(string nome, Tipo t);
void geraCodigoFilter( Atributo* SS, const Atributo& condicao ) ;
void geraCodigoFirstN(Atributo* SS, const Atributo& condicao);
void geraCodigoLastN(Atributo* SS, const Atributo& condicao);
void geraCodigoFor( Atributo* SS, const Atributo& inicial,const Atributo& condicao,const Atributo& passo,const Atributo& cmds );
bool busca_variavelglobal (string nome, Tipo *t);
bool pode_inserir_varglobal (string nome);
bool busca_varlocal (string nome, Tipo *t);
bool busca_varparametro(string nome, Tipo *t);
bool pode_inserir_varlocal (string nome);
bool existe_funcao(string nome);
bool existe_parametro(string nome);
bool busca_funcao(string nome, Tipo *tr);
bool compara_parametros(string nome, string parametros);
bool compara_resultado(string resultado);
string toStr( int n );
string inteiro_string(int n);
string gera_temp(string tipo);
string gera_rotulo();
string gera_decl_temp(string tipo, string tipo_base, int &n);
string gera_varglobal_temp();
string gera_variavellocal_temp();
string parte_vetor(Tipo t);
string quebra_codigo_lista(string vetorid, string lsttemp , string lstcodtemp);
string quebra_codigo_parametro(string nometemp, string vetorid, string lsttemp, string lstcodtemp, string tiporet);
string DeclaraVarPipes();

#define YYSTYPE Atributo



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 555 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   648

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNRULES -- Number of states.  */
#define YYNSTATES  261

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      68,    69,    65,    63,    70,    64,     2,    66,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    71,    67,
      61,     2,    62,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    72,     2,    74,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    73,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,    10,    13,    18,    22,    23,    30,
      31,    33,    34,    38,    40,    43,    47,    48,    54,    59,
      63,    69,    70,    74,    75,    81,    86,    89,    90,    97,
      99,   101,   107,   111,   114,   115,   118,   120,   122,   124,
     126,   129,   132,   134,   136,   138,   141,   146,   151,   152,
     155,   158,   162,   163,   167,   171,   179,   188,   200,   208,
     219,   228,   230,   233,   235,   243,   250,   259,   261,   265,
     267,   272,   277,   282,   287,   289,   290,   294,   296,   300,
     304,   306,   310,   314,   318,   322,   326,   330,   332,   336,
     340,   342,   346,   350,   354,   356,   359,   361,   363,   367,
     372,   377,   384,   388,   390,   392,   394,   396,   398,   400,
     402,   404,   408,   410,   412,   414,   416,   418,   420
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      76,     0,    -1,    77,    -1,    80,    85,    78,    90,    -1,
      36,    79,    -1,    40,    88,    94,    41,    -1,    80,    81,
      67,    -1,    -1,    38,    92,     9,    68,    82,    69,    -1,
      -1,    83,    -1,    -1,    83,    70,    84,    -1,    84,    -1,
     124,     9,    -1,    86,    67,    85,    -1,    -1,    86,    70,
       9,    87,    96,    -1,   124,     9,    87,    96,    -1,    68,
      10,    69,    -1,    68,    10,    70,    10,    69,    -1,    -1,
      89,    67,    88,    -1,    -1,    89,    70,     9,    87,    96,
      -1,   124,     9,    87,    96,    -1,    90,    91,    -1,    -1,
      92,     9,    68,    82,    69,    79,    -1,   124,    -1,    37,
      -1,    93,    70,    68,   123,    69,    -1,    68,   123,    69,
      -1,    94,    95,    -1,    -1,   115,    67,    -1,   103,    -1,
     101,    -1,   104,    -1,   100,    -1,    97,    67,    -1,    98,
      67,    -1,   102,    -1,   105,    -1,   110,    -1,    50,   116,
      -1,    50,    68,   123,    69,    -1,    50,    68,    93,    69,
      -1,    -1,    34,   122,    -1,    35,    99,    -1,    99,    52,
     116,    -1,    -1,    42,   116,    67,    -1,    42,    37,    67,
      -1,    23,    68,   116,    69,    88,    94,    24,    -1,    25,
      88,    94,    23,    68,   116,    69,    67,    -1,    21,    68,
       9,    50,    10,    67,   116,    69,    88,    94,    22,    -1,
      17,    68,   116,    69,    88,    94,    18,    -1,    17,    68,
     116,    69,    88,    94,    19,    88,    94,    20,    -1,    27,
      68,   106,    69,    40,   107,   109,    41,    -1,     9,    -1,
     107,   108,    -1,   108,    -1,    29,    10,    71,    88,    94,
      30,    67,    -1,    31,    71,    88,    94,    30,    67,    -1,
      43,    72,   116,    73,   111,    74,   112,   114,    -1,   116,
      -1,    44,   113,   112,    -1,    44,    -1,    45,    72,   116,
      74,    -1,    49,    72,   116,    74,    -1,    48,    72,   116,
      74,    -1,    46,    72,    94,    74,    -1,   116,    -1,    -1,
     116,    50,   117,    -1,   117,    -1,   117,    58,   118,    -1,
     117,    57,   118,    -1,   118,    -1,   118,    62,   119,    -1,
     118,    61,   119,    -1,   118,    54,   119,    -1,   118,    53,
     119,    -1,   118,    56,   119,    -1,   118,    55,   119,    -1,
     119,    -1,   119,    63,   120,    -1,   119,    64,   120,    -1,
     120,    -1,   120,    65,   121,    -1,   120,    66,   121,    -1,
     120,    60,   121,    -1,   122,    -1,    59,   122,    -1,   122,
      -1,     9,    -1,     9,    68,    69,    -1,     9,    68,   123,
      69,    -1,     9,    68,   116,    69,    -1,     9,    68,   116,
      70,   116,    69,    -1,    68,   116,    69,    -1,    10,    -1,
      12,    -1,    13,    -1,    14,    -1,    15,    -1,    11,    -1,
      16,    -1,    47,    -1,   123,    70,   116,    -1,   116,    -1,
       3,    -1,     7,    -1,     6,    -1,     5,    -1,     4,    -1,
       8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   386,   386,   392,   396,   405,   411,   412,   415,   450,
     453,   454,   457,   458,   461,   471,   472,   478,   487,   499,
     501,   504,   509,   510,   512,   526,   557,   558,   561,   602,
     603,   606,   607,   610,   611,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   627,   628,   629,   630,   633,
     638,   642,   646,   649,   654,   658,   683,   700,   718,   733,
     757,   773,   781,   782,   785,   801,   814,   829,   838,   840,
     844,   845,   846,   849,   857,   858,   861,   862,   865,   866,
     867,   870,   871,   872,   873,   874,   875,   876,   879,   880,
     881,   884,   885,   886,   887,   890,   891,   894,   902,   910,
     929,   958,   996,  1002,  1003,  1004,  1005,  1006,  1007,  1008,
    1009,  1018,  1024,  1035,  1036,  1037,  1038,  1039,  1040
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_INT", "_CHAR", "_BOOL", "_DOUBLE",
  "_FLOAT", "_STRING", "_ID", "_CTE_INT", "_CTE_CHAR", "_CTE_FLOAT",
  "_CTE_DOUBLE", "_CTE_BOOL_V", "_CTE_BOOL_F", "_CTE_STRING", "_ROLA_SE",
  "_END_ROLOU", "_NAO_ROLOU", "_END_NAO_ROLOU", "_ENROLANDO",
  "_END_ENROLANDO", "_ENROLA_SE", "_END_ENROLA_SE", "_FAZ",
  "_END_FAZ_DEPOIS_ENROLA", "_INVESTIGA", "_END_INVESTIGA", "_SUSPEITO",
  "_CASO_ENCERRADO", "_INOCENTE", "_GRADE", "_VETOR", "_CIN", "_COUT",
  "_FUNCAO_MAIN", "_VOID", "_PROTOTIPO", "_REF", "_ALFA", "_OMEGA",
  "_RETORNA_FUNCAO", "_INTERVALO", "_PIPE", "_FILTER", "_FOREACH", "_X",
  "_LASTN", "_FIRSTN", "_ATRIBUI", "_SHIFTR", "_SHIFTL", "_MENORIGUAL",
  "_MAIORIGUAL", "_DIFERENTE", "_IGUAL", "_AND", "_OR", "_NOT", "_MOD",
  "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "';'", "'('", "')'", "','",
  "':'", "'['", "'~'", "']'", "$accept", "SL", "S", "BLOCO_PRINCIPAL",
  "BLOCO", "PROTOTIPO_FUNCOES", "PROTOTIPO", "PARAMETROS",
  "LISTAPARAMETROS", "PARAMETRO", "VARIAVEIS_GLOBAIS", "DECLVARG", "ARRAY",
  "VARS_LOCAIS", "DECLVARL", "FUNCTIONS", "FUNCTION", "RETORNO",
  "LST_LST_E", "CMDS", "CMD", "CMD_ATRIBUICAO", "CMD_IN", "CMD_OUT",
  "COUT_EXPR", "CMD_RETURN", "CMD_WHILE", "CMD_DO_WHILE", "CMD_FOR",
  "CMD_IF", "CMD_SWITCH", "ID_LABEL", "CASES", "CASE", "DEFAULT",
  "CMD_PIPE", "INI_PIPE", "PROCS", "PROC", "CONSOME", "CMD_E", "E", "E1",
  "E2", "E3", "E4", "E5", "F", "LST_E", "TIPO", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    60,    62,    43,    45,    42,    47,    59,    40,    41,
      44,    58,    91,   126,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    77,    78,    79,    80,    80,    81,    81,
      82,    82,    83,    83,    84,    85,    85,    86,    86,    87,
      87,    87,    88,    88,    89,    89,    90,    90,    91,    92,
      92,    93,    93,    94,    94,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    96,    96,    96,    96,    97,
      98,    99,    99,   100,   100,   101,   102,   103,   104,   104,
     105,   106,   107,   107,   108,   109,   110,   111,   112,   112,
     113,   113,   113,   114,   115,   115,   116,   116,   117,   117,
     117,   118,   118,   118,   118,   118,   118,   118,   119,   119,
     119,   120,   120,   120,   120,   121,   121,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   123,   123,   124,   124,   124,   124,   124,   124
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     4,     2,     4,     3,     0,     6,     0,
       1,     0,     3,     1,     2,     3,     0,     5,     4,     3,
       5,     0,     3,     0,     5,     4,     2,     0,     6,     1,
       1,     5,     3,     2,     0,     2,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     2,     4,     4,     0,     2,
       2,     3,     0,     3,     3,     7,     8,    11,     7,    10,
       8,     1,     2,     1,     7,     6,     8,     1,     3,     1,
       4,     4,     4,     4,     1,     0,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     2,     1,     1,     3,     4,
       4,     6,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     2,     9,     1,   113,   117,   116,   115,   114,
     118,     0,     0,     0,     0,     0,    30,     0,    29,     6,
       0,    27,    16,     0,    21,     0,    23,     4,     3,    15,
      21,     0,    48,    11,    34,     0,     0,    26,     0,    48,
       0,     0,    18,     0,    10,    13,     0,    75,    23,     0,
      21,     0,    17,    19,     0,    97,   103,   108,   104,   105,
     106,   107,   109,   110,     0,    45,    77,    80,    87,    90,
      94,     8,     0,    14,     0,     0,     0,    23,     0,     0,
      52,     5,     0,     0,     0,    33,     0,     0,    39,    37,
      42,    36,    38,    43,    44,     0,    74,    22,    21,    48,
      11,     0,     0,     0,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,     0,     0,     0,    34,     0,    49,    50,     0,
       0,     0,     0,    40,    41,    35,    48,    25,     0,    20,
      98,     0,     0,     0,    47,     0,   102,    46,     0,    76,
      79,    78,    84,    83,    86,    85,    82,    81,    88,    89,
       0,    93,    96,    91,    92,     0,     0,     0,    75,    61,
       0,     0,    54,    53,     0,    24,     0,   100,     0,    99,
      32,     0,   111,    95,    23,     0,    23,     0,     0,    51,
       0,    28,     0,   112,     0,    34,     0,    34,     0,     0,
       0,    67,   101,    31,    75,     0,    75,     0,     0,     0,
      63,     0,    58,    23,     0,    55,    23,     0,     0,    62,
       0,    69,     0,    34,    23,    56,    23,    23,    60,     0,
       0,     0,     0,     0,    66,    75,    34,    34,    34,     0,
       0,     0,    68,    34,    59,    75,    75,    75,     0,     0,
       0,    75,    57,     0,     0,    70,    72,    71,    73,    64,
      65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    21,    27,     3,    12,    43,    44,    45,
      13,    14,    32,   197,    35,    28,    37,    17,   104,    47,
      85,    42,    86,    87,   128,    88,    89,    90,    91,    92,
      93,   170,   209,   210,   220,    94,   200,   222,   232,   234,
      95,    96,    66,    67,    68,    69,   161,    70,   106,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -125
static const yytype_int16 yypact[] =
{
    -125,    39,  -125,    52,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,   101,   -13,    26,    -6,    66,  -125,    92,  -125,  -125,
      42,  -125,   159,    94,    68,    72,   159,  -125,   101,  -125,
      68,   100,    70,   159,  -125,    14,   123,  -125,   136,    70,
       0,   541,  -125,    83,    90,  -125,   170,   238,   159,   176,
      68,   126,  -125,  -125,   185,   128,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,   558,   147,    35,    95,    32,   -28,
    -125,  -125,   159,  -125,   131,   137,   138,   159,   151,   580,
    -125,  -125,   511,   149,   580,  -125,   156,   158,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,   163,   147,  -125,    68,    70,
     159,   162,   160,   580,    28,   -29,    46,   580,   580,   580,
     580,   580,   580,   580,   580,   580,   580,   580,   519,   519,
     519,  -125,   580,   218,   580,  -125,   223,  -125,   183,   169,
     -39,   580,   -29,  -125,  -125,  -125,    70,  -125,   168,  -125,
    -125,   -44,    48,    61,  -125,   171,  -125,  -125,   580,    35,
      95,    95,    32,    32,    32,    32,    32,    32,   -28,   -28,
     580,  -125,  -125,  -125,  -125,   -19,   188,   -17,   472,  -125,
     174,   580,  -125,  -125,   -27,  -125,    42,  -125,   580,  -125,
    -125,   580,   147,  -125,   159,   230,   159,   177,   204,   147,
     580,  -125,    -2,   147,    73,  -125,   189,  -125,   580,   228,
     184,   147,  -125,  -125,   199,   580,   277,    -1,   250,    60,
    -125,   220,  -125,   159,     3,  -125,    11,   191,   195,  -125,
     227,    31,   224,  -125,   159,  -125,   159,   159,  -125,   197,
     202,   203,   220,   205,  -125,   316,  -125,  -125,  -125,   580,
     580,   580,  -125,  -125,  -125,   355,   394,   433,   -40,   -38,
     -30,   112,  -125,   209,   211,  -125,  -125,  -125,  -125,  -125,
    -125
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,  -125,  -125,   106,  -125,  -125,   196,  -125,   212,
     249,  -125,   -21,   -26,  -125,  -125,  -125,   255,  -125,  -124,
    -125,   -36,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,    86,  -125,  -125,  -125,    67,  -125,  -125,
    -125,   -37,   190,    69,    78,    65,    64,   -77,   -95,     2
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -17
static const yytype_int16 yytable[] =
{
      34,   168,   127,    52,    65,    15,   107,   142,   143,    39,
     107,   107,   107,    18,     5,     6,     7,     8,     9,    10,
     107,   107,    97,   107,    15,   177,   178,   105,   173,    99,
      18,   107,   118,   107,   255,    46,   256,   119,   120,     4,
     146,   162,   162,   162,   257,   130,   190,   132,   107,   107,
     184,   125,   186,   107,    19,     5,     6,     7,     8,     9,
      10,    22,    20,   137,    23,   141,   105,   202,   216,    53,
      54,   204,   224,   206,    46,    24,   229,   136,   225,   230,
     231,    48,    26,   183,    49,   165,   194,   167,   -16,   208,
      11,   218,   108,   109,   174,   116,   117,   144,   145,   235,
     175,    25,    46,    30,     5,     6,     7,     8,     9,    10,
      40,   182,   245,   246,   247,   147,   148,   179,   148,   251,
      41,    55,    56,    57,    58,    59,    60,    61,    62,    74,
     180,   148,    50,    75,   189,    76,    31,    77,    16,    78,
      33,   192,   203,   148,   193,    51,    79,    80,   110,   111,
     112,   113,    71,   201,    82,    83,   114,   115,   195,    63,
      72,   207,     5,     6,     7,     8,     9,    10,   214,    55,
      56,    57,    58,    59,    60,    61,    62,   150,   151,    73,
      84,   158,   159,   163,   164,    98,   258,   223,   152,   153,
     154,   155,   156,   157,   100,   101,   102,   107,   236,   122,
     237,   238,   248,   249,   250,   123,   124,    63,    55,    56,
      57,    58,    59,    60,    61,    62,    74,   212,   213,   126,
      75,   131,    76,   133,    77,   134,    78,   166,    84,   140,
     135,   139,   169,    79,    80,   171,   172,   176,   185,   181,
     196,    82,    83,   188,   199,   198,    63,    55,    56,    57,
      58,    59,    60,    61,    62,    74,   205,   208,   211,    75,
     217,    76,   226,    77,   221,    78,   227,    84,   228,   239,
     233,    29,    79,    80,   240,   241,   259,   243,   260,    81,
      82,    83,   191,    38,   121,    63,    55,    56,    57,    58,
      59,    60,    61,    62,    74,   219,   138,   149,    75,   242,
      76,   215,    77,     0,    78,     0,    84,     0,     0,     0,
       0,    79,    80,     0,     0,     0,     0,     0,     0,    82,
      83,     0,     0,     0,    63,    55,    56,    57,    58,    59,
      60,    61,    62,    74,     0,     0,   244,    75,     0,    76,
       0,    77,     0,    78,     0,    84,     0,     0,     0,     0,
      79,    80,     0,     0,     0,     0,     0,     0,    82,    83,
       0,     0,     0,    63,    55,    56,    57,    58,    59,    60,
      61,    62,    74,     0,     0,     0,    75,   252,    76,     0,
      77,     0,    78,     0,    84,     0,     0,     0,     0,    79,
      80,     0,     0,     0,     0,     0,     0,    82,    83,     0,
       0,     0,    63,    55,    56,    57,    58,    59,    60,    61,
      62,    74,     0,     0,     0,    75,     0,    76,     0,    77,
       0,    78,     0,    84,   253,     0,     0,     0,    79,    80,
       0,     0,     0,     0,     0,     0,    82,    83,     0,     0,
       0,    63,    55,    56,    57,    58,    59,    60,    61,    62,
      74,     0,     0,     0,    75,     0,    76,     0,    77,     0,
      78,     0,    84,   254,     0,     0,     0,    79,    80,     0,
       0,     0,     0,     0,     0,    82,    83,     0,     0,     0,
      63,    55,    56,    57,    58,    59,    60,    61,    62,    74,
       0,     0,     0,    75,     0,   187,     0,    77,     0,    78,
       0,    84,     0,     0,     0,     0,    79,    80,     0,     0,
       0,     0,     0,     0,    82,    83,     0,     0,     0,    63,
      55,    56,    57,    58,    59,    60,    61,    62,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,   129,     0,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     0,
       0,     0,     0,     0,     0,     0,    63,    55,    56,    57,
      58,    59,    60,    61,    62,     0,     0,     0,   160,    84,
       0,     0,     0,     0,     0,     0,     0,    84,    63,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,    63,     0,     0,     0,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   103,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84
};

static const yytype_int16 yycheck[] =
{
      26,   125,    79,    39,    41,     3,    50,   102,   103,    30,
      50,    50,    50,    11,     3,     4,     5,     6,     7,     8,
      50,    50,    48,    50,    22,    69,    70,    64,    67,    50,
      28,    50,    60,    50,    74,    33,    74,    65,    66,     0,
      69,   118,   119,   120,    74,    82,    73,    84,    50,    50,
      69,    77,    69,    50,    67,     3,     4,     5,     6,     7,
       8,    67,    36,    99,    70,   102,   103,    69,    69,    69,
      70,   195,    69,   197,    72,     9,    45,    98,    67,    48,
      49,    67,    40,   160,    70,   122,   181,   124,    36,    29,
      38,    31,    57,    58,   131,    63,    64,    69,    70,   223,
     136,     9,   100,     9,     3,     4,     5,     6,     7,     8,
      10,   148,   236,   237,   238,    69,    70,    69,    70,   243,
      50,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      69,    70,     9,    21,   171,    23,    68,    25,    37,    27,
      68,   178,    69,    70,   181,     9,    34,    35,    53,    54,
      55,    56,    69,   190,    42,    43,    61,    62,   184,    47,
      70,   198,     3,     4,     5,     6,     7,     8,   205,     9,
      10,    11,    12,    13,    14,    15,    16,   108,   109,     9,
      68,   116,   117,   119,   120,     9,    74,   213,   110,   111,
     112,   113,   114,   115,    68,    10,    68,    50,   224,    68,
     226,   227,   239,   240,   241,    68,    68,    47,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    68,
      21,    72,    23,    67,    25,    67,    27,     9,    68,    69,
      67,    69,     9,    34,    35,    52,    67,    69,    50,    68,
      10,    42,    43,    69,    40,    68,    47,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    67,    29,    74,    21,
      10,    23,    71,    25,    44,    27,    71,    68,    41,    72,
      46,    22,    34,    35,    72,    72,    67,    72,    67,    41,
      42,    43,   176,    28,    72,    47,     9,    10,    11,    12,
      13,    14,    15,    16,    17,   209,   100,   107,    21,   232,
      23,    24,    25,    -1,    27,    -1,    68,    -1,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    47,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    -1,    27,    -1,    68,    -1,    -1,    -1,    -1,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    47,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    21,    22,    23,    -1,
      25,    -1,    27,    -1,    68,    -1,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    47,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    -1,    68,    30,    -1,    -1,    -1,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    47,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    21,    -1,    23,    -1,    25,    -1,
      27,    -1,    68,    30,    -1,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      47,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    -1,    -1,    21,    -1,    23,    -1,    25,    -1,    27,
      -1,    68,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    47,
       9,    10,    11,    12,    13,    14,    15,    16,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    59,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    47,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    76,    77,    80,     0,     3,     4,     5,     6,     7,
       8,    38,    81,    85,    86,   124,    37,    92,   124,    67,
      36,    78,    67,    70,     9,     9,    40,    79,    90,    85,
       9,    68,    87,    68,    88,    89,   124,    91,    92,    87,
      10,    50,    96,    82,    83,    84,   124,    94,    67,    70,
       9,     9,    96,    69,    70,     9,    10,    11,    12,    13,
      14,    15,    16,    47,    68,   116,   117,   118,   119,   120,
     122,    69,    70,     9,    17,    21,    23,    25,    27,    34,
      35,    41,    42,    43,    68,    95,    97,    98,   100,   101,
     102,   103,   104,   105,   110,   115,   116,    88,     9,    87,
      68,    10,    68,    68,    93,   116,   123,    50,    57,    58,
      53,    54,    55,    56,    61,    62,    63,    64,    60,    65,
      66,    84,    68,    68,    68,    88,    68,   122,    99,    37,
     116,    72,   116,    67,    67,    67,    87,    96,    82,    69,
      69,   116,   123,   123,    69,    70,    69,    69,    70,   117,
     118,   118,   119,   119,   119,   119,   119,   119,   120,   120,
      59,   121,   122,   121,   121,   116,     9,   116,    94,     9,
     106,    52,    67,    67,   116,    96,    69,    69,    70,    69,
      69,    68,   116,   122,    69,    50,    69,    23,    69,   116,
      73,    79,   116,   116,   123,    88,    10,    88,    68,    40,
     111,   116,    69,    69,    94,    67,    94,   116,    29,   107,
     108,    74,    18,    19,   116,    24,    69,    10,    31,   108,
     109,    44,   112,    88,    69,    67,    71,    71,    41,    45,
      48,    49,   113,    46,   114,    94,    88,    88,    88,    72,
      72,    72,   112,    72,    20,    94,    94,    94,   116,   116,
     116,    94,    22,    30,    30,    74,    74,    74,    74,    67,
      67
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 387 "trabalho.y"
    {
      cout << "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n//#include <cstring>\n#include <string>\n#include <iostream>\n\nusing namespace std;\n\n" +  (yyvsp[(1) - (1)]).c << endl;
    }
    break;

  case 3:
#line 392 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (4)]).c + (yyvsp[(2) - (4)]).c + (yyvsp[(3) - (4)]).c + (yyvsp[(4) - (4)]).c;   }
    break;

  case 4:
#line 396 "trabalho.y"
    { 
											(yyval).c = "";
											(yyval).c += "int main ()\n"; 
											(yyval).c += (yyvsp[(2) - (2)]).c; 
										}
    break;

  case 5:
#line 406 "trabalho.y"
    { (yyval).c = "{\n\n "  +DeclaraVarPipes()+ gera_variavellocal_temp() +  (yyvsp[(3) - (4)]).c + "\n\n return 0; \n}\n"; }
    break;

  case 6:
#line 411 "trabalho.y"
    { (yyval).c += (yyvsp[(2) - (3)]).c; }
    break;

  case 7:
#line 412 "trabalho.y"
    { (yyval).c = ""; }
    break;

  case 8:
#line 416 "trabalho.y"
    {
        string aux;
        if (nparams >= 1)
        {
          if ((yyvsp[(2) - (6)]).v == "nada")
          {
            aux = "";
            (yyval).c = "void " + (yyvsp[(3) - (6)]).v + "(" + (yyvsp[(5) - (6)]).c + ");\n";
          }
          else
          {
            aux = " &RI";
            (yyval).c = "void " + (yyvsp[(3) - (6)]).v + "(" + (yyvsp[(5) - (6)]).c + "," + (yyvsp[(2) - (6)]).c + aux + ");\n";
          }
          ir = ir + 1;
        }
        else
        {
          if((yyvsp[(2) - (6)]).v == "nada")
          {
            (yyval).c = "void " + (yyvsp[(3) - (6)]).v + "();\n";
          }
          else
          {
            aux = " &RI";
            (yyval).c = "void " + (yyvsp[(3) - (6)]).v + "(" + (yyvsp[(2) - (6)]).c + aux  + ");\n";
          }
          ir = ir + 1;
        }

        inclui_funcao((yyvsp[(3) - (6)]).v,(yyvsp[(2) - (6)]).t, (yyvsp[(5) - (6)]).p);
        nfuncao++;
        nparams = 0;
      }
    break;

  case 9:
#line 450 "trabalho.y"
    { }
    break;

  case 11:
#line 454 "trabalho.y"
    { (yyval).p = ""; }
    break;

  case 12:
#line 457 "trabalho.y"
    { (yyval).p += "#" + (yyvsp[(3) - (3)]).t.tipo_base; (yyval).c = (yyval).c + "," + (yyvsp[(3) - (3)]).c; }
    break;

  case 13:
#line 458 "trabalho.y"
    { (yyval).p = "#" + (yyvsp[(1) - (1)]).t.tipo_base; }
    break;

  case 14:
#line 462 "trabalho.y"
    {
        nparams++;
        (yyval).t = (yyvsp[(1) - (2)]).t;
        (yyval).c = (yyvsp[(1) - (2)]).c + " " + (yyvsp[(2) - (2)]).v;
        inclui_parametro((yyvsp[(2) - (2)]).v, (yyvsp[(1) - (2)]).t);
        (yyval).p = "#" + (yyvsp[(1) - (2)]).t.tipo_base;
    }
    break;

  case 15:
#line 471 "trabalho.y"
    { (yyval).c = gera_varglobal_temp(); + "\n" + (yyvsp[(3) - (3)]).c; }
    break;

  case 16:
#line 472 "trabalho.y"
    { 
				(yyval).c = "\n"; 
		  }
    break;

  case 17:
#line 479 "trabalho.y"
    {
        (yyval).t = (yyvsp[(1) - (5)]).t;
        (yyvsp[(3) - (5)]).t = (yyvsp[(1) - (5)]).t;
        (yyvsp[(3) - (5)]).t.ndim = (yyvsp[(4) - (5)]).t.ndim;
        (yyvsp[(3) - (5)]).t.tam_dim[0] = (yyvsp[(4) - (5)]).t.tam_dim[0];
        (yyvsp[(3) - (5)]).t.tam_dim[1] = (yyvsp[(4) - (5)]).t.tam_dim[1];
        insere_varglobal((yyvsp[(3) - (5)]).v , (yyvsp[(1) - (5)]).t);
      }
    break;

  case 18:
#line 488 "trabalho.y"
    {
        (yyval).t = (yyvsp[(1) - (4)]).t;
        (yyvsp[(2) - (4)]).t = (yyvsp[(1) - (4)]).t;
        (yyvsp[(1) - (4)]).t.ndim = (yyvsp[(3) - (4)]).t.ndim;
        (yyvsp[(1) - (4)]).t.tam_dim[0] = (yyvsp[(3) - (4)]).t.tam_dim[0];
        (yyvsp[(1) - (4)]).t.tam_dim[1] = (yyvsp[(3) - (4)]).t.tam_dim[1];
        insere_varglobal((yyvsp[(2) - (4)]).v , (yyvsp[(1) - (4)]).t);
      }
    break;

  case 19:
#line 500 "trabalho.y"
    { (yyval).t.ndim = 1; (yyval).t.tam_dim[0] = atoi(((yyvsp[(2) - (3)]).v).c_str()); (yyval).t.tam_dim[1] = 0; }
    break;

  case 20:
#line 502 "trabalho.y"
    { (yyval).t.ndim = 2; (yyval).t.tam_dim[0] = atoi(((yyvsp[(2) - (5)]).v).c_str()); (yyval).t.tam_dim[1] = atoi(((yyvsp[(4) - (5)]).v).c_str()); }
    break;

  case 21:
#line 504 "trabalho.y"
    { (yyval).t.ndim = 0; (yyval).t.tam_dim[0] = 0; (yyval).t.tam_dim[1] = 0; }
    break;

  case 22:
#line 509 "trabalho.y"
    {}
    break;

  case 23:
#line 510 "trabalho.y"
    {}
    break;

  case 24:
#line 513 "trabalho.y"
    {
        (yyval).t = (yyvsp[(1) - (5)]).t;
        (yyvsp[(3) - (5)]).t = (yyvsp[(1) - (5)]).t;
        (yyvsp[(1) - (5)]).t.ndim = (yyvsp[(4) - (5)]).t.ndim;
        (yyvsp[(1) - (5)]).t.tam_dim[0] = (yyvsp[(4) - (5)]).t.tam_dim[0];
        (yyvsp[(1) - (5)]).t.tam_dim[1] = (yyvsp[(4) - (5)]).t.tam_dim[1];
        insere_varlocal((yyvsp[(3) - (5)]).v , (yyvsp[(1) - (5)]).t);

        if((yyvsp[(5) - (5)]).v != "")
        {
          Codigo_para_Var +=(yyvsp[(5) - (5)]).c + (yyvsp[(3) - (5)]).v + "=" + (yyvsp[(5) - (5)]).v + ";\n";
        }
      }
    break;

  case 25:
#line 527 "trabalho.y"
    {
        (yyval).t = (yyvsp[(1) - (4)]).t;
        (yyvsp[(2) - (4)]).t = (yyvsp[(1) - (4)]).t;
        (yyvsp[(1) - (4)]).t.ndim = (yyvsp[(3) - (4)]).t.ndim;
        (yyvsp[(1) - (4)]).t.tam_dim[0] = (yyvsp[(3) - (4)]).t.tam_dim[0];
        (yyvsp[(1) - (4)]).t.tam_dim[1] = (yyvsp[(3) - (4)]).t.tam_dim[1];

        insere_varlocal((yyvsp[(2) - (4)]).v , (yyvsp[(1) - (4)]).t);

        if ((yyvsp[(4) - (4)]).v != "")
        {
          if (((yyvsp[(4) - (4)]).v).c_str()[0] == '#')
          {
            Codigo_para_Var += quebra_codigo_lista((yyvsp[(2) - (4)]).v, (yyvsp[(4) - (4)]).v , (yyvsp[(4) - (4)]).c);
          }
          else
          {
            Codigo_para_Var += (yyvsp[(4) - (4)]).c;
            Atributo ss, s1, s2, s3;
            s1 = (yyvsp[(2) - (4)]);
            s2.v = "<-";
            s3 = (yyvsp[(4) - (4)]);
            gera_codigo_operador(ss, s1,s2 ,s3 );
            Codigo_para_Var += ss.c;
          }
        }
      }
    break;

  case 26:
#line 557 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 27:
#line 558 "trabalho.y"
    { (yyval).c = ""; }
    break;

  case 28:
#line 562 "trabalho.y"
    {
      string retorno;
      string aux;
      if (nparams >= 1)
      {
        if ((yyvsp[(1) - (6)]).v == "nada")
        {
          aux = "";
          (yyval).c = "void " + (yyvsp[(2) - (6)]).v + "(" + (yyvsp[(4) - (6)]).c + ")\n" + (yyvsp[(6) - (6)]).c;
        }
        else
        {
          aux = " &RI";
          (yyval).c = "void " + (yyvsp[(2) - (6)]).v + "(" + (yyvsp[(4) - (6)]).c + "," + (yyvsp[(1) - (6)]).c + aux + ")\n" + (yyvsp[(6) - (6)]).c;
        }
        ir = ir + 1;
      }
      else
      {
        if((yyvsp[(1) - (6)]).v == "nada")
        {
          (yyval).c = "void " + (yyvsp[(2) - (6)]).v + "()\n" + (yyvsp[(6) - (6)]).c;
        }
        else
        {
          aux = " &RI";
          (yyval).c = "void " + (yyvsp[(2) - (6)]).v + "(" + (yyvsp[(1) - (6)]).c + aux  + ")\n" + (yyvsp[(6) - (6)]).c;
        }
        ir = ir + 1;
      }
      if(busca_funcao((yyvsp[(2) - (6)]).v, &(yyvsp[(2) - (6)]).t) == false)
      {
        inclui_funcao((yyvsp[(2) - (6)]).v, (yyvsp[(1) - (6)]).t, (yyvsp[(4) - (6)]).p);
        nfuncao++;
      }

      nparams = 0;
    }
    break;

  case 29:
#line 602 "trabalho.y"
    { (yyval).t = (yyvsp[(1) - (1)]).t; (yyval).c = (yyvsp[(1) - (1)]).c; }
    break;

  case 30:
#line 603 "trabalho.y"
    { (yyval).t.tipo_base = "V"; }
    break;

  case 31:
#line 606 "trabalho.y"
    { }
    break;

  case 32:
#line 607 "trabalho.y"
    { }
    break;

  case 33:
#line 610 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 34:
#line 611 "trabalho.y"
    { (yyval).c = ""; }
    break;

  case 35:
#line 614 "trabalho.y"
    { }
    break;

  case 36:
#line 615 "trabalho.y"
    { }
    break;

  case 37:
#line 616 "trabalho.y"
    { }
    break;

  case 38:
#line 617 "trabalho.y"
    { }
    break;

  case 39:
#line 618 "trabalho.y"
    { }
    break;

  case 40:
#line 619 "trabalho.y"
    { }
    break;

  case 41:
#line 620 "trabalho.y"
    { }
    break;

  case 42:
#line 621 "trabalho.y"
    { }
    break;

  case 43:
#line 622 "trabalho.y"
    { }
    break;

  case 44:
#line 623 "trabalho.y"
    { }
    break;

  case 45:
#line 627 "trabalho.y"
    { (yyval).v = (yyvsp[(2) - (2)]).v; (yyval).t = (yyvsp[(2) - (2)]).t; (yyval).c = (yyvsp[(2) - (2)]).c; }
    break;

  case 46:
#line 628 "trabalho.y"
    { (yyval).v = (yyvsp[(3) - (4)]).v; (yyval).c = (yyvsp[(3) - (4)]).c; }
    break;

  case 47:
#line 629 "trabalho.y"
    { }
    break;

  case 48:
#line 630 "trabalho.y"
    { (yyval).v = ""; (yyval).c = ""; }
    break;

  case 49:
#line 633 "trabalho.y"
    { (yyval).c = (yyvsp[(2) - (2)]).c + "cin >>" + (yyvsp[(2) - (2)]).v + " ;\n"; }
    break;

  case 50:
#line 639 "trabalho.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 51:
#line 643 "trabalho.y"
    {
    (yyval).c = (yyvsp[(1) - (3)]).c + (yyvsp[(3) - (3)]).c + "  cout << " + (yyvsp[(3) - (3)]).v  + ";\n ";
}
    break;

  case 52:
#line 646 "trabalho.y"
    { (yyval) = Atributo(); }
    break;

  case 53:
#line 650 "trabalho.y"
    {
          (yyval).c = (yyvsp[(2) - (3)]).c + "RI = " + (yyvsp[(2) - (3)]).v + ";\nreturn;\n";
          //compara_resultado($2.t.tipo_base);  
      }
    break;

  case 54:
#line 654 "trabalho.y"
    { }
    break;

  case 55:
#line 659 "trabalho.y"
    {
        string rotulo = gera_rotulo();
        string rotulo_aux = gera_rotulo();
        string teste = gera_temp("B");
        string codigo;
        codigo += (yyvsp[(3) - (7)]).c;
        codigo += teste + " =" + (yyvsp[(3) - (7)]).v + ";\n";

        codigo += "if (!(" + teste + ")) \n";
        codigo += "goto " + rotulo_aux + ";\n";

        codigo += rotulo + ": ";
        codigo += (yyvsp[(6) - (7)]).c;

        codigo += (yyvsp[(3) - (7)]).c;
        codigo += teste + " =" + (yyvsp[(3) - (7)]).v + ";\n";

        codigo += "if (" + teste + " ) \n";
        codigo += "goto " + rotulo + ";\n";
        codigo += rotulo_aux + ": ";
        (yyval).c = codigo;
      }
    break;

  case 56:
#line 684 "trabalho.y"
    {
    string varTeste = gera_temp( "B" );
    string labelFim = gera_rotulo();
    string labelTeste = gera_rotulo();

    (yyval).v = "";
    (yyval).c = "\t" + labelTeste + ":\n" + (yyvsp[(6) - (8)]).c +
    "\t" + varTeste + " = !" + (yyvsp[(6) - (8)]).v + ";\n" +
    "\tif( " + varTeste + " ) goto " + labelFim +";\n" +
    (yyvsp[(3) - (8)]).c +
    "\tgoto " + labelTeste + ";\n" +
    "\t" + labelFim + ":\n";
}
    break;

  case 57:
#line 701 "trabalho.y"
    {

          string varTeste = gera_temp( "B" );
          string labelFim = gera_rotulo();
          string labelTeste = gera_rotulo();

          (yyval).v = "";
          (yyval).c = (yyvsp[(5) - (11)]).c + "\t" + labelTeste + ":\n" + (yyvsp[(7) - (11)]).c +
          "\t" + varTeste + " = !" + (yyvsp[(7) - (11)]).v + ";\n" +
          "\tif( " + varTeste + " ) goto " + labelFim +";\n" +
          (yyvsp[(10) - (11)]).c +
          "\tgoto " + labelTeste + ";\n" +
          "\t" + labelFim + ":\n ;";
      }
    break;

  case 58:
#line 719 "trabalho.y"
    {
      string codigo;
      string rotulo = gera_rotulo();
      string teste = gera_temp("B");

      codigo += (yyvsp[(3) - (7)]).c;
      codigo += teste +" =  ! " + (yyvsp[(3) - (7)]).v + " ;\n";
      codigo += "if("  +  teste  +   ")\n";
      codigo += "goto " + rotulo + ";\n";
      codigo += (yyvsp[(6) - (7)]).c;
      codigo += rotulo + ": ;\n";

      (yyval).c = codigo;
    }
    break;

  case 59:
#line 734 "trabalho.y"
    {
      string codigo;
      string rotulo = gera_rotulo();
      string teste = gera_temp("B");
      string rotulo2 = gera_rotulo();

      codigo += (yyvsp[(3) - (10)]).c;
      codigo += teste +" =  ! " + (yyvsp[(3) - (10)]).v + " ;\n";
      codigo += "if("  +  teste  +   ")\n";
      codigo += "goto " + rotulo + ";\n";
      codigo += (yyvsp[(6) - (10)]).c;
      codigo += "goto " + rotulo2 + ";\n";
      codigo += rotulo + ": ;\n";
      codigo += (yyvsp[(9) - (10)]).c;
      codigo += rotulo2 + ": ;\n";

      (yyval).c = codigo;
    }
    break;

  case 60:
#line 758 "trabalho.y"
    {

    string codigo;

    codigo += (yyvsp[(6) - (8)]).c;
    codigo += (yyvsp[(7) - (8)]).c;

    codigo += fim_switch +": ";
    (yyval).c = codigo;
}
    break;

  case 61:
#line 774 "trabalho.y"
    {
		  fim_switch = gera_rotulo();
          id_switch = (yyvsp[(1) - (1)]).v;
          (yyval).c = (yyvsp[(1) - (1)]).c;
}
    break;

  case 62:
#line 781 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (2)]).c + (yyvsp[(2) - (2)]).c; }
    break;

  case 63:
#line 782 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (1)]).c; }
    break;

  case 64:
#line 786 "trabalho.y"
    {
    string codigo;
    string endcase = gera_rotulo();

    codigo += "\nif (" + id_switch +" != "+ (yyvsp[(2) - (7)]).v + ") goto "+
    endcase+";\n";
    codigo += (yyvsp[(4) - (7)]).c;
    codigo += (yyvsp[(5) - (7)]).c;
    codigo+= "goto "+fim_switch + "; \n";
    codigo+= endcase + ": \n";

    (yyval).c = codigo;
}
    break;

  case 65:
#line 802 "trabalho.y"
    {
    string codigo;
    codigo += (yyvsp[(3) - (6)]).c;
    codigo += (yyvsp[(4) - (6)]).c;
    (yyval).c = codigo;

}
    break;

  case 66:
#line 815 "trabalho.y"
    {
			  
            Atributo inicio, condicao, passo, cmd;
			
            inicio.c =  (yyvsp[(3) - (8)]).c + (yyvsp[(5) - (8)]).c +"  x_" + pipeAtivo + " = " + (yyvsp[(3) - (8)]).v + ";\n";
            condicao.t.nome = "bool";
            condicao.v = gera_temp("B"); 
            condicao.c = "  " + condicao.v + " = " + "x_" + pipeAtivo + " <= " + (yyvsp[(5) - (8)]).v + ";\n";
            passo.c = RotuloFimPipe + ":\n" + "  x_" + pipeAtivo + " = x_" + pipeAtivo + " + 1;\n";
            cmd.c = (yyvsp[(7) - (8)]).c + (yyvsp[(8) - (8)]).c;
            geraCodigoFor( &(yyval), inicio, condicao, passo, cmd );
            pipeAtivo = ""; 
            }
    break;

  case 67:
#line 830 "trabalho.y"
    {
			(yyval) = (yyvsp[(1) - (1)]);
			lastpipe = (yyvsp[(1) - (1)]).v;
			pipeAtivo =  (yyvsp[(1) - (1)]).t.nome;
			RotuloFimPipe = gera_rotulo();
		}
    break;

  case 68:
#line 839 "trabalho.y"
    { (yyval).c = (yyvsp[(2) - (3)]).c + (yyvsp[(3) - (3)]).c; }
    break;

  case 69:
#line 841 "trabalho.y"
    { (yyval) = Atributo(); }
    break;

  case 70:
#line 844 "trabalho.y"
    { geraCodigoFilter( &(yyval), (yyvsp[(3) - (4)]) ); }
    break;

  case 71:
#line 845 "trabalho.y"
    { geraCodigoFirstN(&(yyval), (yyvsp[(3) - (4)])); }
    break;

  case 72:
#line 846 "trabalho.y"
    { geraCodigoLastN(&(yyval), (yyvsp[(3) - (4)])); }
    break;

  case 73:
#line 850 "trabalho.y"
    { (yyval).c = (yyvsp[(3) - (4)]).c; }
    break;

  case 74:
#line 857 "trabalho.y"
    { }
    break;

  case 75:
#line 858 "trabalho.y"
    { }
    break;

  case 76:
#line 861 "trabalho.y"
    { (yyval).c = (yyvsp[(1) - (3)]).c;  (yyvsp[(2) - (3)]).v = "<-"; gera_codigo_operador((yyval),(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)])); }
    break;

  case 77:
#line 862 "trabalho.y"
    { }
    break;

  case 78:
#line 865 "trabalho.y"
    { gera_codigo_operador((yyval),(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)])); }
    break;

  case 79:
#line 866 "trabalho.y"
    { gera_codigo_operador((yyval),(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)])); }
    break;

  case 80:
#line 867 "trabalho.y"
    { }
    break;

  case 81:
#line 870 "trabalho.y"
    { gera_codigo_operador((yyval),(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)])); }
    break;

  case 82:
#line 871 "trabalho.y"
    { gera_codigo_operador((yyval),(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)])); }
    break;

  case 83:
#line 872 "trabalho.y"
    { gera_codigo_operador((yyval),(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)])); }
    break;

  case 84:
#line 873 "trabalho.y"
    { gera_codigo_operador((yyval),(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)])); }
    break;

  case 85:
#line 874 "trabalho.y"
    { gera_codigo_operador((yyval),(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)])); }
    break;

  case 86:
#line 875 "trabalho.y"
    { gera_codigo_operador((yyval),(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)])); }
    break;

  case 87:
#line 876 "trabalho.y"
    { }
    break;

  case 88:
#line 879 "trabalho.y"
    { gera_codigo_operador((yyval),(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)])); }
    break;

  case 89:
#line 880 "trabalho.y"
    { gera_codigo_operador((yyval),(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)])); }
    break;

  case 90:
#line 881 "trabalho.y"
    { }
    break;

  case 91:
#line 884 "trabalho.y"
    { gera_codigo_operador((yyval),(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)])); }
    break;

  case 92:
#line 885 "trabalho.y"
    { gera_codigo_operador((yyval),(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)])); }
    break;

  case 93:
#line 886 "trabalho.y"
    { gera_codigo_operador((yyval),(yyvsp[(1) - (3)]),(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)])); }
    break;

  case 94:
#line 887 "trabalho.y"
    { }
    break;

  case 95:
#line 890 "trabalho.y"
    { }
    break;

  case 96:
#line 891 "trabalho.y"
    { }
    break;

  case 97:
#line 895 "trabalho.y"
    {
      busca_variavelglobal((yyvsp[(1) - (1)]).v, & (yyvsp[(1) - (1)]).t);
      busca_varlocal((yyvsp[(1) - (1)]).v, & (yyvsp[(1) - (1)]).t);
      busca_varparametro((yyvsp[(1) - (1)]).v, & (yyvsp[(1) - (1)]).t);

      (yyval).t = (yyvsp[(1) - (1)]).t;
    }
    break;

  case 98:
#line 903 "trabalho.y"
    {
      busca_funcao((yyvsp[(1) - (3)]).v, & (yyvsp[(1) - (3)]).t);
      (yyval) = (yyvsp[(1) - (3)]);
      (yyval).v = gera_temp((yyvsp[(1) - (3)]).t.tipo_base);
      (yyval).c = quebra_codigo_parametro((yyval).v, (yyvsp[(1) - (3)]).v,  "" , "", (yyvsp[(1) - (3)]).t.tipo_base);
      compara_parametros((yyvsp[(1) - (3)]).v, "");
    }
    break;

  case 99:
#line 911 "trabalho.y"
    {

      busca_funcao((yyvsp[(1) - (4)]).v, & (yyvsp[(1) - (4)]).t);
      (yyval) = (yyvsp[(1) - (4)]);

      if ((yyvsp[(1) - (4)]).t.tipo_base == "V")
      {
        (yyval).v = "";
      }
      else
      {
        (yyval).v = gera_temp((yyvsp[(1) - (4)]).t.tipo_base);
      }

      (yyval).c = quebra_codigo_parametro((yyval).v, (yyvsp[(1) - (4)]).v,  (yyvsp[(3) - (4)]).v , (yyvsp[(3) - (4)]).c, (yyvsp[(1) - (4)]).t.tipo_base);

      compara_parametros((yyvsp[(1) - (4)]).v, (yyvsp[(3) - (4)]).p);
    }
    break;

  case 100:
#line 930 "trabalho.y"
    {
      busca_variavelglobal((yyvsp[(1) - (4)]).v, & (yyvsp[(1) - (4)]).t);
      busca_varlocal((yyvsp[(1) - (4)]).v, & (yyvsp[(1) - (4)]).t);

      (yyval).t = (yyvsp[(1) - (4)]).t;

      (yyval).c = (yyvsp[(3) - (4)]).c;

      string aux = gera_temp((yyvsp[(3) - (4)]).t.tipo_base);

      if ((yyvsp[(3) - (4)]).t.ndim !=0 )
      {
        (yyval).c += aux + " = " + (yyvsp[(3) - (4)]).v + ";\n";
        (yyvsp[(3) - (4)]).v = aux;
      }

      if ((yyvsp[(1) - (4)]).t.tipo_base == "S")
      {
        (yyval).c += aux + " = " + (yyvsp[(3) - (4)]).v + "* 256" + ";\n";
        (yyvsp[(3) - (4)]).v = aux;

        (yyval).v =  (yyvsp[(1) - (4)]).v + "[" + (yyvsp[(3) - (4)]).v + "]";
      }
      else
      {
        (yyval).v =  (yyvsp[(1) - (4)]).v + "[" + (yyvsp[(3) - (4)]).v + "]";
      }
    }
    break;

  case 101:
#line 959 "trabalho.y"
    {
      busca_variavelglobal((yyvsp[(1) - (6)]).v, & (yyvsp[(1) - (6)]).t);
      busca_varlocal((yyvsp[(1) - (6)]).v, & (yyvsp[(1) - (6)]).t);
      (yyval).t = (yyvsp[(1) - (6)]).t;

      string codigo;

      string i = gera_temp("I");
      codigo += i + " = " + (yyvsp[(3) - (6)]).v + ";\n";
      codigo += i + " = " + i + " * " + inteiro_string((yyvsp[(1) - (6)]).t.tam_dim[1]) + ";\n";

      Atributo ss, s1, s2, s3;
      s1.v = i;
      s1.t.tipo_base = "I";
      s2.v = "+";
      s3 = (yyvsp[(5) - (6)]);
      gera_codigo_operador(ss,s1,s2,s3);

      codigo += ss.c;

      (yyval).c = (yyvsp[(3) - (6)]).c + (yyvsp[(5) - (6)]).c + codigo;

      string aux = gera_temp((yyvsp[(3) - (6)]).t.tipo_base);

      if ((yyvsp[(1) - (6)]).t.tipo_base == "S")
      {
        (yyval).c += aux + " = " + ss.v + "* 256" + ";\n";
        (yyvsp[(3) - (6)]).v = aux;

        (yyval).v =  (yyvsp[(1) - (6)]).v + "[" + aux + "]";
      }
      else
      {
        (yyval).v =  (yyvsp[(1) - (6)]).v + "[" + ss.v + "]";
      }

    }
    break;

  case 102:
#line 997 "trabalho.y"
    {
      (yyval).t.tipo_base = (yyvsp[(2) - (3)]).t.tipo_base;
      (yyval).v = (yyvsp[(2) - (3)]).v;
      (yyval).c =  (yyvsp[(2) - (3)]).c;
    }
    break;

  case 103:
#line 1002 "trabalho.y"
    { (yyval).t.tipo_base = "I";  }
    break;

  case 104:
#line 1003 "trabalho.y"
    { (yyval).t.tipo_base = "R"; }
    break;

  case 105:
#line 1004 "trabalho.y"
    { (yyval).t.tipo_base = "D"; }
    break;

  case 106:
#line 1005 "trabalho.y"
    { (yyval).v = inteiro_string(1); (yyval).t.tipo_base = "B"; }
    break;

  case 107:
#line 1006 "trabalho.y"
    { (yyval).v = inteiro_string(0); (yyval).t.tipo_base = "B"; }
    break;

  case 108:
#line 1007 "trabalho.y"
    { (yyval).t.tipo_base = "C"; }
    break;

  case 109:
#line 1008 "trabalho.y"
    { (yyval).t.tipo_base = "S"; }
    break;

  case 110:
#line 1010 "trabalho.y"
    { 
		if( pipeAtivo != "" )
				(yyval) = Atributo( "x_" + pipeAtivo, pipeAtivo );
		else
				erro( "Ei! Vamos aprender a programar hein!\n A variavel 'x' so pode ser usada dentro de pipe" );
    }
    break;

  case 111:
#line 1019 "trabalho.y"
    {
		(yyval).v += "#" + (yyvsp[(3) - (3)]).v;
		(yyval).c += "#" + (yyvsp[(3) - (3)]).c;
		(yyval).p += "#" + (yyvsp[(3) - (3)]).t.tipo_base;
	}
    break;

  case 112:
#line 1025 "trabalho.y"
    {
		(yyval).v = "#" + (yyvsp[(1) - (1)]).v;
		(yyval).c = "#" + (yyvsp[(1) - (1)]).c;
		(yyval).p += "#" + (yyvsp[(1) - (1)]).t.tipo_base;
	}
    break;

  case 113:
#line 1035 "trabalho.y"
    { (yyval).t.tipo_base =  "I"; (yyval).v = (yyvsp[(1) - (1)]).v; (yyval).c = "int"; }
    break;

  case 114:
#line 1036 "trabalho.y"
    { (yyval).t.tipo_base = "R"; (yyval).v = (yyvsp[(1) - (1)]).v; (yyval).c = "float"; }
    break;

  case 115:
#line 1037 "trabalho.y"
    { (yyval).t.tipo_base = "D"; (yyval).v = (yyvsp[(1) - (1)]).v; (yyval).c = "double"; }
    break;

  case 116:
#line 1038 "trabalho.y"
    { (yyval).t.tipo_base = "B"; (yyval).v = (yyvsp[(1) - (1)]).v; (yyval).c = "char"; }
    break;

  case 117:
#line 1039 "trabalho.y"
    { (yyval).t.tipo_base = "C"; (yyval).v = (yyvsp[(1) - (1)]).v; (yyval).c = "char"; }
    break;

  case 118:
#line 1040 "trabalho.y"
    { (yyval).t.tipo_base = "S"; (yyval).v = (yyvsp[(1) - (1)]).v; (yyval).c = "string"; }
    break;


/* Line 1267 of yacc.c.  */
#line 3020 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1044 "trabalho.y"


int nlinha = 1;
map<string,int> n_var_temp;
map<string,int> label;

#include "lex.yy.c"


/* **** FUNCOES AUXILIARES **** */
int main(int argc, char* argv[])
{
  yyparse();
}

string gera_rotulo()
{
  char rotulo[200];

  sprintf(rotulo,"ROT%d", nrotulos++);

  return rotulo;
}



string gera_varglobal_temp()
{
  int i, aux;
  string c;

  for (i = 0; i < nvarglobal; i++)
  {
    if (TS_varglobal[i].t.tipo_base == "B" || TS_varglobal[i].t.tipo_base == "I")
    {
      c += "int " + TS_varglobal[i].nome + parte_vetor(TS_varglobal[i].t) + ";\n";
    }
    else if (TS_varglobal[i].t.tipo_base == "S" )
    {
      c += "char " + TS_varglobal[i].nome + parte_vetor(TS_varglobal[i].t) + ";\n";
    }
    else if (TS_varglobal[i].t.tipo_base == "C" )
    {
      c+= "char " + TS_varglobal[i].nome +  parte_vetor(TS_varglobal[i].t) + ";\n";
    }
    else if (TS_varglobal[i].t.tipo_base == "R" )
    {
      c+= "float " + TS_varglobal[i].nome + parte_vetor(TS_varglobal[i].t) +";\n";
    }
    else if (TS_varglobal[i].t.tipo_base == "D" )
    {
        c+= "double " + TS_varglobal[i].nome + parte_vetor(TS_varglobal[i].t) +";\n";
    }
    else
    {
      erro("Peraí, vamos repensar na vida! Houve um erro na gramatica");
    }
  }

  c += gera_decl_temp("int", "I", NTEMP_GLOBAL.i);
  c += gera_decl_temp("float", "R", NTEMP_GLOBAL.r);
  c += gera_decl_temp("double", "D", NTEMP_GLOBAL.d);
  c += gera_decl_temp("int", "B", NTEMP_GLOBAL.b);
  c += gera_decl_temp("char", "C", NTEMP_GLOBAL.c);

  aux = NTEMP_GLOBAL.s;
  c += gera_decl_temp("char", "S", NTEMP_GLOBAL.s);

  for (i = 0; i < aux; i++)
  {
    c += "TS" + inteiro_string(i) + "[255] = '\\0';\n";
  }

  return c;
}


bool pode_inserir_varglobal (string nome)
{
  if (nvarglobal > TAM_MAX_VARS)
  {
    erro("Vamos repensar nesse código\nNumero de variaveis globais maximo atingido.");
  }

  if (busca_variavelglobal(nome, NULL))
  {
    erro("Tá doido rapaz(rapariga) !? Essa variavel global ja definida.");
  }

  return true;
}

void tipo_resultado(string operador, Atributo op1, Atributo op2, Atributo &resultado)
{

	//	teste leo
	if (op1.v == "x_int") op1.t.tipo_base = "I";
	if (op1.v == "x_float") op1.t.tipo_base = "R";
	if (op1.v == "x_double") op1.t.tipo_base = "D";
	if (op1.v == "x_char") op1.t.tipo_base = "C";
	
  int i;
  for(i = 0; i < TAM_MAX_OPERADORES; i++)
  {
    if (tipo_operador[i].operador == operador && op1.t.tipo_base == tipo_operador[i].op1 && op2.t.tipo_base == tipo_operador[i].op2)
    {
          resultado.t.tipo_base = tipo_operador[i].resultado;
          return ;
    }


  }

  resultado.t.tipo_base = "ERRO";


}

bool busca_varlocal (string nome, Tipo *t)
{
  int i;
  for(i = 0 ; i < nvarlocal; i++)
  {
    if(TS_varlocal[i].nome == nome)
    {
      if (t != NULL)
      {
        *t = TS_varlocal[i].t;
      }
      return true;
    }
  }
  return false;
}

bool busca_varparametro(string nome, Tipo *t)
{
  if (nfuncao != 0)
  {
    int i, j;
    i = nfuncao - 1;
    for(j = 0 ; j < TS_funcao[i].nparam; j++)
    {
      if (TS_funcao[i].parametro[j].nome == nome )
      {
        if (t != NULL)
        {
          *t = TS_funcao[i].parametro[j].t;
        }
        return true;
      }
    }
    return false;
  }
}

void insere_varlocal (string nome, Tipo t)
{
  if (pode_inserir_varlocal(nome) )
  {
    TS_varlocal[nvarlocal].nome = nome;
    TS_varlocal[nvarlocal].t = t;
    nvarlocal++;
  }
  else
  {
    erro("Nao sei dizer explicar mas nao foi possivel declarar a variavel local" +  nome + ".");
  }
}

string gera_decl_temp(string tipo, string tipo_base, int &n)
{
  string c;
  int i;
  for (i = 0; i < n; i++)
  {
    if(tipo_base == "S")
    {
      c += tipo + " " + "Temp_" + tipo_base +  inteiro_string(i) + "[256];\n";
    }
    else
    {
      c += tipo + " " + "Temp_" + tipo_base +  inteiro_string(i) + ";\n";
    }
  }
  n = 0;
  return c;
}

string quebra_codigo_lista(string vetorid, string lsttemp , string lstcodtemp)
{
  string saida;
  string a;
  string b;

  int i = 0;
  int j = 0;
  int contador = 0;

  getchar();

  while(1)
  {
    a = "";
    b = "";

    while(lsttemp[i] != '#' && lsttemp[i] != '\0')
    {
      a += lsttemp[i];
      i++;
    }

    while(lstcodtemp[j] != '#' && lstcodtemp[j] != '\0')
    {
      b += lstcodtemp[j];
      j++;
    }

    if (a[0] != '\0' || b[0] != '\0')
    {
      saida += b  + vetorid + "[" + inteiro_string(contador)+ "]" + "=" + a + ";\n";
      contador++;
    }

    if (lstcodtemp[j] == '\0')
    {
      break;
    }
    i++;
    j++;

  }
  return saida;
}

string parte_vetor(Tipo t)
{
  string codigo;

  int ehString = 1;

  if(t.tipo_base == "S")
  {
    ehString = 256;
  }

  if (t.ndim == 0)
  {
    if(ehString == 1)
    {
      codigo = "";
    }
    else
    {
      codigo = "[256]";
    }
  }
  else if (t.ndim == 1)
  {
    codigo = "[" + inteiro_string(t.tam_dim[0] * ehString) + "]";

  }
  else if (t.ndim == 2)
  {
    codigo = "[" + inteiro_string(t.tam_dim[0] * t.tam_dim[1] * ehString ) + "]";
  }
  return codigo;
}

bool busca_variavelglobal (string nome, Tipo *t)
{
  int i;
  for(i = 0; i < nvarglobal; i++)
  {
    if(TS_varglobal[i].nome == nome)
    {
      if (t != NULL)
      {
        *t = TS_varglobal[i].t;
      }
      return true;
    }
  }
  return false;
}

void inclui_parametro(string nome, Tipo t)
{
  int p;
  if(existe_parametro(nome))
  {
    erro("Ja tem esse parametro declarado.\nVamos aprender a programar!");
  }
  p = TS_funcao[nfuncao].nparam;
  TS_funcao[nfuncao].parametro[p].nome = nome;
  TS_funcao[nfuncao].parametro[p].t = t;
  TS_funcao[nfuncao].nparam++;
}

bool busca_funcao(string nome, Tipo *tr)
{
  int i;
  for(i = 0 ; i < nfuncao; i++)
  {
    if(TS_funcao[i].nome == nome)
    {
      if(tr != NULL)
      {
        *tr = TS_funcao[i].retorno;
      }

      return true;
    }
  }
  return false;
}

bool existe_parametro(string nome)
{
  int i;
  int j;

  for (i = 0; i < nfuncao; i++)
  {
    if (TS_funcao[i].nome == nome)
    {

      for (j = 0; j < TS_funcao[i].nparam; j++)
      {
        if (TS_funcao[i].parametro[j].nome == nome)
        {
          return true;
        }
      }

    }

  }
  return false;
}



void inclui_funcao(string nome, Tipo retorno, string lista_parametros)
{
  if(existe_funcao(nome))
  {
    erro("De novo? Bebeste? Essa funcao ja foi declarada.");
  }
  TS_funcao[nfuncao].nome = nome;
  TS_funcao[nfuncao].retorno = retorno;
  TS_funcao[nfuncao].lista_parametros = lista_parametros;

}

string quebra_codigo_parametro(string nometemp, string vetorid, string lsttemp, string lstcodtemp, string tiporet)
{

  string saida;
  string a;
  string b;
  string lista;
  string lista_completa;

  int i = 0, j = 0, contador = 0;

  getchar();

  while(1)
  {
    a = "";
    b = "";

    while (lsttemp[i] != '#' && lsttemp[i] != '\0')
    {
      a += lsttemp[i];
      i++;
    }

    while (lstcodtemp[j] != '#' && lstcodtemp[j] != '\0')
    {
      b += lstcodtemp[j];
      j++;
    }

    if(a[0] != '\0' || b[0] != '\0')
    {
      saida += b;
      if (a != "")
      {
        lista += a + ", ";
      }
      contador++;
    }

    if (lstcodtemp[j] == '\0')
    {
      break;
    }
    i++;
    j++;
  }


  if(tiporet != "V")
  {
    lista_completa = vetorid + "(" + lista + nometemp + ");\n";
    saida+= lista_completa;
    return saida;
  }
  else
  {

    int len = lista.length();
    lista[len - 2] = ' ';
    string saida = vetorid + "("+  lista + ");\n";
    return saida;
  }

}

bool pode_inserir_varlocal (string nome)
{
  if (nvarlocal > TAM_MAX_VARS)
  {
    erro("MUITAS , MUITAS VARIAVEIS!!\nOu seja, o numero de variaveis maximo atingido.");
  }
  if (busca_varlocal(nome, NULL) )
  {
    erro("Ja tem isso aí!\nVamos aprender a programar!\nEssa variavel ja foi definida.");
  }
  return true;
}

bool compara_resultado(string resultado)
{
  if (TS_funcao[nfuncao-1].retorno.tipo_base == resultado)
  {
    return true;
  }
  else
  {
    erro("Pense um pouco, olhe a funcao! \nVoce vai perceber esse \nValor retornado invalido");
    cout << nvarlocal << endl;
  }
}

bool existe_funcao(string nome)
{
  int i;
  for (i = 0; i < nfuncao; i++)
  {
    if (TS_funcao[i].nome == nome)
    {
      return true;
    }

  }
  return false;

}

string toStr( int n ) {
    char buf[1024] = "";

    sprintf( buf, "%d", n );

    return buf;
}

bool compara_parametros(string nome, string parametros)
{
  int i;
  for(i = 0; i < nfuncao; i++)
  {
    if (TS_funcao[i].nome == nome && TS_funcao[i].lista_parametros == parametros)
    {
      return true;
    }
  }

  erro("Cara! Olha ali! Viu?!\n Esses parametros sao invalidos.");
  return false;
}



string inteiro_string(int n)
{
  char linha[20];
  sprintf(linha, "%d", n);
  return linha;
}

string gera_temp(string tipo)
{
  char variavel[200];

  if (tipo == "I")
  {
    sprintf(variavel, "Temp_I%d", NTEMP.i++);
  }
  else if (tipo == "R")
  {
    sprintf(variavel, "Temp_R%d", NTEMP.r++);
  }
  else if (tipo == "C")
  {
    sprintf(variavel, "Temp_C%d", NTEMP.c++);
  }
  else if (tipo == "S")
  {
    sprintf(variavel, "Temp_S%d", NTEMP.s++);
  }
  else if (tipo == "B")
  {
    sprintf(variavel, "Temp_B%d", NTEMP.b++);
  }
  else if (tipo == "D")
  {
      sprintf(variavel, "Temp_D%d", NTEMP.d++);
  }
  return variavel;
}


void yyerror (const char * st)
{
    puts(st);
    cout << "Ta vendo aqui na linha: (" << nlinha << ")\n\t    Ao lado de:  " << yytext << ""<< endl;
    cout << "Vamos repensar nesse codigo! Com calma!" <<endl;
}


string gera_variavellocal_temp()
{
  int i, aux;
  string c;

  for (i = 0; i < nvarlocal; i++)
  {

    if (TS_varlocal[i].t.tipo_base == "B" || TS_varlocal[i].t.tipo_base == "I")
    {
      c += "int " + TS_varlocal[i].nome + parte_vetor(TS_varlocal[i].t) + ";\n";
    }
    else if (TS_varlocal[i].t.tipo_base == "S" )
    {
      c += "char " + TS_varlocal[i].nome + parte_vetor(TS_varlocal[i].t) + ";\n";
    }
    else if (TS_varlocal[i].t.tipo_base == "C" )
    {
      c+= "char " + TS_varlocal[i].nome + parte_vetor(TS_varlocal[i].t) + ";\n";
    }
    else if (TS_varlocal[i].t.tipo_base == "R" )
    {
      c+= "float " + TS_varlocal[i].nome + parte_vetor(TS_varlocal[i].t) + ";\n";
    }
    else if (TS_varlocal[i].t.tipo_base == "D" )
    {
        c+= "double " + TS_varlocal[i].nome + parte_vetor(TS_varlocal[i].t) + ";\n";

    }
    else
    {
      erro("Peraí, vamos repensar na vida! Houve um erro na gramatica");
    }

  }

  c += gera_decl_temp("int", "I", NTEMP.i);
  c += gera_decl_temp("float", "R", NTEMP.r);
  c += gera_decl_temp("double", "D", NTEMP.d);
  c += gera_decl_temp("int", "B", NTEMP.b);
  c += gera_decl_temp("char", "C", NTEMP.c);

  aux = NTEMP.s;
  c += gera_decl_temp("char", "S", NTEMP.s);

  for (i = 0; i < aux; i++)
  {
    c += "Temp_S" + inteiro_string(i) + "[255] = '\\0';\n";
  }

  nvarlocal = 0;

  c+= Codigo_para_Var;
  Codigo_para_Var = "";

  return c;
}

void erro(string msg)
{
  cout << msg << endl;
  exit(-1);
}

void insere_varglobal (string nome, Tipo t)
{
  if (pode_inserir_varglobal(nome))
  {
    TS_varglobal[nvarglobal].nome = nome;
    TS_varglobal[nvarglobal].t = t;
    nvarglobal++;
  }
  else
  {
    erro("Ta vendo esse mundo todo ? Entao, houve erro global.\nOu seja, nao foi possivel declarar a variavel global" +  nome + ".");
  }
}

void gera_codigo_operador(Atributo &ss, Atributo &s1, Atributo &s2, Atributo &s3)
{
	
	
  tipo_resultado(s2.v,s1,s3,ss);

  if (ss.t.tipo_base == "ERRO")
  {
    if(s1.t.tipo_base == "")
    {	
		erro("'" + s1.v + "'" + " nao foi declarada.\nTu não declarou e quer usar. Deixa de ser experto.");
    }
    else if (s3.t.tipo_base == "")
    {
      erro("'" + s3.v + "'" + " nao foi declarada.\nTu não declarou e quer usar. Deixa de ser experto.");
    }
    else
    {
      //erro("O operador (" + s2.v + ") nao se aplica a (" + s1.t.tipo_base + ") e (" + s3.t.tipo_base + ").\n");
	  erro(
			"Perai! Nao da pra fazer isso neh meu filho! Essa linguagem eh limitada\nTu quer fazer (" + s1.t.tipo_base + ") " + s2.v + " (" + s3.t.tipo_base + ").\n"
			);
	  
      
    }
  }
  else
  {
    if (s2.v == "<-")
    {
      if (s3.t.ndim != 0)
      {
        string aux = gera_temp(s3.t.tipo_base);
        ss.c = s1.c + s3.c + aux + " = " + s3.v + ";\n"+  s1.v + " = " + aux + ";\n";

        if (s1.t.tipo_base == "S")
        {
          string aux = gera_temp(s1.t.tipo_base);
          ss.c = s1.c + s3.c;
          if (s1.t.ndim != 0)
          {
            ss.c += "strncpy(" + aux + ", " + s3.v + ", 256);\n";
            ss.c += "strncpy(" + s1.v+", " + aux + ", 256);\n";
          }
          else
          {
            ss.c += "strncpy(" + aux + ", " + s3.v + ", 256);\n";
            ss.c += "strncpy(" + s1.v + "," + aux + ", 256);\n";
          }
        }
      }
      else
      {
        if (s3.t.tipo_base == "S")
        {
          string aux = gera_temp(s3.t.tipo_base);
          ss.c = s1.c + s3.c + "strncpy(" + aux + "," + s3.v + ", 256);\n";
          if (s1.t.ndim != 0)
          {
            ss.c += "strncpy(" + s1.v + ", " + aux + ", 256);\n";
          }
          else
          {
            ss.c += "strncpy(" + s1.v + ", " + aux + ", 256);\n";
          }
        }
        else
        {
          ss.c = s1.c + s3.c + s1.v + " = " + s3.v + ";\n";
        }
      }
    }
    else
    {
      if ((s1.t.ndim != 0) && (s3.t.ndim != 0))
      {
        ss.v = gera_temp(ss.t.tipo_base);
        string aux1 = gera_temp(s3.t.tipo_base);
        string aux2 = gera_temp(s3.t.tipo_base);
        ss.c = s1.c + s3.c + aux1 + " = " + s1.v + ";\n" + aux2 + " = " + s3.v + ";\n"+ ss.v + " = " + aux1 + s2.v + aux2 + ";\n";
      }
      else if (s1.t.ndim != 0)
      {
        ss.v = gera_temp(ss.t.tipo_base);
        string aux1 = gera_temp(s1.t.tipo_base);
        ss.c = s1.c + s3.c + aux1 + " = " + s1.v + ";\n" + ss.v + " = " + aux1 + s2.v + s3.v + ";\n";
      }
      else if (s3.t.ndim != 0)
      {
        ss.v = gera_temp(ss.t.tipo_base);
        string aux1 = gera_temp(s3.t.tipo_base);
        ss.c = s1.c + s3.c + aux1 + " = " + s3.v + ";\n" + ss.v + " = " + s1.v + s2.v + aux1 + ";\n";
      }
      else
      {
        if (( s1.t.tipo_base == "S") || ( s3.t.tipo_base == "S"))
        {
          if (s2.v == "+")
          {
            ss.v = gera_temp(ss.t.tipo_base);
            ss.c = s1.c + s3.c + "strncpy(" + ss.v + "," + s1.v + ",256);\n" + "strcat(" + ss.v + "," + s3.v + ");\n";
            ss.t.tipo_base = "S";
          }
        }
        else
        {
          ss.v = gera_temp(ss.t.tipo_base);
          if(s2.v == "<>")
            ss.c = s1.c + s3.c + ss.v + " = " + s1.v + "==" + s3.v + ";\n";
          else if(s2.v == "OU")
            ss.c = s1.c + s3.c + ss.v + " = " + s1.v + "||" + s3.v + ";\n";
          else if(s2.v == "E")
            ss.c = s1.c + s3.c + ss.v + " = " + s1.v + "&&" + s3.v + ";\n";
          else
            ss.c = s1.c + s3.c + ss.v + " = " + s1.v + s2.v + s3.v + ";\n";
        }
      }
    }
  }
}

void geraCodigoFilter( Atributo* SS, const Atributo& condicao ) {
  *SS = Atributo();
  SS->v = gera_temp("B");
  SS->c = condicao.c +
          "  " + SS->v + " = !" + condicao.v + ";\n" +
          "  if( " + SS->v + " ) goto " + RotuloFimPipe + ";\n";
}

void geraCodigoFirstN(Atributo* SS, const Atributo& condicao){
  *SS = Atributo();
  SS->v = gera_temp("B");
  SS->c = condicao.c +
          "  " + SS->v + " = !" +  " (x_int <= " + condicao.v + ");\n" +
          "  if( " + SS->v + " ) goto " + RotuloFimPipe + ";\n";

}

void geraCodigoLastN(Atributo* SS, const Atributo& condicao){
  *SS = Atributo();
  *SS = Atributo();
  SS->v = gera_temp("B");
	string tmp = "("+ lastpipe + "-"+condicao.v +")" ;
  SS->c = condicao.c +
          "  " + SS->v + " = !" +  " (x_int > " + tmp + ");\n" +
          "  if( " + SS->v + " ) goto " + RotuloFimPipe + ";\n";


}


//COMPARAR COM O NOSSO FOR E APAGAR
void geraCodigoFor( Atributo* SS, const Atributo& inicial,const Atributo& condicao,const Atributo& passo,const Atributo& cmds ) {

			string forCond = gera_rotulo();
			string forFim = gera_rotulo();
			string valorNotCond = gera_temp("B");
				

			*SS = Atributo();

			SS->c = inicial.c + 
			
			forCond + ":\n" + condicao.c + "  " + valorNotCond + " = !" + condicao.v + ";\n" +
			"  if( " + valorNotCond + " ) goto " + forFim + ";\n" +
			cmds.c + passo.c +
			"  goto " + forCond + ";\n" +
			forFim + ":\n";

}

string DeclaraVarPipes() {

		string ss = "";
		
        Tipo tp;
		tp.nome="int";
		tp.tipo_base="I";
		TS_varlocal[nvarlocal].nome = "x_int";
		TS_varlocal[nvarlocal].t = tp;
		nvarlocal++;

		tp.nome="float";
		tp.tipo_base="R";
		TS_varlocal[nvarlocal].nome = "x_float";
		TS_varlocal[nvarlocal].t = tp;
		nvarlocal++;
		
		tp.nome="double";
		tp.tipo_base="D";
		TS_varlocal[nvarlocal].nome = "x_double";
		TS_varlocal[nvarlocal].t = tp;
		nvarlocal++;
		
		tp.nome="char";
		tp.tipo_base="C";
		TS_varlocal[nvarlocal].nome = "x_char";
		TS_varlocal[nvarlocal].t = tp;
		nvarlocal++;
		

		return ss;
}

