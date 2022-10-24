#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	auto int y;
	auto int z;

	for (y = 48; y <= 57; y++)
		putchar(y);

	for (z = 97; z <= 102; z++)
		putchar(z);

	putchar('\n');

	return (0);
}
