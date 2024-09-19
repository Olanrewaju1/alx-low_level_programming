#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10
 * times the alphabet, in lowercase
 *
 * @line - var1
 * @c - character
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int line;
	char c;

	for (line = 1; line <= 10; line++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
