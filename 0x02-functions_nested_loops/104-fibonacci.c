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
	int i, j = 0, k = 1, l = 2;
	printf("%d, ", k);
	printf("%d, ", l);
	for (i = 1; i < 98; i++)
	{
		j = k 
		k = l;
		l = j + k;
		printf("%d, ", l);
	}
	printf("\n");
	return (0);
}
