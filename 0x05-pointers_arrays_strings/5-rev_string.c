#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		if (s[i + 1] != '\0')
			i++;
		else
			break;
	}

	while (i != j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}
