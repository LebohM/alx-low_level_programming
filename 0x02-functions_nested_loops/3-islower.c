#include "main.h"

/**
 * main - entry point
 * checks if charactor is lowercase
 * @c: charactor
 * return: always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
