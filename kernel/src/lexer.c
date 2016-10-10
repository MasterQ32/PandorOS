/* Generated by re2c 0.16 on Mon Oct 10 16:56:18 2016 */
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
	case 'E':
	case 'H':
	case 'J':
	case 'K':
	case 'M':
	case 'P':
	case 'Q':
	case 'R':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':	goto yy40;
	case 'F':	goto yy41;
	case 'G':	goto yy42;
	case 'I':	goto yy43;
	case 'L':	goto yy44;
	case 'N':	goto yy45;
	case 'O':	goto yy46;
	case 'S':	goto yy47;
	case 'T':	goto yy48;
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
#line 72 "src/lexer.re"
	{ return (struct token){ TOK_LESS, index }; }
#line 250 "src/lexer.c"
yy34:
	YYSKIP ();
#line 76 "src/lexer.re"
	{ return (struct token){ TOK_EQ, index }; }
#line 255 "src/lexer.c"
yy36:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '=':	goto yy66;
	default:	goto yy37;
	}
yy37:
#line 74 "src/lexer.re"
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
	case 'a':	goto yy71;
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
	case 'o':	goto yy72;
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
	case 'f':	goto yy73;
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
	case 'a':	goto yy75;
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
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy49;
	case 'r':	goto yy81;
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
#line 70 "src/lexer.re"
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
	case 'n':	goto yy82;
	default:	goto yy54;
	}
yy54:
	YYRESTORE ();
	switch (yyaccept) {
	case 0: 	goto yy6;
	case 1: 	goto yy3;
	case 2: 	goto yy27;
	default:	goto yy51;
	}
yy55:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'r':	goto yy83;
	default:	goto yy54;
	}
yy56:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'o':	goto yy84;
	default:	goto yy54;
	}
yy57:
	YYSKIP ();
#line 77 "src/lexer.re"
	{ return (struct token){ TOK_NEQ, index }; }
#line 1074 "src/lexer.c"
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
#line 1088 "src/lexer.c"
yy63:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '0':	goto yy85;
	default:	goto yy54;
	}
yy64:
	YYSKIP ();
#line 73 "src/lexer.re"
	{ return (struct token){ TOK_LESSEQ, index }; }
#line 1100 "src/lexer.c"
yy66:
	YYSKIP ();
#line 75 "src/lexer.re"
	{ return (struct token){ TOK_GREATEREQ, index }; }
#line 1105 "src/lexer.c"
yy68:
	YYSKIP ();
#line 55 "src/lexer.re"
	{ return (struct token){ TOK_FUN, index }; }
#line 1110 "src/lexer.c"
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
	case 'l':	goto yy86;
	default:	goto yy50;
	}
yy72:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 't':	goto yy87;
	default:	goto yy50;
	}
yy73:
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
	default:	goto yy74;
	}
yy74:
#line 68 "src/lexer.re"
	{ return (struct token){ TOKEN_IF, index }; }
#line 1203 "src/lexer.c"
yy75:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'b':	goto yy88;
	default:	goto yy50;
	}
yy76:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 't':	goto yy89;
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
#line 1296 "src/lexer.c"
yy80:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'R':
	case 'r':	goto yy90;
	default:	goto yy50;
	}
yy81:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'u':	goto yy91;
	default:	goto yy50;
	}
yy82:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'd':	goto yy92;
	default:	goto yy54;
	}
yy83:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy93;
	default:	goto yy54;
	}
yy84:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'r':	goto yy95;
	default:	goto yy54;
	}
yy85:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '0':	goto yy96;
	default:	goto yy54;
	}
yy86:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 's':	goto yy91;
	default:	goto yy50;
	}
yy87:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'o':	goto yy98;
	default:	goto yy50;
	}
yy88:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'e':	goto yy99;
	default:	goto yy50;
	}
yy89:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy100;
	default:	goto yy50;
	}
yy90:
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
yy91:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'e':	goto yy78;
	default:	goto yy50;
	}
yy92:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy102;
	default:	goto yy54;
	}
yy93:
	YYSKIP ();
#line 63 "src/lexer.re"
	{ return (struct token){ TOK_OR, index }; }
#line 1402 "src/lexer.c"
yy95:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy104;
	default:	goto yy54;
	}
yy96:
	YYSKIP ();
#line 44 "src/lexer.re"
	{ return (struct token){ TOKEN_EMPTY, 0 }; }
#line 1414 "src/lexer.c"
yy98:
	yyaccept = 3;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case '\t':
	case ' ':	goto yy106;
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
yy99:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'l':	goto yy108;
	default:	goto yy50;
	}
yy100:
	YYSKIP ();
#line 64 "src/lexer.re"
	{ return (struct token){ TOK_NOT, index }; }
#line 1499 "src/lexer.c"
yy102:
	YYSKIP ();
#line 61 "src/lexer.re"
	{ return (struct token){ TOK_AND, index }; }
#line 1504 "src/lexer.c"
yy104:
	YYSKIP ();
#line 62 "src/lexer.re"
	{ return (struct token){ TOK_XOR, index }; }
#line 1509 "src/lexer.c"
yy106:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '\t':
	case ' ':	goto yy106;
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
	case '_':
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
	case 'z':	goto yy109;
	default:	goto yy54;
	}
yy108:
	yyaccept = 3;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case '\t':
	case ' ':	goto yy112;
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
yy109:
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
	case '_':
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
	case 'z':	goto yy109;
	default:	goto yy111;
	}
yy111:
#line 67 "src/lexer.re"
	{ return (struct token){ TOKEN_GOTO, index }; }
#line 1726 "src/lexer.c"
yy112:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '\t':
	case ' ':	goto yy112;
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
	case '_':
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
	case 'z':	goto yy114;
	default:	goto yy54;
	}
yy114:
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
	case '_':
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
	case 'z':	goto yy114;
	default:	goto yy116;
	}
yy116:
#line 66 "src/lexer.re"
	{ return (struct token){ TOKEN_LABEL, index }; }
#line 1870 "src/lexer.c"
}
#line 78 "src/lexer.re"

}