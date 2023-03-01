#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 *
 * Description: prints numbers separated by comma
 * @a: array input
 * @n: length of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
