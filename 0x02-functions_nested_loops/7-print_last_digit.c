#include "main.h"

/**
 * print_last_digit - entry point
 *
 * Description: Prints the last digit of a number
 * @r: input
 *
 * Return: last digit of r
 */

int print_last_digit(int r)
{
	int lastDigit;

	if (r < 0)
		lastDigit = -1 * (r % 10);
	else
		lastDigit = r % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
