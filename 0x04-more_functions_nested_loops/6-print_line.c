#include "main.h"

/**
 * print_line - print a line
 * @n : number of times a _ should be printed
 * return : always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
