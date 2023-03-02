#include <stdio.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers represented as strings and stores the
 * result in r.
 * @n1: First number to add.
 * @n2: Second number to add.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer r.
 *
 * Return: Pointer to buffer r if the result is not too large, 0 otherwise.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len_1, len_2, carry, i, j;
    char tmp;

    len_1 = _strlen(n1);
    len_2 = _strlen(n2);
    carry = 0;

    if (len_1 + 2 > size_r || len_2 + 2 > size_r) // check if size of numbers is greater than buffer size
        return (0);

    for (i = len_
