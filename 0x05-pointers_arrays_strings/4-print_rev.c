#include "main.h"

/**
 * print_rev - prints a string in  reverse
 * @*s to be printed
 * return :0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}


