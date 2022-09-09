#include <stdio.h>

/**
* main - Entry point
*
* Description: This program prints all
* possible combinations of two two-digit numbers.
*
* Return: returns int 0 (Success)
*/

int main(void)
{
	int i = 48;
	int j = 48;
	int k = 48;
	int l = 48;

	while (i < 58)
	{
		while (j < 58)
		{
			l = j + 1;
			k = i;
			while (k < 58)
			{
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if (i < 57 || j < 56 || k < 57 || l < 57)
					{
						putchar(44);
						putchar(32);
					}
					l++;
				}
				l = 48;
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
