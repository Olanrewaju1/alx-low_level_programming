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

	for (len =  0; str[len] != '\0'; len++)
	{

	}

	len++;

	if (len % 2 == 0)
	{
		n = len / 2;
	}

	else
	{
		n = (len + 1) / 2;
	}

	for (; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
