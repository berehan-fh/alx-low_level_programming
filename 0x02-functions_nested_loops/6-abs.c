#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @n: The number who absolute value is to be computed
 *
 * Return: the absolute value of an integer
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
