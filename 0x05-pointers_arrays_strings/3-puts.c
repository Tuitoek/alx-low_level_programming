#include "main.h"

/**
 * _puts - entry point
 *
 * Description: prints a string
 * @str: input
 */

void _puts(char *str)
{
	int s = 0;

	while (s >= 0)
	{
		if (str[s] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[s]);
		s++;
	}
}
