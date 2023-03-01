#include "main.h"

/**
 * puts2 - prints some characters
 *
 * Description: prints characters with an even index
 * @str: input
 */

void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		if (s % 2 == 0)
		{
			_putchar(str[s]);
		}
	}
	_putchar('\n');
}

