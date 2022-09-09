#include <stdio.h>

/**
* main - Entry point
*
* Description: This program prints
* all possible combinations of single-digit numbers
* separated by ',', followed by a space and
* printed in ascending order.
*
* Return: Always returns int 0 for (Success)
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
		putchar('\n');
	return (0);
}
