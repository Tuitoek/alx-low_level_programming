#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: prints sign
 * @n:%s/\s\+$//: input
 *
 * Return: 1 if positive else 0 if zero else -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
