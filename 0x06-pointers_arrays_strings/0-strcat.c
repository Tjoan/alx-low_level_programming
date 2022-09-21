#include "main.h"

/**
 * _strcat -  concatenates two strings.
 *
 * @dest: first variable
 * @src: second variable
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = i;
	j = 0;
	while (src[j] != '\0')
	{
		dest[k] = src[j];
		j++;
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
