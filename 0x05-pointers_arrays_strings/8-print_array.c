#include "main.h"

/**
 * print_array - function that print n element of an array
 * @a - pointer
 * @n: nth term
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[i]);
}
