#include <stdio.h>

/**
 * main - program that prints all possible different
 * combinations of three digits.
 *
 * f_digit - first digit
 * s_digit - second digit
 * t_digit - third digit
 *
 * Return: 0
 */

int main(void)
{
	int f_digit, s_digit, t_digit;

	for (f_digit = 0; f_digit <= 7; f_digit++)
	{
		s_digit = f_digit + 1;
		for (; s_digit <= 8; s_digit++)
		{
			t_digit = s_digit + 1;
			for (; t_digit <= 9; t_digit++)
			{
				putchar(f_digit + '0');
				putchar(s_digit + '0');
				putchar(t_digit + '0');
				if ((f_digit != 7 || s_digit != 8 || t_digit != 9))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
