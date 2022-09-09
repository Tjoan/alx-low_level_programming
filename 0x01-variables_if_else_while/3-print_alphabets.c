#include <stdio.h>

/**
* main - Entry point of code
*
* Description: This program prints the alphabet
* in lowercase, and then in uppercase, followed by a new line.
*
* Return: return as int value 0 for (Success)
*/
int main(void)
{
	int a, b;

	a = 97;
	b = 65;

	while (a < 123)
	{
		putchar(a);
		a++;
	}

	while (b < 91)
	{
		putchar(b);
		b++;
	}

	putchar(10);

	return (0);
}
