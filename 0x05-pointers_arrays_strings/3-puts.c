#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @str: varible used
 *
 * Return: void.
 */
void _puts(char *str)
{
	int n;
	int i;
	int p;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	p = n;
	i = 0;
	while (i < p)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
