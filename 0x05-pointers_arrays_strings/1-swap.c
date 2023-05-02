#include "main.h"

/**
 * swap_int - swaps intergers
 * @a :integer to swap
 * @b :integer to swap
 * return always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
