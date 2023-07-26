#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int len = 0;
	int ln;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	s--;

	for (ln = len; ln > 0; ln--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\0');
}
