#include <stdio.h>

/**
 * main - entry point
 *description:'prints the alphabet in lowercase, and then in uppercase'
 *return - always 0
 */
int main(void)
{
	int n = 97;
	int upn = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (upn <= 90)
	{
		putchar(upn);
		upn++;
	}
	putchar('\n');
	return (0);
}
