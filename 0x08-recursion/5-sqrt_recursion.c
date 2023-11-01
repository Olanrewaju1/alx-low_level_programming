#include "main.h"

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

	else if(n == 0 || n == 1)
	{
		return (1);
	}

	else
	{
		return _sqr_pre(n, 1);
	}
}
