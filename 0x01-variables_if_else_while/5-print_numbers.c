#include <stdio.h>

/**
 * main - prints base ten (decimal) digits
 *
 * Return: always success
 */

int main(void)
{
	int count = 0;

	while (count < 10)
	{
		printf("%d", count);
		count++;
	}
	putchar('\n');

	return (0);
}
