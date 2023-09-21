#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: pointer
 * Return: string function
 */
char *rot13(char *s)
{
	int a, b;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
	for (b = 0; b < 52; b++)
	{
		if (s[a] == data1[b])
		{
			s[a] = datarot[b];
			break;
		}
	}
	}
	return (s);
}

