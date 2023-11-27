#include "main.h"

/**
 * leet - function to encode string
 * @str: string
 *
 * Return: string
 */

char *leet(char *str)
{
	char upper[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char lower[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char encoded[] = {'4', '3', '0', '7', '1', '\0'};

	int i, j;

	for (j = 0; upper[j] != '\0' && lower[j] != '\0'; j++)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if ((upper[j] == str[i]) || (lower[j] == str[i]))
			{
				str[i] = encoded[j];
			}
		}
	}

	return (str);
}
