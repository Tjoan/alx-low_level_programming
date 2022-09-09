#include <stdio.h>

/**
* main - Entry point of the code
*
* Description: This program prints all alphabet
* in lowercase except q and e, followed by a new line.
*
* Return: returns an int 0 (Success)
*/
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return (0);
}
