#include "main.h"

/**
 * _strncat - function to concatenate two string and use n byte for second string
 * dest: first string
 * src: second string
 *
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return dest;
}
