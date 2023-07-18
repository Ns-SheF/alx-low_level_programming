#include <stdio.h>

/**
 * main - prints aplphabets in reverse
 *
 * Return: always success
 *
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);

}
