#include "main.h"

/**
 *_puts - prints a string
 *@str: string to be printed
 *return always 0
 */

void _puts(char *str)
{
	int c;

	while (str[c])
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
