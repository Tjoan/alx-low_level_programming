#include "main.h"

/**
* print_alphabet_x10 - this prints the
*alphabets 10 times.
*
* Description: This prints 10 times the alphabet
* in lowercase, followed by a new line.
*
* Return: void, i.e. nothing.
*/

void print_alphabet_x10(void)
{
	int i;
	int alph;

	for (i = 1; i <= 10; i++)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		i++;
	}
}
