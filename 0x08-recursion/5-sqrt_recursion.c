#include "main.h"

/**
 * _sqr_pre - function to return the natural square root
 * @n: first int
 * @guess: first guess
 *
 * Return: 0
 */

int _sqr_pre(int n, int guess)
{
	if (guess % (n / guess) == 0)
	{
		if (guess * (n / guess) == n)
		{
			return (guess);
		}

		else
			return (-1);
	}

	return (_sqr_pre(n, guess + 1));
}

/**
 * _sqrt_recursion - function to return the square root of a integer with
 * natural square root
 * @n: integer
 *
 * Return:0(Always)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 1)
	{
		return (1);
	}

	else if (n == 0)
	{
		return (0);
	}

	return (_sqr_pre(n, 2));
}
