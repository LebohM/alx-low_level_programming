#include "main.h"

/**
 * reverse_array - everses the content of an array of integers
 * @a : pointer to an array
 * @n : number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int temp, count;

	n = n - 1;
	count = 0;
	while (count <= n)
	{
		temp = a[count];
		a[count++] = a[n];
		a[n--] = temp;
	}
}
