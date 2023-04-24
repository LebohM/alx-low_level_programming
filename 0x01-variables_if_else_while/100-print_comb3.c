#include <stdio.h>

/**
 * main - entry point
 * discription: 'prints all possible different combinations of two digits'
 * return - always 0
 */

int main(void)
{
	int n;
	int a;

	for (n = '0'; n <= '9'; n++)
	{
		for (a = n + '1'; a <= '9'; a++)
		{
			if (n != a)
			{
				putchar(n);
				putchar(a);
				if (n == '8' && a == '9')
				{
					continue;
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
