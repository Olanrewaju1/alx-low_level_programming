#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s:char point var
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int length;
	int i, j;
	char str;

	if (s == NULL)
		return;
	while(s[length] != '\0')
	{
		length++;
	}

	for (i = 0, j = length - 1; i < j; i++,j--)
	{
		str = s[i];
		s[i] = s[j];
		s[j] = str;
	}
}
