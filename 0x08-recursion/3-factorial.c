#include "main.h"

/**
 * factorial - function to print the factorial of a number
 * @n:Given number
 *
 * Return:0(Always)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n < 2)
	{
		return (1);
	}

	else
	{
		return (n * (n - 1));
	}
}
