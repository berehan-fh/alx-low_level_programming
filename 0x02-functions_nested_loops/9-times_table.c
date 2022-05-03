#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, j, mul, digit_1, digit_2;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = i * j;
			if (mul <= 9)
			{
				_putchar(mul + '0');
			}
			else
			{
				digit_2 = mul % 10;
				digit_1 = mul / 10;
				_putchar(digit_1 + '0');
				_putchar(digit_2 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				if (i * (j + 1) <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
		}

		_putchar('\n');
	}
}

