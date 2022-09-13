#include "main.h"

/**
* print_alphabet - this prints the
*alphabets followed by a new line.
*
* Description: This prints alphabet
* in lowercase, followed by a new line.
*
* Return:  void, i.e. nothing.
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
