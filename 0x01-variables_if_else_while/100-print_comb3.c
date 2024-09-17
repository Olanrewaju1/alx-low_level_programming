#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 *
 * @first_d - var1
 * @second_d - var2
 *
 * Return: 0
 */

int main(void)
{
	int first_d, second_d;

	for (first_d = 0; first_d <= 8; first_d++)
	{
		second_d = first_d + 1;
		
		for (; second_d <= 9; second_d++)
		{
			putchar(first_d + '0');
			putchar(second_d + '0');
			if ((first_d != 8 || second_d != 9))
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
