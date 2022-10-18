#include <stdio.h>
/*
 * main - Entry point
 *
 * Return  - Always 0 (success)
 */
int main(void)
{
	char charType;
	int intergerType;
	float floatType;
	long long longlongintType;
	long longType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));

	printf("Size of an int: %d byte(s)\n", sizeof(intergerType))
;

	printf("Size of a long int: %li byte(s)\n", sizeof(longType));

	printf("Size of a long long int: %lli byte(s)\n", sizeof(longlongintType));

	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));


}
