#include "main.h"

/**
 * _isdigit - function to check for a digit form 0 through 9
 * @c: character
 * Return:1(suceess)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
