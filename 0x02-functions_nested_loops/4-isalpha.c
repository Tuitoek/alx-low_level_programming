#include "main.h"

/**
 * _isalpha - Entry point
 *
 * Description: Checks if letter is alpa in either lower or uppercase
 * @c: input
 *
 * Return: 1 if aphabetic else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
