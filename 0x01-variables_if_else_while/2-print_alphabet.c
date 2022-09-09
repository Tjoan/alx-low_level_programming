#include <stdio.h>

/**
* main - Entry point of code
*
* Description: This program prints the
* alphabet in lowercase, followed by a new line
*
* Return: gives an int value of 0 for success
*/

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
