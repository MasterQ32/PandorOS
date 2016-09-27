#include "hal.h"
#include "io.h"
#include "console.h"
#include <stdint.h>

#define WIDTH 80
#define HEIGHT 25

struct _vchar
{
	char c;
	uint8_t color;
};

static struct _vchar * const VIDEO = (struct _vchar *)0xB8000;

static void displaycursor(uint8_t col, uint8_t row)
{
  uint16_t tmp;
  tmp = row * WIDTH + col;
  outb(0x3D4,14);
  outb(0x3D5,tmp >> 8);
  outb(0x3D4,15);
  outb(0x3D5,tmp);
}
 

void hal_console_init(int *w, int *h)
{
	if(w) *w = WIDTH;
	if(h) *h = HEIGHT;
}

void hal_set_cursor(int x, int y)
{
	displaycursor(x, y + 2);
}

static uint8_t getcolor(int attribs)
{
	if(attribs & CHA_RED)
	{
		if(attribs & CHA_HIGHLIGHT)
			return 0x8C;
		else
			return 0x04;
	}
	else
	{
		if(attribs & CHA_HIGHLIGHT)
			return 0x2F;
		else
			return 0x0F;
	}
}

void hal_render_raw(int x, int y, char c, int attribs)
{
	VIDEO[y * WIDTH + x] = (struct _vchar) {
		c,
		getcolor(attribs),
	};
}

void hal_render_console(console_t const * con, int sx, int sy, int w, int h)
{
	w += sx;
	h += sy;
	for(int y = sy; y < h; y++) {
		for(int x = sx; x < w; x++) {
			VIDEO[(y+2) * WIDTH + x] = (struct _vchar) {
				con->data[con->width * y + x].c,
				getcolor(con->data[con->width * y + x].attribs),
			};
		}
	}
}
