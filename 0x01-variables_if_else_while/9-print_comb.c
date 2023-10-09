#include <stdio.h>

/**
 * main - fuction to print single number sep by , and space
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
		if (n != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
