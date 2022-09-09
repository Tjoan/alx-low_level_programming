#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int c;
	long int e;
	long long int g;
	float b;

	printf("Size of a char: %lu byte(s)\n",
			 (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n",
			 (unsigned long)sizeof(c));
	printf("Size of a long int: %lu byte(s)\n",
			 (unsigned long)sizeof(e));
	printf("Size of a long long int: %lu byte(s)\n",
			 (unsigned long)sizeof(g));
	printf("Size of a float: %lu byte(s)\n",
			 (unsigned long)sizeof(b));
	return (0);
}
