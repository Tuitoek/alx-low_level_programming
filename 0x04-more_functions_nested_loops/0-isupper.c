#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: checks for uppercase in  string
 * @c: argument passed in the function parameters
 *
 * Return: 1 if is in uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
