#include "main.h"

/**
 * reverse_array - Entry point
 *
 * Description: reverses array
 * @a: array
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int x = 0;
	int temp, end;

	end = n - 1;
	while (x < (n / 2))
	{
		temp = a[x];
		a[x] = a[end];
		a[end] = temp;
		end--;
		x++;
	}
}
