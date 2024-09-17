#include <stdio.h>

/**
 * main - program that prints all possible
 * combinations of two two-digit numbers
 *
 * f_digit - first digit
 * s_digit - second digit
 *
 * Return: 0
 */

int main(void)
{
	int f_digit, s_digit;

	for (f_digit = 0; f_digit <= 99; f_digit++)
	{
		for (s_digit = f_digit + 1; s_digit <= 99; s_digit++)
		{
			putchar((f_digit / 10) + '0');
			putchar((f_digit % 10) + '0');
			putchar(32);
			putchar((s_digit / 10) + '0');
			putchar((s_digit % 10) + '0');
			if ((f_digit != 98 || s_digit != 99))
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
