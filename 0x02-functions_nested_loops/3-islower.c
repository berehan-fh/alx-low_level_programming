#include <stdio.h>

/**
 * _islower - checks for a lower case character
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase 0 otherwise
 */
int _islower(int c)
{
	int k;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (c == k)
			return (1);
	}

	return (0);
}
