#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n:parameter
 *
 * Return:0
 */


void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i > 0)
		{
			_putchar('_');
		}
		else if(i <= 0)
		{
			_putchar('\n');
		}

		
	}

	_putchar('\n');

	return (0);
}
