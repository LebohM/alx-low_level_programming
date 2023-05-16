#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *@str: pointer to be returned
 *
 *return: null if str is null
 */

char *_strdup(char *str)
{
	int n = 0, i = 1;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	p = malloc((sizeof(char) * i) + 1);

	if (p == NULL)
		return (NULL);
	while (n < i)
	{
		p[n] = str[n];
		n++;
	}
	p[n] = '\0';
	return (p);
}
