#include "main.h"

/**
 * _puts_recursion - function to prints a string
 * @s: string 
 *
 * Return:void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recurson(s + 1);
	}

	else
		_putchar('\n');
}
