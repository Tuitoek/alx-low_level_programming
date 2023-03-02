#include "main.h"

/**
 * _strcat - Entry point
 *
 * Description: concanate two strings
 * @dest: string input to be appended to
 * @src: string input to append to
 */
char *_strcat(char *dest, char *src)
{
	int s,t;
	
	/* Find length of string dest*/
	t = 0;
	while (dest[t] != '\0')
		t++;
	
	s = 0;
	while (src[s] != '\0')
	{
		dest[t] = src[s];
		s++;
		t++;
	}

	dest[t] = '\0';
	return (dest);

}
