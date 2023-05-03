#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array
 * @a : input array
 * @n : length of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (a - 1))
			printf(",");
	}
	_putchar('\n');
}
