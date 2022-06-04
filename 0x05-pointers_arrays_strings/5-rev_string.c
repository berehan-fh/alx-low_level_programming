#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[i])
		i++;
	while (j < i)
	{
		temp = s[j];
		s[j++] = s[--i];
		s[i] = temp;
	}
}
