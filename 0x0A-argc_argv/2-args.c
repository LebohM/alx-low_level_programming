#include "main.h"
#include <stdio.h>

/**
 *main - entry point
 *@argc: argument count
 *@argv: vector
 *
 *return: always zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
