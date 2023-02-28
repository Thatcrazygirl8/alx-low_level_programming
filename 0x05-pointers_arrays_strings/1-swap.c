#include "main.h"
#include <stdio.h>

/**
 * main - swaps numbers
 *
 * Return: Always 0.
 */


int main(void)
{
	int a, b;

	printf("98 ");
	scanf("%d", &a);
	printf("\n, 42");
	scanf("%d", &b);
	int temp = a;

	a = b;
	b = temp;
	printf("\nAfter Swapping: a = %d, b = %d", a, b);
		return (0);
}
