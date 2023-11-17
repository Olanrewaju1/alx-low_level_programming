#include "main.h"

/**
 * _strncpy - function that copy a n byte of string from src to dest
 * @dest: dest pointer
 * @src: source pointer
 * @n: n-byte of src to be copy
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
