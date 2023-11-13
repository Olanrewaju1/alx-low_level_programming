#include "main.h"

/**
 * puts2 - function thst print other starting from index 0
 * @str : pointer to string
 *
 * Return
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
