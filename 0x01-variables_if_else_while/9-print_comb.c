#include <stdio.h>

/**
 * main - program to print all sngle digit seperated by comma and space
 *
 * @num - var
 *
 * Return: 0
 */

int main(void)
{
	int num;

	num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		if (num == 9)
		{
			break;
		}
		putchar(44);
		putchar(32);

		num++;
	}
	putchar('\n');

	return (0);
}
