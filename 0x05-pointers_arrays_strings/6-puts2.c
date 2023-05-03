#include "main.h"

/**
 * puts2 - prints characters
 * @str : string to be printed
 * return :0
 */

void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
