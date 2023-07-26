#include "main.h"

/**
 * rev_string - reverses string
 *
 * @s: string
 *
 * Return: string inverse
 */

void rev_string(char *s)
{
	char rvrsl = s[0];
	int countr = 0;
	int i;

	while (s[countr] != '\0')
		countr++;

	for (i = 0; i < countr; i++)
	{
		countr--;
		rvrsl = s[i];
		s[i] = s[countr];
		s[countr] = rev;
	}
}
