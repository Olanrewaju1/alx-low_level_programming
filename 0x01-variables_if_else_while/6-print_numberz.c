#include <stdio.h>

/**
 * main - function to print single base 10 without using a char
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

	putchar('\n');
	return (0);
}
