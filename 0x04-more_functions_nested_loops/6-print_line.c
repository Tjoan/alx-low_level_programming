#include "main.h"

/**
* print_line - draws a straight line.
*
* @n: is a variable.
*
* Description: function draws a line.
*
* Return: void.
*/
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	if (n <= 0 || n  >= 0)
	{
		_putchar('\n');
	}
}
