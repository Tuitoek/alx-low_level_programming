#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Prints all alphabets in a lowercase 10 times
 *
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
