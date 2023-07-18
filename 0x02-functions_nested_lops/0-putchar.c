#include <unistd.h>

/**
 *  main - prints the string value putchar
 *
 *  Return: Always 0 (success)
 */

int main(void)
{
	char *str = '_putchar\n';

	while (*str)
	{
		write(1, str, 1);
		str++;
	}

	return (0);
}
