/**
 * _strcpy - copies the string pointed to by src to that pointed to by dest
 * @dest: the destination copy
 * @src: the source copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}

