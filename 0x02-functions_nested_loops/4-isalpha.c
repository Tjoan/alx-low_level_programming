#include "main.h"

/**
* _isalpha -  checks for alphabetic character
*
* Description:  checks for alphabetic character
*
* @c: holds the value to be checked
*
* Return: 1, if c is a letter, lowercase or uppercase
* and 0 if otherwise
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
