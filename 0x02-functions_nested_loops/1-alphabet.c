#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 * then prints newline after
 *
 * Return: success (0)
 */

void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}


	_putchar('\n');
}
