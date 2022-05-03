#include <stdio.h>

/**
 * _isalpha - checks for alphabetic characters
 * @c: The character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase... 0 Always
 */
int _isalpha(int c)
{
	int checker;

	for (checker = 'a'; checker <= 'z'; checker++)
	{
		if (c == checker)
			return (1);
	}
	for (checker = 'A'; checker <= 'Z'; checker++)
	{
		if (c == checker)
			return (1);
	}

	return (0);
}

