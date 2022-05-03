#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int i, j, k, l, x, y;

	for (i = '0'; i <= '2'; i++)
	{
		if (i == '2')
			x = '3';
		else
			x = '9';
		for (j = '0'; j <= x; j++)
		{
			if (i == '2' && j == '3')
				y = '5';
			else
				y = '6';
			for (k = '0'; k <= y; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
