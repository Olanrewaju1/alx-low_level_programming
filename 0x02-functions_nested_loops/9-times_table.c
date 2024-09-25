#include "main.h"

/**
 * times_table - function that prints 9 times table starting with 0
 *
 * Return:0
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (result <= 9)
			{
				if (result == 0 && j == 0)
				{
					_putchar(result + '0');
				}
				else
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(result + '0');
				}
			}
			else
			{
				_putchar(',');
				_putchar(32);
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			
			

		}
		_putchar('\n');
	}
}
