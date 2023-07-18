#include <stdio.h>

/**
 * main - Prints lowercase alphabets excluding 'q' and 'e'
 *
 * Return: Always success
 */

int main(void)
{
	char letter, non1, non2;

	non1 = 'q';
	non2 = 'e';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if ((letter != non1) && (letter != non2))
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
