#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Description: generates random valid passwords
 * for the program 101-crackme.
 *
 * Return: 0 is success
 */
int main(void)
{

	int i, j, k, sum, n;
	int pasw[1000];

	j = 78;
	k = 2772;
	sum = 0;

	srand(time(NULL));

	for (i = 0; i <= 1000; i++)
	{
		pasw[i] = rand() % j;
		sum = (sum + (pasw[i] + '0'));
		putchar(pasw[i] + '0');
		if ((k - sum) - '0' < j)
		{
			n = k - sum - '0';
			sum = (sum + n);
			putchar(n + '0');
			break;
		}
	}
	return (0);
}

