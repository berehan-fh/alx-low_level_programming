#include "main.h"

/*
 * a function that prints -putchar
 *
 */
int main(void)
{
	char s[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
	return (0);
}
