#include "main.h"

/**
 * print_rev - function that print a string in reverse
 * @s: parameter
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, j, length;

	for (i = 0; s[i] != '\0'; i++)
	{

	}

	length = i;


	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar(10);
}
