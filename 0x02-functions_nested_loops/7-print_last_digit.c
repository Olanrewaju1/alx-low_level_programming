#include "main.h"

/**
 * print_last_digit - function that print the last digit of a number
 * @n: variable
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
	{
		n *= -1;
	}

	_putchar(n + '0');

	return (n);
}
