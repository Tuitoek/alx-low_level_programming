#include "main.h"

/**
 * puts_half - Entry point
 *
 * Description: prints the second half of the string
 * @str: input
 */

void puts_half(char *str)
{
	int s, n;

	s = 0;
	while (str[s] != '\0')
		s++;
	if (s + 1 % 2 != '0')
		n = (s - 1) / 2;
	else
		n = (s / 2);
	n++;

	for (s = n; str[s] != '\0'; s++)
		_putchar(str[s]);
	_putchar('\n');

}
