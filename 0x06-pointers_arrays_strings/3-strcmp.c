#include "main.h"

/**
 *_strcmp = compares two strings
 *@s1: first string
 *@s2: second string
 *return: a value less than 0 if one string is less than the other
 */

int _strcmp(char *s1, char *s2)
{
	int count, compVal;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}
	compVal = s1[count] - s2[count];
	return (compVal);
}
