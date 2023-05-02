 #include "main.h"

/**
 * _strlen - returns length of a string
 * @s : the string to return string from
 * return : length
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}
	return (length);
}
