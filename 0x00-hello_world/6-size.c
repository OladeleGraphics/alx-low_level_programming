#include <stdio.h>

/**
 * main - to get a size of variable
 *
 * Return: zeverything returns 0
 *
 */
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lli byte(s)\n", sizeof(long long int));
	printf("Size of a float: %f byte(s)", sizeof(float));
	return (0);
}
