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
	int i = 2;
	float j = 1, k = 2, l = j + k;

	printf("%.0f, ", j);
	printf("%.0f, ", k);
	while (i < 98)
	{	
		i++;
		if (i < 98)
		{
			printf("%.0f, ", l);
		}else{
			printf("%.0f, ", l);
		}
		j = k;
		k = l;
		l = j + k;
		
	}
	printf("\n");
	return (0);
}
