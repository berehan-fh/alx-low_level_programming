#include "main.h"

/*
 *  print_alphabet_x10: prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 */
void print_alphabet_x10(void)
{
	int n, i;

	i = 0;

	while (i < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		i++;
		_putchar('\n');
	}
}
