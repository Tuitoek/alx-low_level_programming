#include "main.h"

/**
 * rev_string - Entry point
 *
 * Description: reverses a string
 * @s: input
 */
void rev_string(char *s)
{
	int i, len, j;
	char t;

	/* get length of array s*/
	len = 0;
	while (*(s + len) != '\0')
		len++;

	j = len - 1;
	for (i = 0; j >= 0 && i < j; i--,j++)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
