#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compare two strings.
 *
 * @s1: the first string to be compared.
 * @s2: the second string to be compared.
 * Return: 0 if the two strings are equal,
 * negative if s1 <s2 and positive if s1 >s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
