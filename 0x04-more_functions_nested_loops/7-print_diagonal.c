#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: is a variable.
 *
 * Description: function draws a diagonal line on the terminal.
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		while (i < n)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
