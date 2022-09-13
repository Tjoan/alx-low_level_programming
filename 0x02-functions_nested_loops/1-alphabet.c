#include "main.h"

/**
* main - check the code
*
* Description: This prints the alphabet,
* in lowercase, followed by a new line.
*
* Return: Always 0.
*/
int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
