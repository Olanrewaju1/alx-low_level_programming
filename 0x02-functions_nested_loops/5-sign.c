#include "main.h"

/**
 * print_sign - function to prints the sign of a number
 *
 * @n: number
 * Return:1 0r 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	else
	{
		_putchar(48);
		return (0);
	}
}
