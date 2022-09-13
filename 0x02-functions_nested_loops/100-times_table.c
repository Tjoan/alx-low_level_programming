#include "main.h"

/**
* print_times_table - prints the n times table, starting with 0
*
* @n: Holds the nth value
*
* Description: prints the n times table, starting with 0
*
* Return: void.
*/

void print_times_table(int n)
{
	int i, j, ij;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				ij = i * j;

				if (j == 0)
					_putchar('0');
				else if (ij < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(ij % 10 + '0');
				}
				else if (ij >= 10 && ij < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((ij / 10) % 10 + '0');
					_putchar(ij % 10 + '0');
				}
				else if (ij > 99 && ij < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(ij / 100 + '0');
					_putchar((ij / 10) % 10 + '0');
					_putchar(ij % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
