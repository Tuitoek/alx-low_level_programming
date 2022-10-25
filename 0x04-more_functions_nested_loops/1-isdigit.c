#include "main.h"

/**
 * _isdigit - entry point
 *
 * Description: Check if is integer
 * @c: the input in function parameter
 *
 * Return: 1 if successful else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
