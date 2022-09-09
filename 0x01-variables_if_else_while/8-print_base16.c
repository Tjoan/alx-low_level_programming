#include <stdio.h>

/**
* main - Entry point of the Code
*
* Description: This program prints all the numbers
* of base 16 in lowercase, followed by a new line.
*
* Return: Always returns an int 0 for (Success)
*/
int main(void)
{
	int j;

	for (j = 0; j < 48; j++)
	{
		if (j < 10)
			putchar(j + '0');
		else if (j > 41)
			putchar(j - 10 + 'A');
	}
			putchar('\n');
	return (0);
}
