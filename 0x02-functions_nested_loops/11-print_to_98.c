#include <stdio.h>

/**
* print_to_98 - prints the n times table, starting with 0
*
* @n: Holds the nth value
*
* Description: prints the n times table, starting with 0
*
* Return: void.
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
