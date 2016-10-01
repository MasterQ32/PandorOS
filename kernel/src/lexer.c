/* Generated by re2c 0.16 on Sat Oct  1 12:32:12 2016 */
#line 1 "src/lexer.re"
#include "basic/lexer.h"
#include "string.h"
#include <stdbool.h>

struct token lex(const char *input)
{
	int len = str_len(input);
	int marker;
	int ctxmarker;
	int index = 0;
	
	// Mark all variables as used
	(void)len;
	(void)marker;
	(void)ctxmarker;
	(void)index;
	
#define YYCTYPE        char
#define YYPEEK()       input[index]
#define YYSKIP()       index++
#define YYBACKUP()     marker = index
#define YYBACKUPCTX()  ctxmarker = index
#define YYRESTORE()    index = marker
#define YYRESTORECTX() index = ctxmarker
#define YYLESSTHAN(n)  len - index < n
#define YYFILL(n)      {}
	
#line 31 "src/lexer.c"
{
	char yych;
	unsigned int yyaccept = 0;
	yych = YYPEEK ();
	switch (yych) {
	case '\t':	goto yy4;
	case ' ':	goto yy7;
	case '"':	goto yy8;
	case '(':	goto yy9;
	case ')':	goto yy11;
	case '*':	goto yy13;
	case '+':	goto yy15;
	case ',':	goto yy17;
	case '-':	goto yy19;
	case '/':	goto yy21;
	case '0':	goto yy23;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy25;
	case 'A':	goto yy27;
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':	goto yy29;
	case 'N':	goto yy30;
	case 'S':	goto yy31;
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy32;
	case 's':	goto yy33;
	default:	goto yy2;
	}
yy2:
	YYSKIP ();
yy3:
#line 42 "src/lexer.re"
	{ return (struct token){ 0, 0 }; }
#line 116 "src/lexer.c"
yy4:
	YYSKIP ();
	yych = YYPEEK ();
yy5:
	switch (yych) {
	case '\t':
	case ' ':	goto yy4;
	default:	goto yy6;
	}
yy6:
#line 55 "src/lexer.re"
	{ return (struct token){ -1, index }; }
#line 129 "src/lexer.c"
yy7:
	yyaccept = 0;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'A':	goto yy34;
	case 'O':	goto yy36;
	case 'X':	goto yy37;
	default:	goto yy5;
	}
yy8:
	yyaccept = 1;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	goto yy39;
yy9:
	YYSKIP ();
#line 49 "src/lexer.re"
	{ return (struct token){ TOK_BRO, index }; }
#line 151 "src/lexer.c"
yy11:
	YYSKIP ();
#line 50 "src/lexer.re"
	{ return (struct token){ TOK_BRC, index }; }
#line 156 "src/lexer.c"
yy13:
	YYSKIP ();
#line 47 "src/lexer.re"
	{ return (struct token){ TOK_TIMES, index }; }
#line 161 "src/lexer.c"
yy15:
	YYSKIP ();
#line 45 "src/lexer.re"
	{ return (struct token){ TOK_PLUS, index }; }
#line 166 "src/lexer.c"
yy17:
	YYSKIP ();
#line 54 "src/lexer.re"
	{ return (struct token){ TOK_COMMA, index }; }
#line 171 "src/lexer.c"
yy19:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '>':	goto yy42;
	default:	goto yy20;
	}
yy20:
#line 46 "src/lexer.re"
	{ return (struct token){ TOK_MINUS, index }; }
#line 181 "src/lexer.c"
yy21:
	YYSKIP ();
#line 48 "src/lexer.re"
	{ return (struct token){ TOK_DIVIDE, index }; }
#line 186 "src/lexer.c"
yy23:
	yyaccept = 2;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'X':
	case 'x':	goto yy44;
	default:	goto yy26;
	}
yy24:
#line 43 "src/lexer.re"
	{ return (struct token){ TOK_INTEGER, index }; }
#line 200 "src/lexer.c"
yy25:
	YYSKIP ();
	yych = YYPEEK ();
yy26:
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy25;
	default:	goto yy24;
	}
yy27:
	yyaccept = 3;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy45;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy47;
	case 'n':	goto yy49;
	default:	goto yy28;
	}
yy28:
#line 52 "src/lexer.re"
	{ return (struct token){ TOK_VAR, index }; }
#line 292 "src/lexer.c"
yy29:
	yyaccept = 3;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy45;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy47;
	default:	goto yy28;
	}
yy30:
	yyaccept = 3;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy45;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy47;
	case 'o':	goto yy50;
	default:	goto yy28;
	}
yy31:
	yyaccept = 3;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy45;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy47;
	case 'T':
	case 't':	goto yy51;
	default:	goto yy28;
	}
yy32:
	yyaccept = 1;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy45;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy47;
	default:	goto yy3;
	}
yy33:
	yyaccept = 1;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy45;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy47;
	case 'T':
	case 't':	goto yy51;
	default:	goto yy3;
	}
yy34:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'n':	goto yy52;
	default:	goto yy35;
	}
yy35:
	YYRESTORE ();
	switch (yyaccept) {
	case 0: 	goto yy6;
	case 1: 	goto yy3;
	case 2: 	goto yy24;
	default:	goto yy28;
	}
yy36:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'r':	goto yy53;
	default:	goto yy35;
	}
yy37:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'o':	goto yy54;
	default:	goto yy35;
	}
yy38:
	YYSKIP ();
	yych = YYPEEK ();
yy39:
	switch (yych) {
	case '"':	goto yy40;
	default:	goto yy38;
	}
yy40:
	YYSKIP ();
#line 56 "src/lexer.re"
	{ return (struct token){ TOK_STRING, index }; }
#line 689 "src/lexer.c"
yy42:
	YYSKIP ();
#line 51 "src/lexer.re"
	{ return (struct token){ TOK_ASS, index }; }
#line 694 "src/lexer.c"
yy44:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy55;
	default:	goto yy35;
	}
yy45:
	YYSKIP ();
#line 53 "src/lexer.re"
	{ return (struct token){ TOK_FUN, index }; }
#line 727 "src/lexer.c"
yy47:
	YYSKIP ();
	yych = YYPEEK ();
yy48:
	switch (yych) {
	case '(':	goto yy45;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy47;
	default:	goto yy35;
	}
yy49:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 's':	goto yy29;
	default:	goto yy48;
	}
yy50:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 't':	goto yy58;
	default:	goto yy48;
	}
yy51:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'R':
	case 'r':	goto yy59;
	default:	goto yy48;
	}
yy52:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'd':	goto yy60;
	default:	goto yy35;
	}
yy53:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy61;
	default:	goto yy35;
	}
yy54:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'r':	goto yy63;
	default:	goto yy35;
	}
yy55:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy55;
	default:	goto yy57;
	}
yy57:
#line 44 "src/lexer.re"
	{ return (struct token){ 2, index }; }
#line 872 "src/lexer.c"
yy58:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy64;
	default:	goto yy48;
	}
yy59:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy29;
	default:	goto yy48;
	}
yy60:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy66;
	default:	goto yy35;
	}
yy61:
	YYSKIP ();
#line 60 "src/lexer.re"
	{ return (struct token){ TOK_OR, index }; }
#line 907 "src/lexer.c"
yy63:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy68;
	default:	goto yy35;
	}
yy64:
	YYSKIP ();
#line 61 "src/lexer.re"
	{ return (struct token){ TOK_NOT, index }; }
#line 919 "src/lexer.c"
yy66:
	YYSKIP ();
#line 58 "src/lexer.re"
	{ return (struct token){ TOK_AND, index }; }
#line 924 "src/lexer.c"
yy68:
	YYSKIP ();
#line 59 "src/lexer.re"
	{ return (struct token){ TOK_XOR, index }; }
#line 929 "src/lexer.c"
}
#line 62 "src/lexer.re"

}