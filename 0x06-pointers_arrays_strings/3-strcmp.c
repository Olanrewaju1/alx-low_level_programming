#include "main.h"
#include <stdio.h>
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

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
}
