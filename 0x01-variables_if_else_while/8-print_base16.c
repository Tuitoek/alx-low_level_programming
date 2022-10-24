#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success) 
 */
int main(void)
{
	int y;

	for (y = 0; y < 16; y++)
	{
		putchar('0'+ y);
	}
	putchar('\n');

	return (0);
}
