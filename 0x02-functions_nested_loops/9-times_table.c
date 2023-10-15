#include "main.h"

/**
 * times_table - function that prints 9 times table starting with 0
 *
 * Return: void
 */


void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int num = i * j;

			if (num > 9)
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}

			else if (j != 0)
			{
				_putchar(32);
				_putchar(num + '0');
			}

			else
			{
				_putchar(num + '0');
			}

			if (j != 9)
			{
				_putchar(44);
				_putchar(32);
			}

		}

		_putchar('\n');
	}
}
