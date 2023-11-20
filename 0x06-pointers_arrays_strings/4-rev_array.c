#include "main.h"

/**
 * reverse_array - function that reverse the content of array of integers
 * @a : array
 * @n : number of element of array
 *
 * Return:void
 */

void reverse_array(int *a, int n)
{
	int i, hold;

	for (i = 0; i < n / 2; i++)
	{
		hold = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = hold;
	}
}
