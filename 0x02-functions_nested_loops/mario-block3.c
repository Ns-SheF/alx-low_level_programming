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
		putchar('\n');
		putchar('#');

		int j = 0;

		while (j <= 11)
		{
			putchar('#');
			j++;
		}

		i++;
	}

	putchar('\n');

	return (0);
}