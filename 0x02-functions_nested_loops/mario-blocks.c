#include <stdio.h>

/**
 * main - prints a block of pound making a wall
 *
 * i - counter
 *
 * Return: success
 */

int main(void)
{
	int i = 0;

	while (i < 11)
	{
		putchar('#');
		i++;
	}

	putchar('\n');

	return (0);
}
