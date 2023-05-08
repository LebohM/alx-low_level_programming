#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @*s:a pointer
 * @b: a variable
 * @n: an unsigned variable
 * return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
