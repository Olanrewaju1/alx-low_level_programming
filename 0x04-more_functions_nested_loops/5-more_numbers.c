#include "main.h"

/**
 * more_numbers - function to print 0 -14
 *
 * Return:void
 */


void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('1');
			}
			_putchar(i % 10 + '0');
		}

		_putchar('\n');
	}
}
