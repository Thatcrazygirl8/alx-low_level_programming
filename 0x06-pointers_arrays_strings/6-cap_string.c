#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string to be capitalized
 *
 * Return: pointer to the capitalized string
 */

char *cap_string(char *str)
{
	int i;
	char sep[] = " \t\n,.!?\"(,){,};";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || (str[i - 1] && strchr(sep, str[i - 1])))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
	}
	return (str);
}
