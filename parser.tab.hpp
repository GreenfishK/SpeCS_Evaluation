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

#ifndef YY_YY_PARSER_TAB_HPP_INCLUDED
# define YY_YY_PARSER_TAB_HPP_INCLUDED
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
    select_token = 258,
    distinct_token = 259,
    where_token = 260,
    as_token = 261,
    union_token = 262,
    optional_token = 263,
    minus_token = 264,
    prefix_token = 265,
    schema_token = 266,
    superquery_token = 267,
    subquery_token = 268,
    limit_token = 269,
    from_token = 270,
    named_token = 271,
    order_by_token = 272,
    asc_token = 273,
    desc_token = 274,
    filter_token = 275,
    regex_token = 276,
    group_by_token = 277,
    and_token = 278,
    or_token = 279,
    graph_token = 280,
    builtin_str_token = 281,
    noteq_token = 282,
    bind_token = 283,
    round_token = 284,
    offset_token = 285,
    abs_token = 286,
    datatype_token = 287,
    values_token = 288,
    contains_token = 289,
    lcase_token = 290,
    is_literal_token = 291,
    is_uri_token = 292,
    bound_token = 293,
    var_token = 294,
    iri_token = 295,
    str_token = 296,
    string_token = 297,
    blank_node_token = 298,
    int_token = 299,
    geq_token = 300,
    leq_token = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "parser.ypp"

  string *s;
  Pattern *p;
  RDFValue *v;
  vector <RDFValue* > *v1;
  vector <pair<RDFValue*, vector<RDFValue*> > > *v2;
  vector <Expression*> *v3;
  map<string, string> *m;
  Query *q;
  Expression *e;
  int i;
  pair<set<string>, set<string> > *ss;
  pair<int, int> *pii;

#line 119 "parser.tab.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */
