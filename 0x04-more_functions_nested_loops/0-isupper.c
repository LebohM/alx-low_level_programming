#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * return: 1 for upper 0 for lower
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return  (1);
	return (0);
}
