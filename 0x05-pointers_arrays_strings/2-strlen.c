#include "main.h"

/**
 * _strlen - outputs the length of a string.
 *
 * @s: variable used.
 *
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int n;
	int lenght;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	lenght = n;
	return (lenght);
}
