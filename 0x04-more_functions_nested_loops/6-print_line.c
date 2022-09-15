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
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
