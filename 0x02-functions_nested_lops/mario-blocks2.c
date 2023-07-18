#include <stdio.h>

/**
 * main - prints series of pound # to make a wall
 *
 * i - counter
 * j - counter
 *
 * Return: success
 */

int main(void)
{
	int i = 0;

	while (i <= 11)
	{
		putchar('#');

		int j = 0;

		while (j <= 11)
		{
			/* This will create a really long verticla line */
			/* instead of the intended wall */
			putchar('\n');
			putchar('#');
			j++;
		}

		i++;
	}

	return (0);
}
