#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: character to be checked
 * return : 1 if digit, and 0 otherwise
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
