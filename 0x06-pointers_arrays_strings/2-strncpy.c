#include "main.h"

/**
 * _strncpy - entry point
 *
 * Description: copies string upto n point
 * @dest: string to be copied to
 * @src: string to copy
 * @n: input
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l;

	/* length of dest */
	l = 0;
	while (l < n && *(src + l))
	{
		*(dest + l) = *(src + l);
		l++;
	}

	while (l < n)
	{
		*(dest + l) = '\0';
		l++;
	}

	return (dest);


}
