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
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", n);
	} else if (n > 98)
	{
		for (x = n; x > 98; x--)
		{
			printf("%d, ", x);
		}
		printf("%d\n", n);
	} else
	{
		printf("%d\n", n);
	}
}
