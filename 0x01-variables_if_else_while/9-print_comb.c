#include<stdio.h>

/**
* main - entry point
*
* Return: Always 0(success)
*/
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
		if (x != 9 && x != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
