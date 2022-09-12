#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char alpha = 'a';
	char beta = 'A';

	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}

	while (beta <= 'Z')
	{
		putchar(beta);
		beta++;
	}

	putchar('\n');

	return (0);
}
