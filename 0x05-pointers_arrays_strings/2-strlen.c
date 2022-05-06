/**
 * _strlen - returns the length of a string
 * @s: pointer to a string whose length to compute
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int length = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}

	return (length);
}
