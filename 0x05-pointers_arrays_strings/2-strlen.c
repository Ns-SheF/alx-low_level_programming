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
	while (*s[len] != '\0')
	{
		len++;
	}

	return (len);
}
