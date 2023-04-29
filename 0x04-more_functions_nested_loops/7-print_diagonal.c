#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n : input integer
 * return : always 0
 */

void print_diagonal(int n)
{
	int i, c;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (c = i; c < i; c++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
