/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "trabalho.y" /* yacc.c:339  */

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
    this->p = p;
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
            {"-", "C", "C", "I"},
            {"+", "C", "C", "I"},
            {"-", "C", "I", "C"},
            {"+", "I", "C", "C"},
            {"-", "C", "I", "C"},
            {"+", "I", "C", "C"},
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
string TAM_ARRAY;

//funcoes
void yyerror(const char*);
int yylex();
int yyparse();
void erro(string msg);

void geraCodigoForArray( Atributo* SS, const Atributo& inicial,const Atributo& condicao,const Atributo& passo,const Atributo& cmds );
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


#line 400 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 568 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   619

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  263

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      68,    69,    65,    63,    70,    64,     2,    66,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    73,    67,
      61,     2,    62,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    74,     2,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,     2,    72,    75,     2,     2,     2,
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   391,   391,   397,   401,   410,   415,   416,   419,   454,
     457,   458,   461,   462,   465,   476,   477,   483,   492,   505,
     507,   510,   515,   516,   520,   534,   565,   566,   569,   611,
     612,   615,   616,   619,   620,   621,   622,   623,   624,   625,
     626,   627,   628,   631,   632,   633,   634,   637,   638,   641,
     645,   649,   660,   663,   668,   672,   697,   714,   732,   747,
     771,   786,   794,   795,   798,   814,   825,   840,   858,   870,
     872,   876,   877,   878,   881,   888,   889,   892,   893,   896,
     897,   898,   901,   902,   903,   904,   905,   906,   907,   910,
     911,   912,   915,   916,   917,   918,   921,   922,   925,   933,
     941,   960,   991,  1029,  1035,  1036,  1037,  1038,  1039,  1040,
    1041,  1042,  1052,  1058,  1069,  1070,  1071,  1072,  1073,  1074
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "'{'", "'}'", "':'", "'['", "'~'", "']'", "$accept", "SL", "S",
  "BLOCO_PRINCIPAL", "BLOCO", "PROTOTIPO_FUNCOES", "PROTOTIPO",
  "PARAMETROS", "LISTAPARAMETROS", "PARAMETRO", "VARIAVEIS_GLOBAIS",
  "DECLVARG", "ARRAY", "VARS_LOCAIS", "DECLVARL", "FUNCTIONS", "FUNCTION",
  "RETORNO", "CMDS", "CMD", "CMD_ATRIBUICAO", "LST_LST_E", "CMD_IN",
  "CMD_OUT", "COUT_EXPR", "CMD_RETURN", "CMD_WHILE", "CMD_DO_WHILE",
  "CMD_FOR", "CMD_IF", "CMD_SWITCH", "ID_LABEL", "CASES", "CASE",
  "DEFAULT", "CMD_PIPE", "INI_PIPE", "PROCS", "PROC", "CONSOME", "CMD_E",
  "E", "E1", "E2", "E3", "E4", "E5", "F", "LST_E", "TIPO", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    60,    62,    43,    45,    42,    47,    59,    40,    41,
      44,   123,   125,    58,    91,   126,    93
};
# endif

#define YYPACT_NINF -125

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-125)))

#define YYTABLE_NINF -17

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -125,    30,  -125,   135,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,   220,   -56,   -13,     9,     6,  -125,    25,  -125,  -125,
      34,  -125,   342,    83,    28,    39,   342,  -125,   220,  -125,
      28,    73,    66,   220,  -125,    23,   120,  -125,   144,    66,
      36,    44,  -125,    86,    89,  -125,   163,   270,   342,   166,
      28,   111,  -125,   176,  -125,    46,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,   551,   192,   141,   100,    42,   118,
     -46,  -125,  -125,   220,  -125,   142,   143,   145,   342,   148,
     551,  -125,  -125,   109,   138,  -125,   150,   151,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,   152,   141,  -125,    28,    66,
     220,   137,   221,   551,   -33,   551,    60,   141,    64,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     543,   543,   543,  -125,   551,   551,   551,  -125,   211,  -125,
     170,   171,   -32,   551,  -125,  -125,  -125,    66,  -125,   182,
    -125,  -125,    -1,    65,  -125,    75,   184,  -125,   551,  -125,
     100,    42,    42,   118,   118,   118,   118,   118,   118,   -46,
     -46,   551,  -125,  -125,  -125,  -125,   -29,   -22,    11,   504,
    -125,   190,   551,  -125,  -125,   177,   -38,  -125,    34,  -125,
     551,  -125,  -125,   551,   141,  -125,   342,   551,   342,   193,
     222,   141,   223,   551,  -125,   197,    79,  -125,    12,  -125,
     551,   235,    22,   224,   195,   141,  -125,  -125,   231,   342,
     309,    15,   262,   121,  -125,   201,   202,   203,   223,   214,
    -125,   223,  -125,   342,  -125,  -125,    43,   219,   225,  -125,
     253,   551,   551,   551,  -125,  -125,   224,  -125,   348,  -125,
     342,   342,  -125,   -45,   -44,   -37,   153,  -125,   387,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,   426,   465,   229,
     233,  -125,  -125
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     2,     9,     1,   114,   118,   117,   116,   115,
     119,     0,     0,     0,     0,     0,    30,     0,    29,     6,
       0,    27,    16,     0,    21,     0,    23,     4,     3,    15,
      21,     0,    46,    11,    32,     0,     0,    26,     0,    46,
       0,     0,    18,     0,    10,    13,     0,    76,    23,     0,
      21,     0,    17,     0,    19,    98,   104,   109,   105,   106,
     107,   108,   110,   111,     0,     0,    43,    78,    81,    88,
      91,    95,     8,     0,    14,     0,     0,     0,    23,     0,
       0,    52,     5,     0,     0,    31,     0,     0,    37,    35,
      40,    34,    36,    41,    42,     0,    75,    22,    21,    46,
      11,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,     0,     0,     0,    32,     0,    49,
      50,     0,     0,     0,    38,    39,    33,    46,    25,     0,
      20,    99,     0,     0,   103,     0,     0,    45,     0,    44,
      77,    80,    79,    85,    84,    87,    86,    83,    82,    89,
      90,     0,    94,    97,    92,    93,     0,     0,     0,    76,
      61,     0,     0,    54,    53,     0,    68,    24,     0,   100,
       0,   101,    48,     0,   112,    96,    23,     0,    23,     0,
       0,    51,     0,     0,    28,     0,     0,    32,     0,    32,
       0,     0,    70,     0,     0,    68,   102,    47,    76,    23,
      76,     0,     0,     0,    63,     0,     0,     0,     0,     0,
      67,     0,    58,    23,    32,    55,    23,     0,     0,    62,
       0,     0,     0,     0,    69,    32,     0,    32,    76,    56,
      23,    23,    60,     0,     0,     0,    76,    66,    76,    57,
      32,    32,    71,    73,    72,    74,    59,    76,    76,     0,
       0,    64,    65
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,  -125,  -125,   123,  -125,  -125,   206,  -125,   230,
     280,  -125,   -21,   -26,  -125,  -125,  -125,    61,  -124,  -125,
     -35,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,    94,  -125,  -125,   115,   -90,  -125,    78,
    -125,   -39,   200,    74,   272,    71,    77,   -79,   -95,     5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    21,    27,     3,    12,    43,    44,    45,
      13,    14,    32,   199,    35,    28,    37,    46,    47,    85,
      42,   106,    86,    87,   130,    88,    89,    90,    91,    92,
      93,   171,   213,   214,   230,    94,   175,   203,   218,   220,
      95,    96,    67,    68,    69,    70,   162,    71,   108,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,   129,    66,   169,    52,   109,   109,   142,    15,    39,
     145,    19,   109,   109,   120,    24,    18,   109,   109,   121,
     122,   109,    97,    20,   143,   104,   107,    15,   109,    99,
       4,   252,   253,    18,    25,   174,   144,   193,    18,   254,
     186,   163,   163,   163,   132,   187,     5,     6,     7,     8,
       9,    10,   127,    55,    56,    57,    58,    59,    60,    61,
      62,   109,   109,   107,   138,   109,   107,   215,   179,   148,
     216,   217,    17,   208,    26,   210,    22,   137,    18,    23,
     188,   209,   185,    40,   226,   166,   167,   168,   196,    38,
      48,    63,    30,    49,   176,   112,   113,   114,   115,    31,
     238,   195,   177,   116,   117,    18,    53,    33,    54,   184,
     239,   246,    64,   248,   102,    65,    41,   103,    55,    56,
      57,    58,    59,    60,    61,    62,   257,   258,   234,    50,
     146,   236,   147,   191,   148,   180,   149,   181,     5,     6,
       7,     8,     9,    10,   107,   148,   131,   182,   198,   148,
     212,   207,   228,    51,   205,    72,    63,   110,   111,    73,
     197,   211,    55,    56,    57,    58,    59,    60,    61,    62,
      75,   -16,    74,    11,    76,    98,    77,    64,    78,   100,
      79,   118,   119,   224,   151,   152,   101,    80,    81,   159,
     160,   109,   243,   244,   245,    83,    84,   237,   164,   165,
      63,    55,    56,    57,    58,    59,    60,    61,    62,   140,
     124,   125,   133,   126,   250,   251,   128,   134,   135,   136,
     170,    64,   172,     5,     6,     7,     8,     9,    10,   255,
      55,    56,    57,    58,    59,    60,    61,    62,   173,    63,
      55,    56,    57,    58,    59,    60,    61,    62,    75,   222,
     223,   178,    76,   192,    77,   183,    78,    16,    79,   190,
      64,   200,   201,   105,   212,    80,    81,   202,    63,   206,
     219,   221,   227,    83,    84,   231,   232,   233,    63,    55,
      56,    57,    58,    59,    60,    61,    62,    75,   235,    64,
     141,    76,   240,    77,   242,    78,   261,    79,   241,    64,
     262,   194,    29,   123,    80,    81,   139,   229,   204,   150,
       0,    82,    83,    84,   247,     0,     0,    63,    55,    56,
      57,    58,    59,    60,    61,    62,    75,     0,     0,     0,
      76,     0,    77,   225,    78,     0,    79,     0,    64,     0,
       0,     0,     0,    80,    81,     5,     6,     7,     8,     9,
      10,    83,    84,     0,     0,     0,    63,    55,    56,    57,
      58,    59,    60,    61,    62,    75,     0,     0,     0,    76,
     249,    77,     0,    78,     0,    79,     0,    64,     0,     0,
       0,     0,    80,    81,   153,   154,   155,   156,   157,   158,
      83,    84,     0,     0,     0,    63,    55,    56,    57,    58,
      59,    60,    61,    62,    75,     0,     0,   256,    76,     0,
      77,     0,    78,     0,    79,     0,    64,     0,     0,     0,
       0,    80,    81,     0,     0,     0,     0,     0,     0,    83,
      84,     0,     0,     0,    63,    55,    56,    57,    58,    59,
      60,    61,    62,    75,     0,     0,     0,    76,     0,    77,
       0,    78,     0,    79,     0,    64,   259,     0,     0,     0,
      80,    81,     0,     0,     0,     0,     0,     0,    83,    84,
       0,     0,     0,    63,    55,    56,    57,    58,    59,    60,
      61,    62,    75,     0,     0,     0,    76,     0,    77,     0,
      78,     0,    79,     0,    64,   260,     0,     0,     0,    80,
      81,     0,     0,     0,     0,     0,     0,    83,    84,     0,
       0,     0,    63,    55,    56,    57,    58,    59,    60,    61,
      62,    75,     0,     0,     0,    76,     0,   189,     0,    78,
       0,    79,     0,    64,     0,     0,     0,     0,    80,    81,
       0,     0,     0,     0,     0,     0,    83,    84,     0,     0,
       0,    63,    55,    56,    57,    58,    59,    60,    61,    62,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      63,     0,     0,     0,     0,     0,     0,     0,    63,     0,
       0,     0,   161,     0,     0,     0,     0,     0,     0,     0,
       0,    64,     0,     0,     0,     0,     0,     0,     0,    64
};

static const yytype_int16 yycheck[] =
{
      26,    80,    41,   127,    39,    50,    50,   102,     3,    30,
     105,    67,    50,    50,    60,     9,    11,    50,    50,    65,
      66,    50,    48,    36,   103,    64,    65,    22,    50,    50,
       0,    76,    76,    28,     9,    67,    69,    75,    33,    76,
      69,   120,   121,   122,    83,    67,     3,     4,     5,     6,
       7,     8,    78,     9,    10,    11,    12,    13,    14,    15,
      16,    50,    50,   102,    99,    50,   105,    45,    69,    70,
      48,    49,    11,   197,    40,   199,    67,    98,    73,    70,
      69,    69,   161,    10,    69,   124,   125,   126,   183,    28,
      67,    47,     9,    70,   133,    53,    54,    55,    56,    71,
     224,   180,   137,    61,    62,   100,    70,    68,    72,   148,
      67,   235,    68,   237,    68,    71,    50,    71,     9,    10,
      11,    12,    13,    14,    15,    16,   250,   251,   218,     9,
      70,   221,    72,   172,    70,    70,    72,    72,     3,     4,
       5,     6,     7,     8,   183,    70,    37,    72,   187,    70,
      29,    72,    31,     9,   193,    69,    47,    57,    58,    70,
     186,   200,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    36,     9,    38,    21,     9,    23,    68,    25,    68,
      27,    63,    64,   209,   110,   111,    10,    34,    35,   118,
     119,    50,   231,   232,   233,    42,    43,   223,   121,   122,
      47,     9,    10,    11,    12,    13,    14,    15,    16,    72,
      68,    68,    74,    68,   240,   241,    68,    67,    67,    67,
       9,    68,    52,     3,     4,     5,     6,     7,     8,    76,
       9,    10,    11,    12,    13,    14,    15,    16,    67,    47,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    69,    21,    76,    23,    71,    25,    37,    27,    69,
      68,    68,    40,    71,    29,    34,    35,    44,    47,    72,
      46,    76,    10,    42,    43,    74,    74,    74,    47,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    74,    68,
      69,    21,    73,    23,    41,    25,    67,    27,    73,    68,
      67,   178,    22,    73,    34,    35,   100,   213,   193,   109,
      -1,    41,    42,    43,   236,    -1,    -1,    47,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      21,    -1,    23,    24,    25,    -1,    27,    -1,    68,    -1,
      -1,    -1,    -1,    34,    35,     3,     4,     5,     6,     7,
       8,    42,    43,    -1,    -1,    -1,    47,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    21,
      22,    23,    -1,    25,    -1,    27,    -1,    68,    -1,    -1,
      -1,    -1,    34,    35,   112,   113,   114,   115,   116,   117,
      42,    43,    -1,    -1,    -1,    47,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    20,    21,    -1,
      23,    -1,    25,    -1,    27,    -1,    68,    -1,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    47,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,    23,
      -1,    25,    -1,    27,    -1,    68,    30,    -1,    -1,    -1,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    47,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    21,    -1,    23,    -1,
      25,    -1,    27,    -1,    68,    30,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    47,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    -1,    68,    -1,    -1,    -1,    -1,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    47,     9,    10,    11,    12,    13,    14,    15,    16,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    78,    79,    82,     0,     3,     4,     5,     6,     7,
       8,    38,    83,    87,    88,   126,    37,    94,   126,    67,
      36,    80,    67,    70,     9,     9,    40,    81,    92,    87,
       9,    71,    89,    68,    90,    91,   126,    93,    94,    89,
      10,    50,    97,    84,    85,    86,    94,    95,    67,    70,
       9,     9,    97,    70,    72,     9,    10,    11,    12,    13,
      14,    15,    16,    47,    68,    71,   118,   119,   120,   121,
     122,   124,    69,    70,     9,    17,    21,    23,    25,    27,
      34,    35,    41,    42,    43,    96,    99,   100,   102,   103,
     104,   105,   106,   107,   112,   117,   118,    90,     9,    89,
      68,    10,    68,    71,   118,    71,    98,   118,   125,    50,
      57,    58,    53,    54,    55,    56,    61,    62,    63,    64,
      60,    65,    66,    86,    68,    68,    68,    90,    68,   124,
     101,    37,   118,    74,    67,    67,    67,    89,    97,    84,
      72,    69,   125,   124,    69,   125,    70,    72,    70,    72,
     119,   120,   120,   121,   121,   121,   121,   121,   121,   122,
     122,    59,   123,   124,   123,   123,   118,   118,   118,    95,
       9,   108,    52,    67,    67,   113,   118,    97,    69,    69,
      70,    72,    72,    71,   118,   124,    69,    67,    69,    23,
      69,   118,    76,    75,    81,   124,   125,    90,   118,    90,
      68,    40,    44,   114,   113,   118,    72,    72,    95,    69,
      95,   118,    29,   109,   110,    45,    48,    49,   115,    46,
     116,    76,    18,    19,    90,    24,    69,    10,    31,   110,
     111,    74,    74,    74,   114,    74,   114,    90,    95,    67,
      73,    73,    41,   118,   118,   118,    95,   116,    95,    22,
      90,    90,    76,    76,    76,    76,    20,    95,    95,    30,
      30,    67,    67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    79,    80,    81,    82,    82,    83,    83,
      84,    84,    85,    85,    86,    87,    87,    88,    88,    89,
      89,    89,    90,    90,    91,    91,    92,    92,    93,    94,
      94,    95,    95,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    97,    97,    97,    97,    98,    98,    99,
     100,   101,   101,   102,   102,   103,   104,   105,   106,   106,
     107,   108,   109,   109,   110,   111,   112,   112,   113,   114,
     114,   115,   115,   115,   116,   117,   117,   118,   118,   119,
     119,   119,   120,   120,   120,   120,   120,   120,   120,   121,
     121,   121,   122,   122,   122,   122,   123,   123,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   125,   125,   126,   126,   126,   126,   126,   126
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     4,     2,     4,     3,     0,     6,     0,
       1,     0,     3,     1,     2,     3,     0,     5,     4,     3,
       5,     0,     3,     0,     5,     4,     2,     0,     6,     1,
       1,     2,     0,     2,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     2,     4,     4,     0,     5,     3,     2,
       2,     3,     0,     3,     3,     7,     8,     9,     7,    10,
       8,     1,     2,     1,     7,     6,     8,     6,     1,     3,
       1,     4,     4,     4,     4,     1,     0,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     1,     1,     3,
       4,     4,     6,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 392 "trabalho.y" /* yacc.c:1646  */
    {
      cout << "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n#include <string>\n#include <iostream>\n\nusing namespace std;\n\n" +  (yyvsp[0]).c << endl;
    }
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 397 "trabalho.y" /* yacc.c:1646  */
    { (yyval).c = (yyvsp[-3]).c + (yyvsp[-2]).c + (yyvsp[-1]).c + (yyvsp[0]).c;   }
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 401 "trabalho.y" /* yacc.c:1646  */
    { 
											(yyval).c = "";
											(yyval).c += DeclaraVarPipes();
											(yyval).c += "int main ()\n"; 
											(yyval).c += (yyvsp[0]).c;
										}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 411 "trabalho.y" /* yacc.c:1646  */
    { (yyval).c = "{\n "  + gera_variavellocal_temp() + (yyvsp[-1]).c + "\n}\n"; }
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 415 "trabalho.y" /* yacc.c:1646  */
    { (yyval).c += (yyvsp[-1]).c; }
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 416 "trabalho.y" /* yacc.c:1646  */
    { (yyval).c = ""; }
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 420 "trabalho.y" /* yacc.c:1646  */
    {
        string aux;
        if (nparams >= 1)
        {
          if ((yyvsp[-4]).v == "nada")
          {
            aux = "";
            (yyval).c = "void " + (yyvsp[-3]).v + "(" + (yyvsp[-1]).c + ");\n";
          }
          else
          {
            aux = " &RI";
            (yyval).c = "void " + (yyvsp[-3]).v + "(" + (yyvsp[-1]).c + "," + (yyvsp[-4]).c + aux + ");\n";
          }
          ir = ir + 1;
        }
        else
        {
          if((yyvsp[-4]).v == "nada")
          {
            (yyval).c = "void " + (yyvsp[-3]).v + "();\n";
          }
          else
          {
            aux = " &RI";
            (yyval).c = "void " + (yyvsp[-3]).v + "(" + (yyvsp[-4]).c + aux  + ");\n";
          }
          ir = ir + 1;
        }

        inclui_funcao((yyvsp[-3]).v,(yyvsp[-4]).t, (yyvsp[-1]).p);
        nfuncao++;
        nparams = 0;
      }
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 454 "trabalho.y" /* yacc.c:1646  */
    { }
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 458 "trabalho.y" /* yacc.c:1646  */
    { (yyval).p = ""; }
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 461 "trabalho.y" /* yacc.c:1646  */
    { (yyval).p += "#" + (yyvsp[0]).t.tipo_base; (yyval).c = (yyval).c + "," + (yyvsp[0]).c; }
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 462 "trabalho.y" /* yacc.c:1646  */
    { (yyval).p = "#" + (yyvsp[0]).t.tipo_base; }
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 466 "trabalho.y" /* yacc.c:1646  */
    {
        nparams++;
        (yyval).t = (yyvsp[-1]).t;
        (yyval).c = (yyvsp[-1]).c + " " + (yyvsp[0]).v;
        inclui_parametro((yyvsp[0]).v, (yyvsp[-1]).t);
        (yyval).p = "#" + (yyvsp[-1]).t.tipo_base;
        
    }
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 476 "trabalho.y" /* yacc.c:1646  */
    { (yyval).c = gera_varglobal_temp(); + "\n" + (yyvsp[0]).c; }
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 477 "trabalho.y" /* yacc.c:1646  */
    { 
                (yyval).c = "\n"; 
          }
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 484 "trabalho.y" /* yacc.c:1646  */
    {
        (yyval).t = (yyvsp[-4]).t;
        (yyvsp[-2]).t = (yyvsp[-4]).t;
        (yyvsp[-2]).t.ndim = (yyvsp[-1]).t.ndim;
        (yyvsp[-2]).t.tam_dim[0] = (yyvsp[-1]).t.tam_dim[0];
        (yyvsp[-2]).t.tam_dim[1] = (yyvsp[-1]).t.tam_dim[1];
        insere_varglobal((yyvsp[-2]).v , (yyvsp[-4]).t);
      }
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 493 "trabalho.y" /* yacc.c:1646  */
    {
        (yyval).t = (yyvsp[-3]).t;
        (yyvsp[-2]).t = (yyvsp[-3]).t;
        (yyvsp[-3]).t.ndim = (yyvsp[-1]).t.ndim;
        (yyvsp[-3]).t.tam_dim[0] = (yyvsp[-1]).t.tam_dim[0];
        (yyvsp[-3]).t.tam_dim[1] = (yyvsp[-1]).t.tam_dim[1];
        insere_varglobal((yyvsp[-2]).v , (yyvsp[-3]).t);
      }
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 506 "trabalho.y" /* yacc.c:1646  */
    { (yyval).t.ndim = 1; (yyval).t.tam_dim[0] = atoi(((yyvsp[-1]).v).c_str()); (yyval).t.tam_dim[1] = 0; }
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 508 "trabalho.y" /* yacc.c:1646  */
    { (yyval).t.ndim = 2; (yyval).t.tam_dim[0] = atoi(((yyvsp[-3]).v).c_str()); (yyval).t.tam_dim[1] = atoi(((yyvsp[-1]).v).c_str()); }
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 510 "trabalho.y" /* yacc.c:1646  */
    { (yyval).t.ndim = 0; (yyval).t.tam_dim[0] = 0; (yyval).t.tam_dim[1] = 0; }
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 515 "trabalho.y" /* yacc.c:1646  */
    {}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 516 "trabalho.y" /* yacc.c:1646  */
    {}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 521 "trabalho.y" /* yacc.c:1646  */
    {
        (yyval).t = (yyvsp[-4]).t;
        (yyvsp[-2]).t = (yyvsp[-4]).t;
        (yyvsp[-4]).t.ndim = (yyvsp[-1]).t.ndim;
        (yyvsp[-4]).t.tam_dim[0] = (yyvsp[-1]).t.tam_dim[0];
        (yyvsp[-4]).t.tam_dim[1] = (yyvsp[-1]).t.tam_dim[1];
        insere_varlocal((yyvsp[-2]).v , (yyvsp[-4]).t);

        if((yyvsp[0]).v != "")
        {
          Codigo_para_Var += (yyvsp[0]).c + (yyvsp[-2]).v + "=" + (yyvsp[0]).v + ";\n";
        }
      }
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 535 "trabalho.y" /* yacc.c:1646  */
    {
        (yyval).t = (yyvsp[-3]).t;
        (yyvsp[-2]).t = (yyvsp[-3]).t;
        (yyvsp[-3]).t.ndim = (yyvsp[-1]).t.ndim;
        (yyvsp[-3]).t.tam_dim[0] = (yyvsp[-1]).t.tam_dim[0];
        (yyvsp[-3]).t.tam_dim[1] = (yyvsp[-1]).t.tam_dim[1];

        insere_varlocal((yyvsp[-2]).v , (yyvsp[-3]).t);

        if ((yyvsp[0]).v != "")
        {
          if (((yyvsp[0]).v).c_str()[0] == '#')
          {
            Codigo_para_Var += quebra_codigo_lista((yyvsp[-2]).v, (yyvsp[0]).v , (yyvsp[0]).c);
          }
          else
          {
            Codigo_para_Var += (yyvsp[0]).c;
            Atributo ss, s1, s2, s3;
            s1 = (yyvsp[-2]);
            s2.v = "<-";
            s3 = (yyvsp[0]);
            gera_codigo_operador(ss, s1,s2 ,s3 );
            Codigo_para_Var += ss.c;
          }
        }
      }
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 565 "trabalho.y" /* yacc.c:1646  */
    { (yyval).c = (yyvsp[-1]).c + (yyvsp[0]).c; }
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 566 "trabalho.y" /* yacc.c:1646  */
    { (yyval).c = ""; }
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 570 "trabalho.y" /* yacc.c:1646  */
    {
      string retorno;
      string aux;
      if (nparams >= 1)
      {
        if ((yyvsp[-5]).v == "nada")
        {
          aux = "";
          (yyval).c = "void " + (yyvsp[-4]).v + "(" + (yyvsp[-2]).c + ")\n" + (yyvsp[0]).c;
        }
        else
        {
          aux = " &RI";
          (yyval).c = "void " + (yyvsp[-4]).v + "(" + (yyvsp[-2]).c + "," + (yyvsp[-5]).c + aux + ")\n" + (yyvsp[0]).c;
        }
        ir = ir + 1;
        
      }
      else
      {
        if((yyvsp[-5]).v == "nada")
        {
          (yyval).c = "void " + (yyvsp[-4]).v + "()\n" + (yyvsp[0]).c;
        }
        else
        {
          aux = " &RI";
          (yyval).c = "void " + (yyvsp[-4]).v + "(" + (yyvsp[-5]).c + aux  + ")\n" + (yyvsp[0]).c;
        }
        ir = ir + 1;
      }
      if(busca_funcao((yyvsp[-4]).v, &(yyvsp[-4]).t) == false)
      {
        inclui_funcao((yyvsp[-4]).v, (yyvsp[-5]).t, (yyvsp[-2]).p);
        nfuncao++;
      }
      
      nparams = 0;
    }
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 611 "trabalho.y" /* yacc.c:1646  */
    { (yyval).t = (yyvsp[0]).t; (yyval).c = (yyvsp[0]).c; }
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 612 "trabalho.y" /* yacc.c:1646  */
    { (yyval).t.tipo_base = "V"; }
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 615 "trabalho.y" /* yacc.c:1646  */
    { (yyval).c = (yyvsp[-1]).c + (yyvsp[0]).c; }
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 616 "trabalho.y" /* yacc.c:1646  */
    { (yyval).c = ""; }
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 619 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 620 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 621 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 622 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 623 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 624 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 625 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 626 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 627 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 628 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 631 "trabalho.y" /* yacc.c:1646  */
    { (yyval).v = (yyvsp[0]).v; (yyval).t = (yyvsp[0]).t; (yyval).c = (yyvsp[0]).c; }
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 632 "trabalho.y" /* yacc.c:1646  */
    { (yyval).v = (yyvsp[-1]).v; (yyval).c = (yyvsp[-1]).c; }
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 633 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 634 "trabalho.y" /* yacc.c:1646  */
    { (yyval).v = ""; (yyval).c = ""; }
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 637 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 638 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 641 "trabalho.y" /* yacc.c:1646  */
    { (yyval).c = (yyvsp[0]).c + "cin >> " + (yyvsp[0]).v + " ;\n"; }
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 646 "trabalho.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 650 "trabalho.y" /* yacc.c:1646  */
    {
    if (((yyvsp[0]).t.ndim != 0) && ((yyvsp[0]).t.tipo_base == "S"))
        {
            (yyval).c = (yyvsp[-2]).c + (yyvsp[0]).c + "cout << " + (yyvsp[0]).v  + ";\n ";
        }
        else
        {
            (yyval).c = (yyvsp[-2]).c + (yyvsp[0]).c + "cout << " + (yyvsp[0]).v  + ";\n ";
        }
}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 660 "trabalho.y" /* yacc.c:1646  */
    { (yyval) = Atributo(); }
#line 2348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 664 "trabalho.y" /* yacc.c:1646  */
    {
          (yyval).c = (yyvsp[-1]).c + "RI = " + (yyvsp[-1]).v + ";\nreturn;\n";
          //compara_resultado($2.t.tipo_base);  
      }
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 673 "trabalho.y" /* yacc.c:1646  */
    {
        string rotulo = gera_rotulo();
        string rotulo_aux = gera_rotulo();
        string teste = gera_temp("B");
        string codigo;
        codigo += (yyvsp[-4]).c;
        codigo += teste + " =" + (yyvsp[-4]).v + ";\n";

        codigo += "if (!(" + teste + ")) \n";
        codigo += "goto " + rotulo_aux + ";\n";

        codigo += rotulo + ": ";
        codigo += (yyvsp[-1]).c;

        codigo += (yyvsp[-4]).c;
        codigo += teste + " =" + (yyvsp[-4]).v + ";\n";

        codigo += "if (" + teste + " ) \n";
        codigo += "goto " + rotulo + ";\n";
        codigo += rotulo_aux + ": ";
        (yyval).c = codigo;
      }
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 698 "trabalho.y" /* yacc.c:1646  */
    {
    string varTeste = gera_temp( "B" );
    string labelFim = gera_rotulo();
    string labelTeste = gera_rotulo();

    (yyval).v = "";
    (yyval).c = "\t" + labelTeste + ":\n" + (yyvsp[-2]).c +
    "\t" + varTeste + " = !" + (yyvsp[-2]).v + ";\n" +
    "\tif( " + varTeste + " ) goto " + labelFim +";\n" +
    (yyvsp[-5]).c +
    "\tgoto " + labelTeste + ";\n" +
    "\t" + labelFim + ":\n";
}
#line 2402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 715 "trabalho.y" /* yacc.c:1646  */
    {

          string varTeste = gera_temp( "B" );
          string labelFim = gera_rotulo();
          string labelTeste = gera_rotulo();

          (yyval).v = "";
          (yyval).c = (yyvsp[-6]).c + "\t" + labelTeste + ":\n" + (yyvsp[-4]).c +
          "\t" + varTeste + " = !" + (yyvsp[-4]).v + ";\n" +
          "\tif( " + varTeste + " ) goto " + labelFim +";\n" +
          (yyvsp[-2]).c + (yyvsp[-1]).c +
          "\tgoto " + labelTeste + ";\n" +
          "\t" + labelFim + ":\n ;";
      }
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 733 "trabalho.y" /* yacc.c:1646  */
    {
      string codigo;
      string rotulo = gera_rotulo();
      string teste = gera_temp("B");

      codigo += (yyvsp[-4]).c;
      codigo += teste +" =  ! " + (yyvsp[-4]).v + " ;\n";
      codigo += "if("  +  teste  +   ")\n";
      codigo += "goto " + rotulo + ";\n";
      codigo += (yyvsp[-1]).c;
      codigo += rotulo + ": ;\n";

      (yyval).c = codigo;
    }
#line 2440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 748 "trabalho.y" /* yacc.c:1646  */
    {
      string codigo;
      string rotulo = gera_rotulo();
      string teste = gera_temp("B");
      string rotulo2 = gera_rotulo();

      codigo += (yyvsp[-7]).c;
      codigo += teste +" =  ! " + (yyvsp[-7]).v + " ;\n";
      codigo += "if("  +  teste  +   ")\n";
      codigo += "goto " + rotulo + ";\n";
      codigo += (yyvsp[-4]).c;
      codigo += "goto " + rotulo2 + ";\n";
      codigo += rotulo + ": ;\n";
      codigo += (yyvsp[-1]).c;
      codigo += rotulo2 + ": ;\n";

      (yyval).c = codigo;
    }
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 772 "trabalho.y" /* yacc.c:1646  */
    {

    string codigo;

    codigo += (yyvsp[-2]).c;
    codigo += (yyvsp[-1]).c;

    codigo += fim_switch +": ";
    (yyval).c = codigo;
}
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 787 "trabalho.y" /* yacc.c:1646  */
    {
		  fim_switch = gera_rotulo();
          id_switch = (yyvsp[0]).v;
          (yyval).c = (yyvsp[0]).c;
}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 794 "trabalho.y" /* yacc.c:1646  */
    { (yyval).c = (yyvsp[-1]).c + (yyvsp[0]).c; }
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 795 "trabalho.y" /* yacc.c:1646  */
    { (yyval).c = (yyvsp[0]).c; }
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 799 "trabalho.y" /* yacc.c:1646  */
    {
    string codigo;
    string endcase = gera_rotulo();

    codigo += "\nif (" + id_switch +" != "+ (yyvsp[-5]).v + ") goto "+
    endcase+";\n";
    codigo += (yyvsp[-3]).c;
    codigo += (yyvsp[-2]).c;
    codigo+= "goto "+fim_switch + "; \n";
    codigo+= endcase + ": \n";

    (yyval).c = codigo;
}
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 815 "trabalho.y" /* yacc.c:1646  */
    {
    string codigo;
    codigo += (yyvsp[-3]).c;
    codigo += (yyvsp[-2]).c;
    (yyval).c = codigo;

}
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 826 "trabalho.y" /* yacc.c:1646  */
    {
			  
            Atributo inicio, condicao, passo, cmd;
			
            inicio.c =  (yyvsp[-5]).c + (yyvsp[-3]).c +"  x_" + pipeAtivo + " = " + (yyvsp[-5]).v + ";\n";
            condicao.t.nome = "bool";
            condicao.v = gera_temp("B"); 
            condicao.c = "  " + condicao.v + " = " + "x_" + pipeAtivo + " <= " + (yyvsp[-3]).v + ";\n";
            passo.c = RotuloFimPipe + ":\n" + "  x_" + pipeAtivo + " = x_" + pipeAtivo + " + 1;\n";
            cmd.c = (yyvsp[-1]).c + (yyvsp[0]).c;
            geraCodigoFor( &(yyval), inicio, condicao, passo, cmd );
            pipeAtivo = ""; 
            }
#line 2548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 841 "trabalho.y" /* yacc.c:1646  */
    {
			TAM_ARRAY=	(yyvsp[-3]).p;
			
			
			Atributo inicio, condicao, passo, cmd;
            inicio.c =  (yyvsp[-3]).c +"  x_" + pipeAtivo + " = 0;\n";
            condicao.t.nome = "bool";
            condicao.v = gera_temp("B"); 
            condicao.c = "  " + condicao.v + " = " + "x_" + pipeAtivo + " < " + TAM_ARRAY + ";\n";
            passo.c = RotuloFimPipe + ":\n" + "  x_" + pipeAtivo + " = x_" + pipeAtivo + " + 1;\n";
            cmd.c = (yyvsp[-1]).c + (yyvsp[0]).c;
			geraCodigoForArray( &(yyval), inicio, condicao, passo, cmd );
            pipeAtivo = "";
            
			}
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 859 "trabalho.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[0]);
			lastpipe = (yyvsp[0]).v;
			pipeAtivo =  (yyvsp[0]).t.nome;
			RotuloFimPipe = gera_rotulo();
			(yyval).p=(yyvsp[0]).p;
			
		}
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 871 "trabalho.y" /* yacc.c:1646  */
    { (yyval).c = (yyvsp[-1]).c + (yyvsp[0]).c; }
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 873 "trabalho.y" /* yacc.c:1646  */
    { (yyval) = Atributo(); }
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 876 "trabalho.y" /* yacc.c:1646  */
    { geraCodigoFilter( &(yyval), (yyvsp[-1]) ); }
#line 2599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 877 "trabalho.y" /* yacc.c:1646  */
    { geraCodigoFirstN(&(yyval), (yyvsp[-1])); }
#line 2605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 878 "trabalho.y" /* yacc.c:1646  */
    { geraCodigoLastN(&(yyval), (yyvsp[-1])); }
#line 2611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 882 "trabalho.y" /* yacc.c:1646  */
    { (yyval).c = (yyvsp[-1]).c; }
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 888 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 889 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 892 "trabalho.y" /* yacc.c:1646  */
    { (yyval).c = (yyvsp[-2]).c;  (yyvsp[-1]).v = "<-"; gera_codigo_operador((yyval),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0])); }
#line 2635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 893 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 896 "trabalho.y" /* yacc.c:1646  */
    { gera_codigo_operador((yyval),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0])); }
#line 2647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 897 "trabalho.y" /* yacc.c:1646  */
    { gera_codigo_operador((yyval),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0])); }
#line 2653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 898 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 901 "trabalho.y" /* yacc.c:1646  */
    { gera_codigo_operador((yyval),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0])); }
#line 2665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 902 "trabalho.y" /* yacc.c:1646  */
    { gera_codigo_operador((yyval),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0])); }
#line 2671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 903 "trabalho.y" /* yacc.c:1646  */
    { gera_codigo_operador((yyval),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0])); }
#line 2677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 904 "trabalho.y" /* yacc.c:1646  */
    { gera_codigo_operador((yyval),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0])); }
#line 2683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 905 "trabalho.y" /* yacc.c:1646  */
    { gera_codigo_operador((yyval),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0])); }
#line 2689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 906 "trabalho.y" /* yacc.c:1646  */
    { gera_codigo_operador((yyval),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0])); }
#line 2695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 907 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 910 "trabalho.y" /* yacc.c:1646  */
    { gera_codigo_operador((yyval),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0])); }
#line 2707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 911 "trabalho.y" /* yacc.c:1646  */
    { gera_codigo_operador((yyval),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0])); }
#line 2713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 912 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 915 "trabalho.y" /* yacc.c:1646  */
    { gera_codigo_operador((yyval),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0])); }
#line 2725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 916 "trabalho.y" /* yacc.c:1646  */
    { gera_codigo_operador((yyval),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0])); }
#line 2731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 917 "trabalho.y" /* yacc.c:1646  */
    { gera_codigo_operador((yyval),(yyvsp[-2]),(yyvsp[-1]),(yyvsp[0])); }
#line 2737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 918 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 921 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 922 "trabalho.y" /* yacc.c:1646  */
    { }
#line 2755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 926 "trabalho.y" /* yacc.c:1646  */
    {
      busca_variavelglobal((yyvsp[0]).v, & (yyvsp[0]).t);
      busca_varlocal((yyvsp[0]).v, & (yyvsp[0]).t);
      busca_varparametro((yyvsp[0]).v, & (yyvsp[0]).t);

      (yyval).t = (yyvsp[0]).t;
    }
#line 2767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 934 "trabalho.y" /* yacc.c:1646  */
    {
      busca_funcao((yyvsp[-2]).v, & (yyvsp[-2]).t);
      (yyval) = (yyvsp[-2]);
      (yyval).v = gera_temp((yyvsp[-2]).t.tipo_base);
      (yyval).c = quebra_codigo_parametro((yyval).v, (yyvsp[-2]).v,  "" , "", (yyvsp[-2]).t.tipo_base);
      compara_parametros((yyvsp[-2]).v, "");
    }
#line 2779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 942 "trabalho.y" /* yacc.c:1646  */
    {

      busca_funcao((yyvsp[-3]).v, & (yyvsp[-3]).t);
      (yyval) = (yyvsp[-3]);

      if ((yyvsp[-3]).t.tipo_base == "V")
      {
        (yyval).v = "";
      }
      else
      {
        (yyval).v = gera_temp((yyvsp[-3]).t.tipo_base);
      }

      (yyval).c = quebra_codigo_parametro((yyval).v, (yyvsp[-3]).v,  (yyvsp[-1]).v , (yyvsp[-1]).c, (yyvsp[-3]).t.tipo_base);

      compara_parametros((yyvsp[-3]).v, (yyvsp[-1]).p);
    }
#line 2802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 961 "trabalho.y" /* yacc.c:1646  */
    {
		
	  (yyval).p = (yyvsp[-1]).v;
      busca_variavelglobal((yyvsp[-3]).v, & (yyvsp[-3]).t);
      busca_varlocal((yyvsp[-3]).v, & (yyvsp[-3]).t);  

      (yyval).t = (yyvsp[-3]).t;

      (yyval).c = (yyvsp[-1]).c;

      string aux = gera_temp((yyvsp[-1]).t.tipo_base);

      if ((yyvsp[-1]).t.ndim != 0 )
      {
        (yyval).c += aux + " = " + (yyvsp[-1]).v + ";\n";
        (yyvsp[-1]).v = aux;
      }

      if ((yyvsp[-3]).t.tipo_base == "S")
      {
        (yyval).c += aux + " = " + (yyvsp[-1]).v + "* 256" + ";\n";
        (yyvsp[-1]).v = aux;

        (yyval).v =  (yyvsp[-3]).v + "[" + (yyvsp[-1]).v + "]";
      }
      else
      {
        (yyval).v =  (yyvsp[-3]).v + "[" + (yyvsp[-1]).v + "]";
      }
    }
#line 2837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 992 "trabalho.y" /* yacc.c:1646  */
    {
      busca_variavelglobal((yyvsp[-5]).v, & (yyvsp[-5]).t);
      busca_varlocal((yyvsp[-5]).v, & (yyvsp[-5]).t);
      (yyval).t = (yyvsp[-5]).t;

      string codigo;

      string i = gera_temp("I");
      codigo += i + " = " + (yyvsp[-3]).v + ";\n";
      codigo += i + " = " + i + " * " + inteiro_string((yyvsp[-5]).t.tam_dim[1]) + ";\n";

      Atributo ss, s1, s2, s3;
      s1.v = i;
      s1.t.tipo_base = "I";
      s2.v = "+";
      s3 = (yyvsp[-1]);
      gera_codigo_operador(ss,s1,s2,s3);

      codigo += ss.c;

      (yyval).c = (yyvsp[-3]).c + (yyvsp[-1]).c + codigo;

      string aux = gera_temp((yyvsp[-3]).t.tipo_base);

      if ((yyvsp[-5]).t.tipo_base == "S")
      {
        (yyval).c += aux + " = " + ss.v + "* 256" + ";\n";
        (yyvsp[-3]).v = aux;

        (yyval).v =  (yyvsp[-5]).v + "[" + aux + "]";
      }
      else
      {
        (yyval).v =  (yyvsp[-5]).v + "[" + ss.v + "]";
      }

    }
#line 2879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1030 "trabalho.y" /* yacc.c:1646  */
    {
      (yyval).t.tipo_base = (yyvsp[-1]).t.tipo_base;
      (yyval).v = (yyvsp[-1]).v;
      (yyval).c =  (yyvsp[-1]).c;
    }
#line 2889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1035 "trabalho.y" /* yacc.c:1646  */
    { (yyval).t.tipo_base = "I";  }
#line 2895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1036 "trabalho.y" /* yacc.c:1646  */
    { (yyval).t.tipo_base = "R"; }
#line 2901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1037 "trabalho.y" /* yacc.c:1646  */
    { (yyval).t.tipo_base = "D"; }
#line 2907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1038 "trabalho.y" /* yacc.c:1646  */
    { (yyval).v = inteiro_string(1); (yyval).t.tipo_base = "B"; }
#line 2913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1039 "trabalho.y" /* yacc.c:1646  */
    { (yyval).v = inteiro_string(0); (yyval).t.tipo_base = "B"; }
#line 2919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1040 "trabalho.y" /* yacc.c:1646  */
    { (yyval).t.tipo_base = "C"; }
#line 2925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1041 "trabalho.y" /* yacc.c:1646  */
    { (yyval).t.tipo_base = "S"; }
#line 2931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1043 "trabalho.y" /* yacc.c:1646  */
    { 
		if( pipeAtivo != "" )
				(yyval) = Atributo( "x_" + pipeAtivo, pipeAtivo );
		else
				erro( "Ei! Vamos aprender a programar hein!\n A variavel 'x' so pode ser usada dentro de pipe" );
    }
#line 2942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1053 "trabalho.y" /* yacc.c:1646  */
    {
		(yyval).v += "#" + (yyvsp[0]).v;
		(yyval).c += "#" + (yyvsp[0]).c;
		(yyval).p += "#" + (yyvsp[0]).t.tipo_base;
	}
#line 2952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1059 "trabalho.y" /* yacc.c:1646  */
    {
		(yyval).v = "#" + (yyvsp[0]).v;
		(yyval).c = "#" + (yyvsp[0]).c;
		(yyval).p += "#" + (yyvsp[0]).t.tipo_base;
	}
#line 2962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1069 "trabalho.y" /* yacc.c:1646  */
    { (yyval).t.tipo_base =  "I"; (yyval).v = (yyvsp[0]).v; (yyval).c = "int"; }
#line 2968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1070 "trabalho.y" /* yacc.c:1646  */
    { (yyval).t.tipo_base = "R"; (yyval).v = (yyvsp[0]).v; (yyval).c = "float"; }
#line 2974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1071 "trabalho.y" /* yacc.c:1646  */
    { (yyval).t.tipo_base = "D"; (yyval).v = (yyvsp[0]).v; (yyval).c = "double"; }
#line 2980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1072 "trabalho.y" /* yacc.c:1646  */
    { (yyval).t.tipo_base = "B"; (yyval).v = (yyvsp[0]).v; (yyval).c = "char"; }
#line 2986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1073 "trabalho.y" /* yacc.c:1646  */
    { (yyval).t.tipo_base = "C"; (yyval).v = (yyvsp[0]).v; (yyval).c = "char"; }
#line 2992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1074 "trabalho.y" /* yacc.c:1646  */
    { (yyval).t.tipo_base = "S"; (yyval).v = (yyvsp[0]).v; (yyval).c = "string"; }
#line 2998 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3002 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 1078 "trabalho.y" /* yacc.c:1906  */


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
		erro("'" + s1.v + "'" + " nao foi declarada.\nTu não declarou e quer usar. Deixa de ser esperto.");
    }
    else if (s3.t.tipo_base == "")
    {
      erro("'" + s3.v + "'" + " nao foi declarada.\nTu não declarou e quer usar. Deixa de ser esperto.");
    }
    else
    {
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

void geraCodigoForArray( Atributo* SS, const Atributo& inicial,const Atributo& condicao,const Atributo& passo,const Atributo& cmds ) {

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
		ss +="// *uso do pipe \n";
		ss +="double x_double;\n";
		ss +="float x_float;\n";
		ss +="char x_char;\n";
		ss +="int x_int;\n"; 
		
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

