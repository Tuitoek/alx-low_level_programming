#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry point
 *
 * Description: prints numbers upto 98
 * @n: input
 */
void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d, ", x);
		}
	} else
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d, ", x);
		}
	}
	printf("\n");
}
