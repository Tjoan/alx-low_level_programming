#include <stdio.h>

/**
* main - Entry poimt of the code
*
* Description: This program prints the lowercase
* alphabet in reverse, followed by a new line.
*
* Return: int value of 0 indicatrs (success)
*/
int main(void)
{
	int j;

	for (j = 122; j > 96; j--)
	{
		putchar(j);
	}
		putchar('\n');
	return (0);
}
