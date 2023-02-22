#include "main.h"
/**
 * main - Entry point
 *
 * Description: _putchar  prints _putchar
 *
 * Return: 1 if putchar is printed
 */

int main(void)
{
	/**
	 * Declare and initialize array of char
	 * Declare and initialize int i to 0
	 * While loop
	 * while _ putchar at index i is not equal to '\0'
	 * Print char at index i
	 */

	char ch[] = "_putchar";
	int i;

	i = 0;
	while (ch[i] != '\0')
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);

}

