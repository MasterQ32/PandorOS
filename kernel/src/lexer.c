/* Generated by re2c 0.16 */
#line 1 "src/lexer.re"
#include "basic/lexer.h"
#include "string.h"
#include "memory.h"
#include "debug.h"
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
	
	if(*input == '\"')
	{
		int i;
		for(i = 1; input[i] != 0 && input[i] != '\"'; i++);
		if(input[i] == 0) {
			return (struct token){ TOKEN_INVALID, i };
		} else {
			return (struct token){ TOK_STRING, i + 1 };
		}
	}
	
#define YYCTYPE        char
#define YYPEEK()       input[index]
#define YYSKIP()       index++
#define YYBACKUP()     marker = index
#define YYBACKUPCTX()  ctxmarker = index
#define YYRESTORE()    index = marker
#define YYRESTORECTX() index = ctxmarker
#define YYLESSTHAN(n)  ((len - index) < (n))
#define YYFILL(n)      {}
	
#line 44 "src/lexer.c"
{
	char yych;
	unsigned int yyaccept = 0;
	yych = YYPEEK ();
	switch (yych) {
	case '\t':	goto yy4;
	case 0x1A:	goto yy7;
	case ' ':	goto yy9;
	case '!':	goto yy10;
	case '"':	goto yy12;
	case '(':	goto yy13;
	case ')':	goto yy15;
	case '*':	goto yy17;
	case '+':	goto yy19;
	case ',':	goto yy21;
	case '-':	goto yy23;
	case '/':	goto yy25;
	case '0':	goto yy27;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy29;
	case ':':	goto yy31;
	case '<':	goto yy33;
	case '=':	goto yy35;
	case '>':	goto yy37;
	case 'A':
	case 'B':
	case 'C':
	case 'D':
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
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'h':
	case 'j':
	case 'k':
	case 'm':
	case 'p':
	case 'q':
	case 'r':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy39;
	case 'E':
	case 'e':	goto yy42;
	case 'F':
	case 'f':	goto yy43;
	case 'G':
	case 'g':	goto yy44;
	case 'I':
	case 'i':	goto yy45;
	case 'L':
	case 'l':	goto yy46;
	case 'N':
	case 'n':	goto yy47;
	case 'O':
	case 'o':	goto yy48;
	case 'S':
	case 's':	goto yy49;
	case 'T':
	case 't':	goto yy50;
	default:	goto yy2;
	}
yy2:
	YYSKIP ();
yy3:
#line 55 "src/lexer.re"
	{ return (struct token){ TOKEN_INVALID, 0 }; }
#line 135 "src/lexer.c"
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
#line 68 "src/lexer.re"
	{ return (struct token){ TOKEN_WHITESPACE, index }; }
#line 148 "src/lexer.c"
yy7:
	YYSKIP ();
#line 66 "src/lexer.re"
	{ return (struct token){ TOK_ASS, index }; }
#line 153 "src/lexer.c"
yy9:
	yyaccept = 0;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'A':
	case 'a':	goto yy51;
	case 'O':
	case 'o':	goto yy53;
	case 'X':
	case 'x':	goto yy54;
	default:	goto yy5;
	}
yy10:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '=':	goto yy55;
	default:	goto yy11;
	}
yy11:
#line 65 "src/lexer.re"
	{ return (struct token){ TOK_BANG, index }; }
#line 177 "src/lexer.c"
yy12:
	yyaccept = 1;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	if (yych <= 0x00) goto yy3;
	goto yy58;
yy13:
	YYSKIP ();
#line 63 "src/lexer.re"
	{ return (struct token){ TOK_BRO, index }; }
#line 189 "src/lexer.c"
yy15:
	YYSKIP ();
#line 64 "src/lexer.re"
	{ return (struct token){ TOK_BRC, index }; }
#line 194 "src/lexer.c"
yy17:
	YYSKIP ();
#line 61 "src/lexer.re"
	{ return (struct token){ TOK_TIMES, index }; }
#line 199 "src/lexer.c"
yy19:
	YYSKIP ();
#line 59 "src/lexer.re"
	{ return (struct token){ TOK_PLUS, index }; }
#line 204 "src/lexer.c"
yy21:
	YYSKIP ();
#line 67 "src/lexer.re"
	{ return (struct token){ TOK_COMMA, index }; }
#line 209 "src/lexer.c"
yy23:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '>':	goto yy7;
	default:	goto yy24;
	}
yy24:
#line 60 "src/lexer.re"
	{ return (struct token){ TOK_MINUS, index }; }
#line 219 "src/lexer.c"
yy25:
	YYSKIP ();
#line 62 "src/lexer.re"
	{ return (struct token){ TOK_DIVIDE, index }; }
#line 224 "src/lexer.c"
yy27:
	yyaccept = 2;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'X':
	case 'x':	goto yy61;
	default:	goto yy30;
	}
yy28:
#line 57 "src/lexer.re"
	{ return (struct token){ TOK_INTEGER, index }; }
#line 238 "src/lexer.c"
yy29:
	YYSKIP ();
	yych = YYPEEK ();
yy30:
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
	default:	goto yy28;
	}
yy31:
	YYSKIP ();
#line 58 "src/lexer.re"
	{ return (struct token){ TOKEN_EOL, index }; }
#line 260 "src/lexer.c"
yy33:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '=':	goto yy62;
	default:	goto yy34;
	}
yy34:
#line 85 "src/lexer.re"
	{ return (struct token){ TOK_LESS, index }; }
#line 270 "src/lexer.c"
yy35:
	YYSKIP ();
#line 89 "src/lexer.re"
	{ return (struct token){ TOK_EQ, index }; }
#line 275 "src/lexer.c"
yy37:
	YYSKIP ();
	switch ((yych = YYPEEK ())) {
	case '=':	goto yy64;
	default:	goto yy38;
	}
yy38:
#line 87 "src/lexer.re"
	{ return (struct token){ TOK_GREATER, index }; }
#line 285 "src/lexer.c"
yy39:
	YYSKIP ();
	yych = YYPEEK ();
yy40:
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
	case 'z':	goto yy39;
	default:	goto yy41;
	}
yy41:
#line 83 "src/lexer.re"
	{ return (struct token){ TOK_ID, index }; }
#line 358 "src/lexer.c"
yy42:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'X':
	case 'x':	goto yy66;
	default:	goto yy40;
	}
yy43:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'A':
	case 'a':	goto yy67;
	default:	goto yy40;
	}
yy44:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'O':
	case 'o':	goto yy68;
	default:	goto yy40;
	}
yy45:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'F':
	case 'f':	goto yy69;
	default:	goto yy40;
	}
yy46:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'A':
	case 'a':	goto yy71;
	default:	goto yy40;
	}
yy47:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'O':
	case 'o':	goto yy72;
	default:	goto yy40;
	}
yy48:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'F':
	case 'f':	goto yy73;
	case 'N':
	case 'n':	goto yy74;
	default:	goto yy40;
	}
yy49:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'T':
	case 't':	goto yy76;
	default:	goto yy40;
	}
yy50:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'R':
	case 'r':	goto yy77;
	default:	goto yy40;
	}
yy51:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'N':
	case 'n':	goto yy78;
	default:	goto yy52;
	}
yy52:
	YYRESTORE ();
	switch (yyaccept) {
	case 0: 	goto yy6;
	case 1: 	goto yy3;
	case 2: 	goto yy28;
	default:	goto yy41;
	}
yy53:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'R':
	case 'r':	goto yy79;
	default:	goto yy52;
	}
yy54:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'O':
	case 'o':	goto yy80;
	default:	goto yy52;
	}
yy55:
	YYSKIP ();
#line 90 "src/lexer.re"
	{ return (struct token){ TOK_NEQ, index }; }
#line 469 "src/lexer.c"
yy57:
	YYSKIP ();
	yych = YYPEEK ();
yy58:
	switch (yych) {
	case 0x00:	goto yy52;
	case '"':	goto yy59;
	default:	goto yy57;
	}
yy59:
	YYSKIP ();
#line 69 "src/lexer.re"
	{ return (struct token){ TOK_STRING, index }; }
#line 483 "src/lexer.c"
yy61:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '0':	goto yy81;
	default:	goto yy52;
	}
yy62:
	YYSKIP ();
#line 86 "src/lexer.re"
	{ return (struct token){ TOK_LESSEQ, index }; }
#line 495 "src/lexer.c"
yy64:
	YYSKIP ();
#line 88 "src/lexer.re"
	{ return (struct token){ TOK_GREATEREQ, index }; }
#line 500 "src/lexer.c"
yy66:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'I':
	case 'i':	goto yy82;
	default:	goto yy40;
	}
yy67:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'L':
	case 'l':	goto yy83;
	default:	goto yy40;
	}
yy68:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'T':
	case 't':	goto yy84;
	default:	goto yy40;
	}
yy69:
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
	case 'z':	goto yy39;
	default:	goto yy70;
	}
yy70:
#line 79 "src/lexer.re"
	{ return (struct token){ TOKEN_IF, index }; }
#line 595 "src/lexer.c"
yy71:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'B':
	case 'b':	goto yy85;
	default:	goto yy40;
	}
yy72:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'T':
	case 't':	goto yy86;
	default:	goto yy40;
	}
yy73:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'F':
	case 'f':	goto yy74;
	default:	goto yy40;
	}
yy74:
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
	case 'z':	goto yy39;
	default:	goto yy75;
	}
yy75:
#line 70 "src/lexer.re"
	{ return (struct token){ TOK_BOOL, index }; }
#line 690 "src/lexer.c"
yy76:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'O':
	case 'o':	goto yy87;
	default:	goto yy40;
	}
yy77:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'U':
	case 'u':	goto yy88;
	default:	goto yy40;
	}
yy78:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'D':
	case 'd':	goto yy89;
	default:	goto yy52;
	}
yy79:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy90;
	default:	goto yy52;
	}
yy80:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'R':
	case 'r':	goto yy92;
	default:	goto yy52;
	}
yy81:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '0':	goto yy93;
	default:	goto yy52;
	}
yy82:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'T':
	case 't':	goto yy95;
	default:	goto yy40;
	}
yy83:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'S':
	case 's':	goto yy88;
	default:	goto yy40;
	}
yy84:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'O':
	case 'o':	goto yy97;
	default:	goto yy40;
	}
yy85:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'E':
	case 'e':	goto yy98;
	default:	goto yy40;
	}
yy86:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy99;
	default:	goto yy40;
	}
yy87:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'P':
	case 'p':	goto yy101;
	default:	goto yy40;
	}
yy88:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'E':
	case 'e':	goto yy74;
	default:	goto yy40;
	}
yy89:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy103;
	default:	goto yy52;
	}
yy90:
	YYSKIP ();
#line 74 "src/lexer.re"
	{ return (struct token){ TOK_OR, index }; }
#line 803 "src/lexer.c"
yy92:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy105;
	default:	goto yy52;
	}
yy93:
	YYSKIP ();
#line 56 "src/lexer.re"
	{ return (struct token){ TOKEN_EMPTY, 0 }; }
#line 815 "src/lexer.c"
yy95:
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
	case 'z':	goto yy39;
	default:	goto yy96;
	}
yy96:
#line 81 "src/lexer.re"
	{ return (struct token){ TOKEN_EXIT, index }; }
#line 886 "src/lexer.c"
yy97:
	yyaccept = 3;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case '\t':
	case ' ':	goto yy107;
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
	case 'z':	goto yy39;
	default:	goto yy41;
	}
yy98:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'L':
	case 'l':	goto yy109;
	default:	goto yy40;
	}
yy99:
	YYSKIP ();
#line 75 "src/lexer.re"
	{ return (struct token){ TOK_NOT, index }; }
#line 971 "src/lexer.c"
yy101:
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
	case 'z':	goto yy39;
	default:	goto yy102;
	}
yy102:
#line 80 "src/lexer.re"
	{ return (struct token){ TOKEN_STOP, index }; }
#line 1042 "src/lexer.c"
yy103:
	YYSKIP ();
#line 72 "src/lexer.re"
	{ return (struct token){ TOK_AND, index }; }
#line 1047 "src/lexer.c"
yy105:
	YYSKIP ();
#line 73 "src/lexer.re"
	{ return (struct token){ TOK_XOR, index }; }
#line 1052 "src/lexer.c"
yy107:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '\t':
	case ' ':	goto yy107;
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
	case 'z':	goto yy110;
	default:	goto yy52;
	}
yy109:
	yyaccept = 3;
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case '\t':
	case ' ':	goto yy113;
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
	case 'z':	goto yy39;
	default:	goto yy41;
	}
yy110:
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
	case 'z':	goto yy110;
	default:	goto yy112;
	}
yy112:
#line 78 "src/lexer.re"
	{ return (struct token){ TOKEN_GOTO, index }; }
#line 1268 "src/lexer.c"
yy113:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '\t':
	case ' ':	goto yy113;
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
	case 'z':	goto yy115;
	default:	goto yy52;
	}
yy115:
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
	case 'z':	goto yy115;
	default:	goto yy117;
	}
yy117:
#line 77 "src/lexer.re"
	{ return (struct token){ TOKEN_LABEL, index }; }
#line 1412 "src/lexer.c"
}
#line 91 "src/lexer.re"

}