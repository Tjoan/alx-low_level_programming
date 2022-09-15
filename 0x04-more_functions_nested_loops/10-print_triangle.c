#include "main.h"

/**
 * print_triangle - prints a triangle,followed by a new line.
 *
 * @size: is a vairable.
 *
 * Description: function that prints a triangle,
 * followed by a new line.
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i = 0, j, k;

	if (size > 0)
	{
		while (i < size)
		{
			for (j = size - 1; j > i; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i + 1; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
