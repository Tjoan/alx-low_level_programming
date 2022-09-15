#include "main.h"

/**
* print_square - prints a square, followed by a new line.
*
* @size: is a variable
*
* Description: function that prints a square,
* followed by a new line.
*
* Return: void.
*/
void print_square(int size)
{
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');
	k = 0;
	while (k < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			_putchar('\n');
			j++;
		}
		k++;
	}
}
