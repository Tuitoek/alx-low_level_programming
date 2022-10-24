#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints alphabet in  lowercase beside q and e
 *
 * Declare ch
 *
 * Use for loop to declare upperlimit
 *
 * If statement to exclude letters q and e
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	char c;


	for (c = 'a'; c <= 'z'; c++)
	{
	if (c != 'q' && c != 'e')
		putchar(c);
	}
	putchar('\n');

	return (0);

}

