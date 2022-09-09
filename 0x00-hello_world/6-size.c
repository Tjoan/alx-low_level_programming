#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char o;
	int k;
	long int o;
	long long int t;
	float i;

	printf("Size of a char: %lu byte(s)\n",
			 (unsigned long)sizeof(o));
	printf("Size of an int: %lu byte(s)\n",
			 (unsigned long)sizeof(k));
	printf("Size of a long int: %lu byte(s)\n",
			 (unsigned long)sizeof(o));
	printf("Size of a long long int: %lu byte(s)\n",
			 (unsigned long)sizeof(t));
	printf("Size of a float: %lu byte(s)\n",
			 (unsigned long)sizeof(i));
	return (0);
}
