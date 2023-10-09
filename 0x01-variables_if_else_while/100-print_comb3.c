#include <stdio.h>

/**
 * main - function to print 2 comb digit
 *
 * Return: 0
 */
                                                                                                                                                     int main(void)                                                                                                                                       {
        int i;
        int j;

        for (i = 0; i <= 8; i++)
        {
                for (j = 1; j <= 9; j++)
                {
                        putchar(i + 48);
                        putchar(j + 48);
                        if (i != 8 || j != 9)
                        {
                                putchar(44);
                                putchar(32);
                        }


                }
                j = i + 1;
        }

        putchar(10);
        return (0);
}
