#include <stdio.h>
#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: a pointer
 * @c: a character to be located
 * return : s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if ((s[i] == c))
			return (s + 1);
	}
	return (NULL);
}
