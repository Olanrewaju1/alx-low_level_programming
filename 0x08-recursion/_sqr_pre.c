#include "main.h"

int _sqr_pre(int n, int guess)
{
        if (guess * guess == n)
        {
                return (n);
        }

        else if (guess * guess > n)
        {
                return (-1);
        }

        else
        {
                return _sqr_pre(n, guess + 1);
        }
}
