#include "main.h"

/**
 * swap(int)-swap the values of two integers
 *
 * int(a): first integer
 * int(b): second integer
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
