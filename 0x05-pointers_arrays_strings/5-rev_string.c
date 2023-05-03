#include "main.h"

/**
 * rev_string - reverses a string
 * @s : pointer to the string
 * return : 0
 */

void rev_string(char *s)
{
	int len, i, t;
	char c;

	for (len = 0; s[len] != '\0'; len++)
	;
	i = 0;
	t = len / 2;
	while (t--)
	{
		c = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = c;
		i++;
	}
}
