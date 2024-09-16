#include <stdio.h>

/**
 * main - program to print all single base 10 digit
 *
 * @num - var
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
