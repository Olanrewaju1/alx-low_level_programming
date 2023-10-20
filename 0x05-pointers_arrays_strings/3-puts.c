#include "main.h"

/**
 * _puts - function to print string
 * @s:char
 *
 * Return: 0
 */

void _puts(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
