#include "main.h"

/**
 * _strlen - entry point
 *
 * Description: returns the length of a string.
 * @s: string input
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
