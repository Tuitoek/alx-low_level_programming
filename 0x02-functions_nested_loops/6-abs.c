#include "main.h"
/**
 * _abs - Entry point
 *
 * Description: returns number to absolute value
 * @r: input
 *
 * Return: 0 (Always success)
 */

int _abs(int r)
{
	if (r < 0)
		r = r * (-1);
	return (r);
}
