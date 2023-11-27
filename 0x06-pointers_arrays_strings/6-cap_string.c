#include "main.h"

/**
 * cap_string - function to capitalize all word of a string
 * @str : string
 *
 * Return: string
 */

char *cap_string(char *str)
{
	char seperator[] = {',', ';', '.', '!', '?', '"', '(',
	')', '{', '}', 32, 10, 9, '\0'};

	int i, j;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 'a' + 'A';
	}

	for (j = 0; seperator[j] != '\0'; j++)
	{
		for (i = 1; str[i] != '\0'; i++)
		{
			if (seperator[j] == str[i])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 'a' + 'A';
				}
			}
		}
	}

	return (str);
}
