#pragma once

#include "config.h"

#include <stdint.h>
#include <stdbool.h>

#define PMM_FREE 0
#define PMM_USED 1

#define PMM_PAGECOUNT (PMM_MEMSIZE / PMM_PAGESIZE)

/**
 * A page index container.
 */
typedef uint32_t page_t;

/**
 * Gets the page the pointer is located in.
 */
page_t pmm_getpage(void const * ptr);

/**
 * Gets the start pointer of the page.
 */
void *pmm_getptr(page_t page);

/**
 * Marks a given page as either used or free.
 */
void pmm_mark(page_t page, int status);

/**
 * Checks if a given page is free.
 */
bool pmm_isfree(page_t page);

/**
 * Allocates a page.
 */
page_t pmm_alloc();

/**
 * Frees an allocated page.
 */
void pmm_free(page_t page);