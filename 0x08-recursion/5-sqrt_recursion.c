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
	if (guess * guess == n)
	{
		return (n);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (_sqr_pre(n, guess + 1));
	}
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

	else if (n == 0 || n == 1)
	{
		return (1);
	}

	else
	{
		return (_sqr_pre(n, 2));
	}
}
