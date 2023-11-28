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
	char data[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encoded[53] = "NOPQRSTUVWXYZABCDEFGHIJLMnopqrstuvwxyzabcdefghijklm";
	int j, i;

	for (j = 0; data[j] != '\0'; j++)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (data[j] == str[i])
			{
				str[i] = encoded[j];
				break;
			}
		}
	}

	return (str);
}
