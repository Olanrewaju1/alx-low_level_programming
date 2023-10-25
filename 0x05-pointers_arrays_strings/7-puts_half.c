#include "main.h"

/**
 * puts_half - function to prints half of a string
 * @str:character function
 *
 * Return:nothing
 */

void puts_half(char *str)
{
	int len, n;

	for (len = 0; str[len] != '\0'; len++)
	{

	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}

	else if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}

	for (len = n; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
