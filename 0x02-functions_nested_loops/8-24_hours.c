#include "main.h"

/**
 * jack_bauer - a function that prints every minute of
 * the day of Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int t_hrs, t_mins;

	for (t_hrs = 0; t_hrs <= 23; t_hrs++)
	{
		for (t_mins = 0; t_mins <= 59; t_mins++)
		{
			_putchar((t_hrs / 10) + '0');
			_putchar((t_hrs % 10) + '0');
			_putchar(58);
			_putchar((t_mins / 10) + '0');
			_putchar((t_mins % 10) + '0');
			_putchar('\n');
		}
	}
}
