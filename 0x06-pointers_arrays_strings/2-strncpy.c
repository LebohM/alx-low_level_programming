#include "main.h"

/**
 *_strncpy - function that copies a string
 *@dest: destination string pointer
 *@src: source string pointer
 *@n:number of bytes to be concatenated
 *return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && dest[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	for (count = 0; count < n; count++)
	{
		dest[count] = '\0';
	}
	return (dest);
}
