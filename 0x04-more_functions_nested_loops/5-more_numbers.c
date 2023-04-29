#include "main.h"

/**
 * more_numbers - print numbers 0 to 14, 10 times
 * return : void
 */

void more_numbers(void)
{
	int i,c;

	for (i = 0; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			_putchar('i');
			_putchar(c % 10 + '0');
		}
	}
	_putchar('\n');
}
