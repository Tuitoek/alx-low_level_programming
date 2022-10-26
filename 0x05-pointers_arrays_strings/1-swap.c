#include "main.h"
/**
 * swap_int - swaps values of two int var
 * @a: input interger
 * @b: input integer
 *
 * return void
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
