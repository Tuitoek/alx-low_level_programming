#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * for loop
 * putchar - print out alphabets
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);

	}
	putchar('\n');
	return (0);
}
