#include "main.h"
#include <stdio.h>

/**
 * rot13 - function to encode a string using the rot13
 * @str: string to be encoded
 *
 * Return: string
 */

char *rot13(char *str)
{
	char latin_alphabet[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encoded[53] = "NOPQRSTUVWXYZABCDEFGHIJLMnopqrstuvwxyzabcdefghijklm";
	int j, i;

	for (j = 0; latin_alphabet[j] != '\0'; j++)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (latin_alphabet[j] == str[i])
			{
				str[i] = encoded[j];
				break;
			}
		}
	}

	return (str);
}
