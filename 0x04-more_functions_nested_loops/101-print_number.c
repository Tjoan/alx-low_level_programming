#include "main.h"
#include <stdio.h>

/**
* main - prints an integer.
*
* @n: is a variable.
*
* Description: function that prints an integer.
*
* Return: void
*/

int main(void)
{
    print_number(98);
    _putchar('\n');
}

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		_putchar(n / 10);
	}
	_putchar(n % 10 + '0');
}
