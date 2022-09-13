#include <stdio.h>


/**
 * main - Entry point
 * Description: print all letters minus q and e
 * Return: Always zero
 */
int main(void)
{
	char alpha = 'a';
	char beta = 'A';

	while (alpha <= 'z')
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
