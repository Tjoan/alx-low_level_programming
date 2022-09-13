#include <stdio.h>

/**
* main - finds and prints the first 98 Fibonacci numbers,
* starting with 1 and 2, followed by a new line.
*
* Description: finds and prints the first 98 Fibonacci numbers,
* starting with 1 and 2, followed by a new line.
*
* Return: always 0
*/
int main(void)
{
	unsigned long int a, a1, a2, b, b1, b2, c, c1, c2, d, e, g;

	g = 1000000000;
	a = 1;
	b = 2;
	c = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);
	for (d = 3; d <= 88; d++)
	{
		printf("%lu, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	b1 = b / g;
	b2 = b % g;
	c1 = c / g;
	c2 = c % g;
	for (e = 89; e <= 97; e++)
	{
		printf("%lu%lu, ", c1, c2);
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
		c1 = a1 + b1 + ((a2 + b2) / g);
		c2 = (a2 + b2) % g;
	}
	printf("%lu%lu\n", c1, c2);
	return (0);
}
