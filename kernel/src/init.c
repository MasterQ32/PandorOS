#include <stdbool.h>

#include "console.h"
#include "input.h"
#include "stdlib.h"
#include "pmm.h"

int ticks = 0;

void os_tick()
{
	ticks++;
	// int_to_string(mainmenu[5].label, ticks, 10);
	// console_refresh();
}

menuitem_t mainmenu_contents[] = {
	{ "Screen 0", MENU_DEFAULT },
	{ "Screen 1", MENU_DEFAULT },
	{ "Screen 2", MENU_DEFAULT },
	{ "System",   MENU_RIGHTALIGN },
	{ "Catalog",  MENU_RIGHTALIGN },
};
menu_t mainmenu = {
	sizeof(mainmenu_contents) / sizeof(mainmenu_contents[0]),
	mainmenu_contents,
};

static void input_demo()
{
	int cursor = 0;
	char buffer[128];
	while(true)
	{
		int c = getchar();
		
		switch(c)
		{
			case '\b':
				if(cursor > 0) {
					buffer[--cursor] = 0;
					putc('\b');
				}
				break;
			case '\n':
				buffer[cursor] = 0;
				cursor = 0;
				int len = 0;
				char *str = buffer;
				while(*str++) len++;
				printf("\nYou entered: \"%s\" (Length=%d)\n#> ", buffer, len);
				break;
			default:
				buffer[cursor++] = c;
				putc(c);
				break;
		}
	
	}
}

void os_init()
{
	// TODO: Initialize OS…
	console_init();
	
	console_set(console_new());
	console_menu(&mainmenu);
	
	printf("Starting the OS...\n");
	
	printf("String: %s\n", "Hello World!");
	printf("Numbers: %b %d %x\n", 14, 15, 13);
	printf("Numbers: %b %d %x\n", -14, -15, -13);
	
	printf("Character Map:\n");
	for(int y = -1; y < 16; y++)
	{
		for(int x = -1; x < 16; x++) {
			if(y < 0) {
				if(x < 0) {
					printf("  ");
				} else {
					printf("%x ", x);
				}
				continue;
			}
			if(x < 0) {
				printf("%x ", y);
			} else {
				char c = 16*y+x;
				if(c == '\n' || c == '\b')
					printf("  ");
				else
					printf("%c ", c);
			}
		
		}
		printf("\n");
	}
	
	printf("PMM Testing:\n");
	{
		page_t p0, p1;
		printf("pmm_alloc[0] = %d\n", pmm_alloc());
		printf("pmm_alloc[1] = %d\n", p0 = pmm_alloc());
		printf("pmm_alloc[2] = %d\n", pmm_alloc());
		printf("pmm_alloc[3] = %d\n", p1 = pmm_alloc());
		pmm_free(p0);
		printf("pmm_alloc[4] = %d\n", pmm_alloc());
	}
	
	input_demo();
	
	// shell_start();
	
	while(true);
}
