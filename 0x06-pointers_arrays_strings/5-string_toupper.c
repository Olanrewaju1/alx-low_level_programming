#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function to convert string to uppercase
 * @s : string to be converted
 *
 * Return: string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}

	return (s);
}

int main(void)
{
	char str[100] = "";
	string_toupper(str);
	printf("%s\n",str);
}
