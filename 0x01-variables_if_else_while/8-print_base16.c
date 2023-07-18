#include <stdio.h>

/**
 * main - prints base 16 digits
 *
 * Return: always success
 */

int main(void)
{
	int count;
	char letter;

	for (count = 0; count < 10; count++)
		putchar('0' + count);

	for (letter = 'a'; letter < 'g'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
