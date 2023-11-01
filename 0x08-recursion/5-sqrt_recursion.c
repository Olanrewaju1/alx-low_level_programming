#include "main.h"

/**
 * _sqrt_recursion - function to return the square root of a integer with
 * natural square root
 * @n: integer
 *
 * Return:0(Always)
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
		return _sqr_pre(n, guess + 1);
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if(n == 0 || n == 0)
	{
		return (1);
	}

	else
	{
		return _sqr_pre(n, 1);
	}
}
