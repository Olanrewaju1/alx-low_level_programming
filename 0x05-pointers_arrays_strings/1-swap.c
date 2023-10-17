#include "main.h"

/**
 * swap_int - function to swap two integer using pointer
 * @a: first int paramter
 * @b: second int parameter
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;

	*a = j;
	*b = i;
}
