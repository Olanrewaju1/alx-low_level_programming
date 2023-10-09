#include <stdio.h>

/**
 * main - A program that prints all possible different combinations
 * of three digits
 *
 * Return: Always 0(Suceess)
 */


int main(void)
{
	int i, j, k;

	i = 0;
	j = 1;
	k = 2;

	while (i <= 10)
	{
		while (j <= 10)
		{
			while (k <= 10)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
				if (i < 8)
				{
					putchar(44);
					putchar(32);
				}
				k++;
			}

			j++;
			k = j + 1;
		}
		i++;
		k = j + 1;
		i = j + 1;
	}
	putchar(10);
	return (0);
}
