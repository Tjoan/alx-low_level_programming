#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: variable used
 *
 * Return: void.
 */
void puts2(char *str)
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
		i += 2;

	}
	_putchar('\n');
}
