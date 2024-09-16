#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 * @c - var1
 * @n - var2
 *
 * Return: 0
 */

int main(void)
{
	char c, n;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
