#include<stdio.h>
#include "main.h"

/**
 * _strcat - this function appends src string to the dest
 * @dest: String to overwrite
 * @src: String to append
 *
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
