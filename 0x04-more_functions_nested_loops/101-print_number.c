#include "main.h"
#include <stdio.h>

/**
* main - prints an integer.
*
* @n: is a variable.
*
* Description: function that prints an integer.
*
* Return: Always 0.
*/

void print_number(int n)
{

	unsigned int i = 0;

	if  (n < 0)
	{
		i = -n;
		_putchar('-');
	}

	else
	{
		i = n;
	}

	if (i / 10)
	{
		print_number(i / 10);
	}

	_putchar((i % 10) + '0');
}
