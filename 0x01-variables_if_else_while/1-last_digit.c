#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry level
 *@lDigit: is a variable used to store the last digit of n number generated
 *
 * Description: This lines of code will read the last digit od a number
 * and compare it with 6 and 0
 * Return: It will return 0
 */
int main(void)
{
	int n;
	int lDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lDigit = n % 10;

	if (lDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lDigit);
	}
	if (lDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lDigit);
	}
	if (lDigit < 6 && lDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lDigit);
	}
	return (0);
}
