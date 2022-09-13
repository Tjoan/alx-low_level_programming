#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Description: prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: void.
 */

void jack_bauer(void)
{
	int j;
	int k;

	for (j = 0; j <= 23; j++)
	{
		for (k = 0; k <= 59; k++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(':');
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar('\n');
		}
	}
}
