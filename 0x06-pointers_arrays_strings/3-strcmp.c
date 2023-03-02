#include "main.h"
/**
 * _strcmp - Entry point
 *
 * Description: compare two strings
 * @s1: first input
 * @s2: second input
 *
 * Return: number that is greater, negative number if less or zero if equal
 */

int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);

}
