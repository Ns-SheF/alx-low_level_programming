#include "main.h"

/**
 * puts2 - prints one character out of two
 *
 * @str: input
 *
 * Return: one
 */

void puts2(char *str)
{
	int len = 0;
	int b, a = 0;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		len++;
	}

	a = len - 1;

	for (b = 0; b <= a; b++)
	{
		if (b % 2 == 0)
			_putchar(str[b];

	}

	_putchar('\n');

}
