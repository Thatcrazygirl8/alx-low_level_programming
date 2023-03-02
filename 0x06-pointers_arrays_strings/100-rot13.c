#include <stdio.h>
#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @str: The string to be encoded
 *
 * Return: a pointer to the encoded string
 */

char *rot13(char *str)
{
	int i, j;
	char rot_13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (str[j] == rot_13[i])
			{
			str[j] = rot_13[i + 13];
			break;
			}
		}
	}
	return (str);
}
