#include "main.h"


/**
 * _abs - function that computes the absolute value of an integer
 * @n: variable
 *
 * Return:0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}

	else if (n < 0)
	{
		n *= -1;
		return (n);
	}


	return (n);
}
