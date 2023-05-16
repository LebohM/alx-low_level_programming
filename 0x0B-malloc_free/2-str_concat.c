#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *
 *return: null if failed
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, n = 0, a = 0, c = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[n])
		n++;

	c = i + n;
	s = malloc((sizeof(char) * c) + 1);

	n = 0;

	while (a < c)
	{
		if (a <= i)
			s[a] = s1[a];

		if (a >= i)
		{
			s[a] = s2[a];
			n++;
		}
		a++;
	}
	s[a] = '\0';
	return (s);
}
