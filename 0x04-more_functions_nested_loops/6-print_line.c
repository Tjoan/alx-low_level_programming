#include "main.h"

/**
* print_line - draws a straight line in the terminal
*
*@n: is a variable
*
* Description: function that draws a straight 
* line in the terminal
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
