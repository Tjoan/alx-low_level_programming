#include <stdio.h>

/**
* main - Entry point of code
*
* Description: This program prints all possible
* different combinations of two digits separated by ',',
* followed by a space and the two digits are different.
*
* Return: Always return an int 0 (Success)
*/

int main(void)
{
	int i = 48;
	int j = 48;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);

			if (i < 56 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
