#include "main.h"

/**
 * pre_prime - function to check for prime
 * @n: number to be check
 * @guess: the number guesssed
 *
 * Return: 1(Success)
 */


int pre_prime(int n, int guess)
{
	if (n <= 1)
	{
		return (0);
	}

	if (guess * guess > n)
	{
		return (1);
	}

	if (n % guess == 0)
	{
		return (0);
	}

	return (pre_prime(n, guess + 1));
}

/**
 * is_prime_number - function to return wheather a num is prime or not
 * @n: number to be check
 *
 * Return: 1
 */

int is_prime_number(int n)
{
	return (pre_prime(n, 2));
}
