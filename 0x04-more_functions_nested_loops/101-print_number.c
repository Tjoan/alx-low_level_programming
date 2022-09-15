#include "main.h"

/**
* main - prints an integer.
*
* @n: is a variable.
*
* Description: function that prints an integer.
*
* Return: void
*/
void print_number(int n)
{
	unsigned int i, j, k;

	if (n < 0)
	{
		_putchar(45);
		i = -n;
	}
	else
	{
		i = n;
	}
	j = i;
	k = 1;

	while (j > 9)
	{
		j /= 10;
		k *= 10;
	}
	for (; k >= 1; k /= 10)
	{
		_putchar(((i / k) % 10) + 48);
	}
}
