#include "main.h"
#include <stdio.h>

/**
 * _strncat - entry point
 *
 * Description: concanates dest with src according to the pointers of n
 * @dest: string to be concanated with
 * @src: string to concanate
 * @n: input of index positioning
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, t;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;

	t = 0;
	while (src[t] != '\0' && t < n)
	{
		dest[dest_len + t] = src[t];
		t++;
	}
	dest[dest_len + t] = '\0';
	return (dest);
}
