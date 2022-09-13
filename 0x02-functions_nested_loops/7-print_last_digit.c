#include "main.h"

/**
* print_last_digit - prints the last digit of a number.
*
* Description: prints the last digit of a number.
*
* @j: n is an integer.
*
* Return: value of the last digit.
*/

int print_last_digit(int j)
{
	int k;

	k = j % 10;
	if (j < 0)
	{
		k = k * -1;
	}
	_putchar(k + '0');
	return (k);
}
