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

	while (i < 8)
	{
		while (j < 9)
		{
			while (k < 10)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
				if (i + 48 < 55)
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
		j = i + 1;
		k = j + 1;
	}
	putchar(10);
	return (0);
}
