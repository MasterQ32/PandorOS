/* Generated by re2c 0.16 on Sat Oct  8 11:47:26 2016 */
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
#define YYLESSTHAN(n)  ((len - index) < (n))
#define YYFILL(n)      {}
	
#line 31 "src/lexer.c"
{
	char yych;
	unsigned int yyaccept = 0;
	yych = YYPEEK ();
	switch (yych) {
	case '\t':	goto yy4;
	case 0x1A:	goto yy7;
	case ' ':	goto yy9;
	case '!':	goto yy10;
	case '"':	goto yy11;
	case '(':	goto yy12;
	case ')':	goto yy14;
	case '*':	goto yy16;
	case '+':	goto yy18;
	case ',':	goto yy20;
	case '-':	goto yy22;
	case '/':	goto yy24;
	case '0':	goto yy26;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy28;
	case ':':	goto yy30;
	case '<':	goto yy32;
	case '=':	goto yy34;
	case '>':	goto yy36;
	case 'A':	goto yy38;
	case 'B':
	case 'C':
	case 'D':
	case 'G':
	case 'H':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'P':
	case 'Q':
	case 'R':
	case 'U':
	case 'V':
	case 'X':
	case 'Y':
	case 'Z':	goto yy40;
	case 'E':	goto yy41;
	case 'F':	goto yy42;
	case 'I':	goto yy43;
	case 'N':	goto yy44;
	case 'O':	goto yy45;
	case 'S':	goto yy46;
	case 'T':	goto yy47;
	case 'W':	goto yy48;
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
	case 'z':	goto yy49;
	case 's':	goto yy52;
	default:	goto yy2;
	}
yy2:
	YYSKIP ();
yy3:
#line 43 "src/lexer.re"
	{ return (struct token){ TOKEN_INVALID, 0 }; }
#line 122 "src/lexer.c"
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
#line 57 "src/lexer.re"
	{ return (struct token){ TOKEN_WHITESPACE, index }; }
#line 135 "src/lexer.c"
yy7:
	YYSKIP ();
#line 53 "src/lexer.re"
	{ return (struct token){ TOK_ASS, index }; }
#line 140 "src/lexer.c"
yy9:
	yyaccept = 0;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'A':	goto yy53;
	case 'O':	goto yy55;
	case 'X':	goto yy56;
	default:	goto yy5;
	}
yy10:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '=':	goto yy57;
	default:	goto yy3;
	}
yy11:
	yyaccept = 1;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	if (yych <= 0x00) goto yy3;
	goto yy60;
yy12:
	YYSKIP ();
#line 51 "src/lexer.re"
	{ return (struct token){ TOK_BRO, index }; }
#line 170 "src/lexer.c"
yy14:
	YYSKIP ();
#line 52 "src/lexer.re"
	{ return (struct token){ TOK_BRC, index }; }
#line 175 "src/lexer.c"
yy16:
	YYSKIP ();
#line 49 "src/lexer.re"
	{ return (struct token){ TOK_TIMES, index }; }
#line 180 "src/lexer.c"
yy18:
	YYSKIP ();
#line 47 "src/lexer.re"
	{ return (struct token){ TOK_PLUS, index }; }
#line 185 "src/lexer.c"
yy20:
	YYSKIP ();
#line 56 "src/lexer.re"
	{ return (struct token){ TOK_COMMA, index }; }
#line 190 "src/lexer.c"
yy22:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '>':	goto yy7;
	default:	goto yy23;
	}
yy23:
#line 48 "src/lexer.re"
	{ return (struct token){ TOK_MINUS, index }; }
#line 200 "src/lexer.c"
yy24:
	YYSKIP ();
#line 50 "src/lexer.re"
	{ return (struct token){ TOK_DIVIDE, index }; }
#line 205 "src/lexer.c"
yy26:
	yyaccept = 2;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'x':	goto yy63;
	default:	goto yy29;
	}
yy27:
#line 45 "src/lexer.re"
	{ return (struct token){ TOK_INTEGER, index }; }
#line 218 "src/lexer.c"
yy28:
	YYSKIP ();
	yych = YYPEEK ();
yy29:
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
	case '9':	goto yy28;
	default:	goto yy27;
	}
yy30:
	YYSKIP ();
#line 46 "src/lexer.re"
	{ return (struct token){ TOKEN_EOL, index }; }
#line 240 "src/lexer.c"
yy32:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '=':	goto yy64;
	default:	goto yy33;
	}
yy33:
#line 74 "src/lexer.re"
	{ return (struct token){ TOK_LESS, index }; }
#line 250 "src/lexer.c"
yy34:
	YYSKIP ();
#line 78 "src/lexer.re"
	{ return (struct token){ TOK_EQ, index }; }
#line 255 "src/lexer.c"
yy36:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '=':	goto yy66;
	default:	goto yy37;
	}
yy37:
#line 76 "src/lexer.re"
	{ return (struct token){ TOK_GREATER, index }; }
#line 265 "src/lexer.c"
yy38:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '(':	goto yy68;
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
	case 'z':	goto yy49;
	case 'n':	goto yy70;
	default:	goto yy39;
	}
yy39:
#line 54 "src/lexer.re"
	{ return (struct token){ TOK_VAR, index }; }
#line 337 "src/lexer.c"
yy40:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy68;
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
	case 'z':	goto yy49;
	default:	goto yy39;
	}
yy41:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy68;
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
	case 'z':	goto yy49;
	case 'l':	goto yy71;
	case 'n':	goto yy72;
	default:	goto yy39;
	}
yy42:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy68;
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
	case 'z':	goto yy49;
	case 'a':	goto yy73;
	default:	goto yy39;
	}
yy43:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy68;
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
	case 'z':	goto yy49;
	case 'f':	goto yy74;
	default:	goto yy39;
	}
yy44:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy68;
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
	case 'z':	goto yy49;
	case 'o':	goto yy76;
	default:	goto yy39;
	}
yy45:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy68;
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
	case 'z':	goto yy49;
	case 'f':	goto yy77;
	case 'n':	goto yy78;
	default:	goto yy39;
	}
yy46:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy68;
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
	case 'z':	goto yy49;
	case 'T':
	case 't':	goto yy80;
	default:	goto yy39;
	}
yy47:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy68;
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
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy49;
	case 'h':	goto yy81;
	case 'r':	goto yy82;
	default:	goto yy39;
	}
yy48:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy68;
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
	case 'z':	goto yy49;
	case 'h':	goto yy83;
	default:	goto yy39;
	}
yy49:
	YYSKIP ();
	yych = YYPEEK ();
yy50:
	switch (yych) {
	case '(':	goto yy68;
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
	case 'z':	goto yy49;
	default:	goto yy51;
	}
yy51:
#line 72 "src/lexer.re"
	{ return (struct token){ TOK_ORDER, index }; }
#line 1032 "src/lexer.c"
yy52:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'T':
	case 't':	goto yy80;
	default:	goto yy50;
	}
yy53:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'n':	goto yy84;
	default:	goto yy54;
	}
yy54:
	YYRESTORE ();
	switch (yyaccept) {
	case 0: 	goto yy6;
	case 1: 	goto yy3;
	default:	goto yy27;
	}
yy55:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'r':	goto yy85;
	default:	goto yy54;
	}
yy56:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'o':	goto yy86;
	default:	goto yy54;
	}
yy57:
	YYSKIP ();
#line 79 "src/lexer.re"
	{ return (struct token){ TOK_NEQ, index }; }
#line 1073 "src/lexer.c"
yy59:
	YYSKIP ();
	yych = YYPEEK ();
yy60:
	switch (yych) {
	case 0x00:	goto yy54;
	case '"':	goto yy61;
	default:	goto yy59;
	}
yy61:
	YYSKIP ();
#line 58 "src/lexer.re"
	{ return (struct token){ TOK_STRING, index }; }
#line 1087 "src/lexer.c"
yy63:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '0':	goto yy87;
	default:	goto yy54;
	}
yy64:
	YYSKIP ();
#line 75 "src/lexer.re"
	{ return (struct token){ TOK_LESSEQ, index }; }
#line 1099 "src/lexer.c"
yy66:
	YYSKIP ();
#line 77 "src/lexer.re"
	{ return (struct token){ TOK_GREATEREQ, index }; }
#line 1104 "src/lexer.c"
yy68:
	YYSKIP ();
#line 55 "src/lexer.re"
	{ return (struct token){ TOK_FUN, index }; }
#line 1109 "src/lexer.c"
yy70:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 's':	goto yy40;
	default:	goto yy50;
	}
yy71:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 's':	goto yy88;
	default:	goto yy50;
	}
yy72:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'd':	goto yy89;
	default:	goto yy50;
	}
yy73:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'l':	goto yy91;
	default:	goto yy50;
	}
yy74:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '(':	goto yy68;
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
	case 'z':	goto yy49;
	default:	goto yy75;
	}
yy75:
#line 67 "src/lexer.re"
	{ return (struct token){ TOK_CFLOW, index }; }
#line 1209 "src/lexer.c"
yy76:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 't':	goto yy92;
	default:	goto yy50;
	}
yy77:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'f':	goto yy78;
	default:	goto yy50;
	}
yy78:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '(':	goto yy68;
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
	case 'z':	goto yy49;
	default:	goto yy79;
	}
yy79:
#line 59 "src/lexer.re"
	{ return (struct token){ TOK_BOOL, index }; }
#line 1295 "src/lexer.c"
yy80:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'R':
	case 'r':	goto yy93;
	default:	goto yy50;
	}
yy81:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'e':	goto yy94;
	default:	goto yy50;
	}
yy82:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'u':	goto yy95;
	default:	goto yy50;
	}
yy83:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'i':	goto yy96;
	default:	goto yy50;
	}
yy84:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'd':	goto yy97;
	default:	goto yy54;
	}
yy85:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy98;
	default:	goto yy54;
	}
yy86:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'r':	goto yy100;
	default:	goto yy54;
	}
yy87:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '0':	goto yy101;
	default:	goto yy54;
	}
yy88:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'e':	goto yy103;
	default:	goto yy50;
	}
yy89:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '(':	goto yy68;
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
	case 'z':	goto yy49;
	default:	goto yy90;
	}
yy90:
#line 70 "src/lexer.re"
	{ return (struct token){ TOK_CFLOW, index }; }
#line 1431 "src/lexer.c"
yy91:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 's':	goto yy95;
	default:	goto yy50;
	}
yy92:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy105;
	default:	goto yy50;
	}
yy93:
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
	case '9':	goto yy40;
	default:	goto yy50;
	}
yy94:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'n':	goto yy107;
	default:	goto yy50;
	}
yy95:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'e':	goto yy78;
	default:	goto yy50;
	}
yy96:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'l':	goto yy109;
	default:	goto yy50;
	}
yy97:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy110;
	default:	goto yy54;
	}
yy98:
	YYSKIP ();
#line 63 "src/lexer.re"
	{ return (struct token){ TOK_OR, index }; }
#line 1494 "src/lexer.c"
yy100:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy112;
	default:	goto yy54;
	}
yy101:
	YYSKIP ();
#line 44 "src/lexer.re"
	{ return (struct token){ TOKEN_EMPTY, 0 }; }
#line 1506 "src/lexer.c"
yy103:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '(':	goto yy68;
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
	case 'z':	goto yy49;
	default:	goto yy104;
	}
yy104:
#line 69 "src/lexer.re"
	{ return (struct token){ TOK_CFLOW, index }; }
#line 1578 "src/lexer.c"
yy105:
	YYSKIP ();
#line 64 "src/lexer.re"
	{ return (struct token){ TOK_NOT, index }; }
#line 1583 "src/lexer.c"
yy107:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '(':	goto yy68;
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
	case 'z':	goto yy49;
	default:	goto yy108;
	}
yy108:
#line 68 "src/lexer.re"
	{ return (struct token){ TOK_CFLOW, index }; }
#line 1655 "src/lexer.c"
yy109:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'e':	goto yy114;
	default:	goto yy50;
	}
yy110:
	YYSKIP ();
#line 61 "src/lexer.re"
	{ return (struct token){ TOK_AND, index }; }
#line 1667 "src/lexer.c"
yy112:
	YYSKIP ();
#line 62 "src/lexer.re"
	{ return (struct token){ TOK_XOR, index }; }
#line 1672 "src/lexer.c"
yy114:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '(':	goto yy68;
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
	case 'z':	goto yy49;
	default:	goto yy115;
	}
yy115:
#line 66 "src/lexer.re"
	{ return (struct token){ TOK_CFLOW, index }; }
#line 1744 "src/lexer.c"
}
#line 80 "src/lexer.re"

}