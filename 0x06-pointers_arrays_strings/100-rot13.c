#include "main.h"

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
	int i, j;

	for (i = 0; data[i] != '\0'; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (data[i] == str[j])
			{
				str[j] = encoded[i];
			}
		}
	}

	return (*str);
}
