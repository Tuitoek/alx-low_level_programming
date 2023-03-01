#include "main.h"

/**
 * *_strcpy - Entry point
 *
 * Description: copies string to another string
 * @dest: string to be copied too
 * @src: string to copy
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);

}
