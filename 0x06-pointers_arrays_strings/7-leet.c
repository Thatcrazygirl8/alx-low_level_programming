#include <stdio.h>
#include "main.h"

/**
 * leet - Encodes a string into "1337".
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	int i, j;
	char leet[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leet[j]; j++)
		{
			if (str[i] == leet[j])
			{
				str[i] = num[j];
			}
		}
	}

	return (str);
}
