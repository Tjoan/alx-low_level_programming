#include <stdio.h>

/**
* main - prints the largest prime factor of the number
* 612852475143, followed by a new line.
*
* Description: finds and prints the largest prime factor
* of the number 612852475143, followed by a new line.
*
* Return: Always 0.
*/

int main(void)
{
	long int i = 612852475143;
	long int j = 2;

	while (i != j)
	{
		if (i % j != 0)
		{
			j++;
		}
		else
		{
			i = (i / j);
		}
	}

	printf("%li\n", i);

	return (0);
}
