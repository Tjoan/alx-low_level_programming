#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: variable used
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int n;
	int i;
	int p;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	p = n - 1;
	i = 0;
	while (p >= i)
	{
		_putchar(s[p]);
		p--;
	}
	_putchar('\n');
}
