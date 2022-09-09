#include <stdio.h>

/**
* main - The code begins to run from main
*
* Description: This program This program prints
* all possible different combinations of
* three digits separated by ',', followed by
* a space and the three digits are different.
*
* Return: int return of 0 for (Success)
*/
int main(void)
{
	int i = 48;
	int j  = 48;
	int k = 48;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			k = j + 1;
			while (k < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < 55 || j < 56 || k < 57)
				{
					putchar(44);
					putchar(32);
				}
				k++;
			}

			j++;
		}

		i++;
	}

	putchar('\n');
	return (0);
}
