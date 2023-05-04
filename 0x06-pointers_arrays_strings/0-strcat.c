#include "main.h"

/**
 * *_strcat = concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * return: pointer to the dest string
 */

char *_strcat(char *dest, char *src)
{
	int len, c;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (c = 0; src[c] != '\0'; c++, len++)
	{
		dest[len] = src[c];
	}
	dest[len] = '\0';
	return (dest);
}
