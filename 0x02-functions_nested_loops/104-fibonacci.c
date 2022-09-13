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
	int new, i, j = 0, k = 1;

	for (i = 1; i < 98; i++)
	{
		new = j + k;
		j = k;
		k = new;
		printf("%.0f, ", k);
	}
	printf("\n");
	return (0);
}
