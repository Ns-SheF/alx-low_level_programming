#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd, make even [len -1]
 *
 * @str: input string
 *
 * Return: half of input
 */

void puts_half(char *str)
{
	int a, n, len = 0;

	for (a = 0; str[a] != '\0'; a++)
		len++;

	if ((len % 2) == 1)
		n = (len - 1) / 2;
	else
		n = len / 2;

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a];

	_putchar('\n');
}
