#include "main.h"

/**
 * _islower - function to check if a character is lowercase
 * @c: character argument
 *
 * Return: 1
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
		return (0);
}
