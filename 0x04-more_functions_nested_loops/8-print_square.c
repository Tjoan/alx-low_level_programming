#include "main.h"

/**
* print_square - prints a square.
*
* @size: is a variable.
*
* Return: void.
*/
void print_square(int size)
{
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (j = 0; j < size; j++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
