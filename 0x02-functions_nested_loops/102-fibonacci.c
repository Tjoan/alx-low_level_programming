#include <stdio.h>

/**
* main - prints the first 50 Fibonacci nbers,
* starting with 1 and 2, followed by a new line.
*
* Description: prints the first 50 Fibonacci nbers,
* starting with 1 and 2, followed by a new line.
*
* Return: Always 0.
*/

int main(void)
{	
	long int i= 0;
	long int j = 1;
	long int fib;
	int n = 0;

	while (n < 49)
	{
		fib  = i + j;
		printf("%li, ", fib);
		i = j;
		j = fib;

		n++;
	}
	fib = i + j;
	printf("%li\n", fib);

	return (0);
}
