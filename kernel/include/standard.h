#pragma once

#include "string.h"
#include "memory.h"
#include "malloc.h"
#include "pmm.h"

#include <stddef.h>

/**
 * Converts an integer to a string value.
 */
int int_to_string(char * str, int value, int base);

/**
 * Converts a string to an integer.
 */
int str_to_int(char *str, int base);

static inline int max(int a, int b)
{
	return (a > b) ? a : b;
}

static inline int min(int a, int b)
{
	return (a < b) ? a : b;
}

static inline int clamp(int a, int lower, int upper)
{
	return min(max(a, lower), upper);
}
