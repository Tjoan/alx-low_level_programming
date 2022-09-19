#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: first variable
 * @n: second variable
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;
	int b;

	b = 1;
	i = 0;
	if (n <= 0)
		printf("\n");
	else if (n > 0)
	{
		while (a[i] != '\0' && b < n)
		{
			printf("%d, ", a[i]);
			i++;
			b++;
		}
		printf("%d\n", a[i]);
	}
}
