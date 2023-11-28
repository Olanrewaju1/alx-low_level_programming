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

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 53; i++)
		{
			if (str[i] == data[j])
			{
				str[i] = encoded[j];
				break;
			}
		}
	}

	return (str);
}
