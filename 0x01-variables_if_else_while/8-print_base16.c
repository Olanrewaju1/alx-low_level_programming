#include <stdio.h>

/**
 * main - function to print number in base 16
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}

	int n = 'a';

	for (; n <= 'f'; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
