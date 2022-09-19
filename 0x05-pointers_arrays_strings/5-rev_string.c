#include "main.h"

/**
 * rev_string -  reverses a string.
 *
 * @s: variable used
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int n;
	int p;
	int x;
	int r;
	char i;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	r = n - 1;
	p = r;
	x = p / 2;
	while (p >= x)
	{
		if (p > x)
		{
			i = s[p];
			s[p] = s[r - p];
			s[r - p] = i;
		}
		else if (p == x)
		{
			s[p] = s[p];
		}
		p--;
	}
}
