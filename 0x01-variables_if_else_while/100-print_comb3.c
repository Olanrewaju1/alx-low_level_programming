#include <stdio.h>

/**
 * main - function to print 2 comb digit
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j = 1;

	for (; i <= 8;)
	{
		for (; j <= 9;)
                {
			putchar(i + 48);
                        putchar(j + 48);
                        if (i != 8 || j != 9)
                        {
                                putchar(44);
                                putchar(32);
                        }

			j++;


                }
		i++
                j = i + 1;
        }

        putchar(10);
        return (0);
}
