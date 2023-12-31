#include "main.h"

/**
 * _strncat - concatenates n bytes from one string to another
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of string to concatenate
 *
 * Return: a pointer to string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
