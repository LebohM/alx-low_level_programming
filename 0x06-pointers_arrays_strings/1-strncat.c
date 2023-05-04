#include "main.h"

/**
 * _strncat - concatenates two string using strncat
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to beconcatenated
 * return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, c;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (c = 0; c < n && src[c] != '\0'; c++, len++)
	{
		dest[len] = src[c];
	}
	dest[len] = '\0';
	return (dest);
}
