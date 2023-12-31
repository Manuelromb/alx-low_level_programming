/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: main string
 * @accept: String to be compared to
 * Return: 0
 **/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; ++i)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}

		s++;
	}

	return (0);
}
