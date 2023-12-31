#include "main.h"
/**
 * _strcmp - function to compare two string
 * @s1: first string
 * @s2: second string
 *
 * Return:0
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0, j = 0; s1[i] != '\0' || s2[j] != '\0'; i++, j++)
	{
		if (s1[i] != s2[j])
		{
			return (s1[i] - s2[j]);
		}
	}

	return (0);
}
