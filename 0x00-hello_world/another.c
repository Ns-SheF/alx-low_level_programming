#include <stdio.h>

/**
 * main - entry point: prints words
 *
 * Return: Success (0)
 */

int main(void)
{
	char lan[20];

	puts("Programming is like building a multilingual puzzle\n");

	puts("What is your native language?");

	scanf("%s", lan);

	printf("%s, and now you're learning C. bravo!\n", lan);

	return (0);
}
