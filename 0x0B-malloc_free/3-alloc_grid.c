#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 *@width: input
 *@height: input
 *return : NULL if failed
 */

int **alloc_grid(int width, int height)
{
	int i, b, c, d;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (b = i; b >= 0; b--)
			{
				free(a[b]);
			}

			free(a);
			return (NULL);
		}

	}
	for (c = 0; c <= height; c++)
	{
		for (d = 0; d < width; d++)
		{
			a[c][d] = 0;
		}
	}
	return (a);
}
