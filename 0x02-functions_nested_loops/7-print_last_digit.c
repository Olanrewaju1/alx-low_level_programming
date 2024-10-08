#include "main.h"

/**
 * print_last_digit -  a function that prints the last digit of a number.
 *
 * @n : integer
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit >= 0)
	{
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		_putchar(-last_digit + '0');
		return (-last_digit);
	}
}
