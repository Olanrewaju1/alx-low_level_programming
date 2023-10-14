#include "main.h"

/**
 * _isupper - function that checks fr uppercase character
 * @c: character
 * Return:1
 */


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
