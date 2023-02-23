#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: prints 9 times table
 */

void times_table(void)
{
	int x, mult, product;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			product = x * mult;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
