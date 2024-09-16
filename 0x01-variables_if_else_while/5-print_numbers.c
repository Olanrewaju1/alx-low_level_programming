#include <stdio.h>

/**
 * main - program to print single digit base 10 number
 *
 * @c - character
 *
 * Return: 0
 *
 */

int main(void)
{
	char c;

	c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
