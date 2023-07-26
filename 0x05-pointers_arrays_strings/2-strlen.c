#include "main.h"

/**
 * _strlen - returns the lengh of a string
 *
 * @s: string
 *
 * Return: length of s
 */

int _strlen(char *s)

{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);
}
