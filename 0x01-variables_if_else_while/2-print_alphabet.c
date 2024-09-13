#include <stdio.h>

/**
 * main - Program to print all lowecase letter
 * @c - character
 *
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
