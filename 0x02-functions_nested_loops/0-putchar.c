#include "main.h"

/**
 * main - Entry point
 *
 * Description: putchar prints characters
 *
 * Return: 1 if success else 0
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
