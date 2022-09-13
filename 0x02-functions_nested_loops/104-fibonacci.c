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
	int i;
	float j = 0, k = 1, l = 2;
	
	printf("%.0f, ", k);
	printf("%.0f, ", l);
	for (i = 1; i < 98; i++)
	{
		j = k;
		k = l;
		l = j + k;
		printf("%.0f, ", l);
	}
	printf("\n");
	return (0);
}
