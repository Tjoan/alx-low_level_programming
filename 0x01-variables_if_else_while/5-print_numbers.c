#include <stdio.h>

/**
* main - Entry point of the C code
*
* Description: This program prints prints
* all single digit numbers of base 10 starting from 0,
* followed by a new line.
*
* Return: int 0 for (Success)
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
		putchar('\n');
	return (0);
}
