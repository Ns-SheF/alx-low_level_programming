#include <stdio.h>

/**
 * main - prints decimal digits using PUTCHAR function
 *
 * Return: Always success
 */

int main(void)
{
	int count = 0;

	for (count = 0; count < 10; count++)
		putchar(48 + count);

	putchar('\n');

	return (0);
}

