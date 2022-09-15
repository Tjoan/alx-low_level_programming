#include "main.h"

/**
* _isdigit - checks for a digit (0 through 9).
*
* @c: is a variable.
*
* Description: function that checks for a digit (0 through 9).
*
* Return: 1 if c is digit, 0 otherwise.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
