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
	int cnt = 2;

	float i = 1;
	float j = i + 1;
	float k = i + j;

	printf("%0.0f, ", i);
	printf("%0.0f, ", j);
	while (cnt < 98)
	{
		cnt++;
		printf("%0.0f", k);
		i = j;
		j = k;
		k = i + j;
		if (cnt < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
