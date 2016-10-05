/* Generated by re2c 0.16 on Wed Oct  5 18:00:10 2016 */
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
	case '"':	goto yy10;
	case '(':	goto yy11;
	case ')':	goto yy13;
	case '*':	goto yy15;
	case '+':	goto yy17;
	case ',':	goto yy19;
	case '-':	goto yy21;
	case '/':	goto yy23;
	case '0':	goto yy25;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy27;
	case 'A':	goto yy29;
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'P':
	case 'Q':
	case 'R':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':	goto yy31;
	case 'F':	goto yy32;
	case 'N':	goto yy33;
	case 'O':	goto yy34;
	case 'S':	goto yy35;
	case 'T':	goto yy36;
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
	case 'z':	goto yy37;
	case 's':	goto yy40;
	default:	goto yy2;
	}
yy2:
	YYSKIP ();
yy3:
#line 43 "src/lexer.re"
	{ return (struct token){ -2, 0 }; }
#line 117 "src/lexer.c"
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
	{ return (struct token){ -1, index }; }
#line 130 "src/lexer.c"
yy7:
	YYSKIP ();
#line 53 "src/lexer.re"
	{ return (struct token){ TOK_ASS, index }; }
#line 135 "src/lexer.c"
yy9:
	yyaccept = 0;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'A':	goto yy41;
	case 'O':	goto yy43;
	case 'X':	goto yy44;
	default:	goto yy5;
	}
yy10:
	yyaccept = 1;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	if (yych <= 0x00) goto yy3;
	goto yy46;
yy11:
	YYSKIP ();
#line 51 "src/lexer.re"
	{ return (struct token){ TOK_BRO, index }; }
#line 158 "src/lexer.c"
yy13:
	YYSKIP ();
#line 52 "src/lexer.re"
	{ return (struct token){ TOK_BRC, index }; }
#line 163 "src/lexer.c"
yy15:
	YYSKIP ();
#line 49 "src/lexer.re"
	{ return (struct token){ TOK_TIMES, index }; }
#line 168 "src/lexer.c"
yy17:
	YYSKIP ();
#line 47 "src/lexer.re"
	{ return (struct token){ TOK_PLUS, index }; }
#line 173 "src/lexer.c"
yy19:
	YYSKIP ();
#line 56 "src/lexer.re"
	{ return (struct token){ TOK_COMMA, index }; }
#line 178 "src/lexer.c"
yy21:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '>':	goto yy7;
	default:	goto yy22;
	}
yy22:
#line 48 "src/lexer.re"
	{ return (struct token){ TOK_MINUS, index }; }
#line 188 "src/lexer.c"
yy23:
	YYSKIP ();
#line 50 "src/lexer.re"
	{ return (struct token){ TOK_DIVIDE, index }; }
#line 193 "src/lexer.c"
yy25:
	yyaccept = 2;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'X':	goto yy49;
	case 'x':	goto yy50;
	default:	goto yy28;
	}
yy26:
#line 45 "src/lexer.re"
	{ return (struct token){ TOK_INTEGER, index }; }
#line 207 "src/lexer.c"
yy27:
	YYSKIP ();
	yych = YYPEEK ();
yy28:
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
	case '9':	goto yy27;
	default:	goto yy26;
	}
yy29:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '(':	goto yy51;
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
	case 'z':	goto yy37;
	case 'n':	goto yy53;
	default:	goto yy30;
	}
yy30:
#line 54 "src/lexer.re"
	{ return (struct token){ TOK_VAR, index }; }
#line 296 "src/lexer.c"
yy31:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy51;
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
	case 'z':	goto yy37;
	default:	goto yy30;
	}
yy32:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy51;
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
	case 'z':	goto yy37;
	case 'a':	goto yy54;
	default:	goto yy30;
	}
yy33:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy51;
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
	case 'z':	goto yy37;
	case 'o':	goto yy55;
	default:	goto yy30;
	}
yy34:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy51;
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
	case 'z':	goto yy37;
	case 'f':	goto yy56;
	case 'n':	goto yy57;
	default:	goto yy30;
	}
yy35:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy51;
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
	case 'z':	goto yy37;
	case 'T':
	case 't':	goto yy59;
	default:	goto yy30;
	}
yy36:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '(':	goto yy51;
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
	case 'z':	goto yy37;
	case 'r':	goto yy60;
	default:	goto yy30;
	}
yy37:
	YYSKIP ();
	yych = YYPEEK ();
yy38:
	switch (yych) {
	case '(':	goto yy51;
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
	case 'z':	goto yy37;
	default:	goto yy39;
	}
yy39:
#line 60 "src/lexer.re"
	{ return (struct token){ TOK_ORDER, index }; }
#line 784 "src/lexer.c"
yy40:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'T':
	case 't':	goto yy59;
	default:	goto yy38;
	}
yy41:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'n':	goto yy61;
	default:	goto yy42;
	}
yy42:
	YYRESTORE ();
	switch (yyaccept) {
	case 0: 	goto yy6;
	case 1: 	goto yy3;
	default:	goto yy26;
	}
yy43:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'r':	goto yy62;
	default:	goto yy42;
	}
yy44:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'o':	goto yy63;
	default:	goto yy42;
	}
yy45:
	YYSKIP ();
	yych = YYPEEK ();
yy46:
	switch (yych) {
	case 0x00:	goto yy42;
	case '"':	goto yy47;
	default:	goto yy45;
	}
yy47:
	YYSKIP ();
#line 58 "src/lexer.re"
	{ return (struct token){ TOK_STRING, index }; }
#line 834 "src/lexer.c"
yy49:
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
	case 'f':	goto yy64;
	default:	goto yy42;
	}
yy50:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '0':	goto yy67;
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
	case 'f':	goto yy64;
	default:	goto yy42;
	}
yy51:
	YYSKIP ();
#line 55 "src/lexer.re"
	{ return (struct token){ TOK_FUN, index }; }
#line 895 "src/lexer.c"
yy53:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 's':	goto yy31;
	default:	goto yy38;
	}
yy54:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'l':	goto yy68;
	default:	goto yy38;
	}
yy55:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 't':	goto yy69;
	default:	goto yy38;
	}
yy56:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'f':	goto yy57;
	default:	goto yy38;
	}
yy57:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '(':	goto yy51;
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
	case 'z':	goto yy37;
	default:	goto yy58;
	}
yy58:
#line 59 "src/lexer.re"
	{ return (struct token){ TOK_BOOL, index }; }
#line 995 "src/lexer.c"
yy59:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'R':
	case 'r':	goto yy70;
	default:	goto yy38;
	}
yy60:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'u':	goto yy71;
	default:	goto yy38;
	}
yy61:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'd':	goto yy72;
	default:	goto yy42;
	}
yy62:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy73;
	default:	goto yy42;
	}
yy63:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'r':	goto yy75;
	default:	goto yy42;
	}
yy64:
	YYSKIP ();
	yych = YYPEEK ();
yy65:
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
	case 'f':	goto yy64;
	default:	goto yy66;
	}
yy66:
#line 46 "src/lexer.re"
	{ return (struct token){ 2, index }; }
#line 1064 "src/lexer.c"
yy67:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '0':	goto yy76;
	default:	goto yy65;
	}
yy68:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 's':	goto yy71;
	default:	goto yy38;
	}
yy69:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy78;
	default:	goto yy38;
	}
yy70:
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
	case '9':	goto yy31;
	default:	goto yy38;
	}
yy71:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'e':	goto yy57;
	default:	goto yy38;
	}
yy72:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy80;
	default:	goto yy42;
	}
yy73:
	YYSKIP ();
#line 64 "src/lexer.re"
	{ return (struct token){ TOK_OR, index }; }
#line 1120 "src/lexer.c"
yy75:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy82;
	default:	goto yy42;
	}
yy76:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
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
	case 'f':	goto yy64;
	default:	goto yy77;
	}
yy77:
#line 44 "src/lexer.re"
	{ return (struct token){ 0, 0 }; }
#line 1158 "src/lexer.c"
yy78:
	YYSKIP ();
#line 65 "src/lexer.re"
	{ return (struct token){ TOK_NOT, index }; }
#line 1163 "src/lexer.c"
yy80:
	YYSKIP ();
#line 62 "src/lexer.re"
	{ return (struct token){ TOK_AND, index }; }
#line 1168 "src/lexer.c"
yy82:
	YYSKIP ();
#line 63 "src/lexer.re"
	{ return (struct token){ TOK_XOR, index }; }
#line 1173 "src/lexer.c"
}
#line 66 "src/lexer.re"

}