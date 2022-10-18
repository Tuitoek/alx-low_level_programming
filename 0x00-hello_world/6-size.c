#include <stdio.h>
/**
 * main - Entry point
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int a;
	float b;

	printf("Size of a char: %c byte(s)", sizeof(char x));
	
	printf("Size of an int: %d byte(s)", sizeof(int y));

	printf("Size of a long int: %d byte(s)", sizeof(long int z));

	printf("Size of a long long int: %lld byte(s)", sizeof(long long int a));

	printf("Size of a float: %f bytes(s)", sizeof(float b));
}
