#include <stdio.h>

/**
* main - finds and prints the sum of the even-valued terms
* below 4,000,000, followed by a new line.
*
* Description: finds and prints the sum of the even-valued terms
* below 4,000,000, followed by a new line.
*
* Return: Always 0.
*/
int main(void)
{	
	long int i = 0;
	long int j = 1;
	long int sum = 0;
	long int fib = 0;
	

	while (fib < 4000000)
	{
		fib = i + j;
		if (fib % 2 == 0)
		{
			sum = (fib + sum);
		}
		i = j;
		j = fib;
	}

	printf("%li\n", sum);

	return (0);
}

