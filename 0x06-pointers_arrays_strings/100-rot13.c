#include "main.h"

/**
 * rot13 - function to encode a string using the rot13
 * @s: string to be encoded
 *
 * Return: string
 */

char *rot13(char *s)
{
	int i;
	int j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char reverse[] = "NOPQRSTUVWXYZABCDEFGHIJLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data[j])
			{
				s[i] = reverse[j];
				break;
			}
		}
	}

	return (s);
}
