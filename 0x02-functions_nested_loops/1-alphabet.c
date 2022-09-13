#include "main.h"

/**
* main - check the code
*
* print_alphabet funtion prints alphabet
*
* Description: This prints the alphabet,
* in lowercase, followed by a new line.
*
* Return: void.
*/

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
