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
	int i = 3;
	float j = 1, k = 2, l = j + k;

	printf("%.0f, ", j);
	printf("%.0f, ", k);
	while (i < 97)
	{
		i++;
		printf("%.0f, ", l);
		j = k;
		k = l;
		l = j + k;
	}
	printf("%.0f", l);
	printf("\n");
	return (0);
}
