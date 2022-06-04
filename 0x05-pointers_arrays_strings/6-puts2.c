#include "main.h"

/**
 * puts2 - prints every other character of a string starting from the first
 * @str: pointer to a string to be printed
 */
void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i])
		i++;
	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}

	_putchar('\n');
}
