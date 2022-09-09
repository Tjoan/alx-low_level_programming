#include <stdio.h>

/**
* main - Entry point of the code
*
* Description:TThis program prints all
* single digit numbers of base 10 starting from 0,
* followed by a new line.
*
* Return: int value of 0 indicating  (Success)
*/
int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
