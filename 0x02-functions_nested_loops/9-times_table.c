#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0
*
* Description: prints the 9 times table, starting with 0
*
* Return: void.
*/

void times_table(void)
{
	int i;
	int j;
	int ij;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			ij = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (ij < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((ij % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((ij / 10) + '0');
				_putchar((ij % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
