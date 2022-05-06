#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to a string to be printed in reverse
 */
void print_rev(char *s)
{
	int j;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}


	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
