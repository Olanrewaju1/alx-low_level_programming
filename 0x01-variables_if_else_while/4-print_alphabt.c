#include <stdio.h>

/**
 * main - program to print all lower case except q and e
 *
 * @c - character
 *
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');

	return (0);
}
