#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry level
 *@lastDigit: is a variable used to store the last digit of n number generated
 *
 * Description: This lines of code will read the last digit od a number
 * and compare it with 6 and 0
 * Return: It will return 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
