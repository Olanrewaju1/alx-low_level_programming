#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenate two string
 * @dest: string 1
 * @src: str 2
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
