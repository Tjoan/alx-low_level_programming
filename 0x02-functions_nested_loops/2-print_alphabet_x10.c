#include "main.h"

/**
* main - check the code.
*
* Description: This prints 10 times the alphabet,
* in lowercase, followed by a new line.
*
* Return: Always 0.
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
