#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to print the sign of
 *
 * Return: 1 if n > 0, returns o if n is zero, returns -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
		_putchar('0');

	return (0);
}
