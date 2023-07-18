#include <stdio.h>

/**
 * main - prints all single digits with space and comma
 *
 * Return: always success
 */

int main(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		putchar('0' + count);

		if (count < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
