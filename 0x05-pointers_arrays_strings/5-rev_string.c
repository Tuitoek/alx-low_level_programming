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
	while (*(s + len) != '\0')
		len++;

	j = len - 1;
	for (i = 0; j >= 0 && i < j; i++, j--)
	{
		t = s[j];
		s[j] = s[i];
		s[i] = t;
	}

}
