/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: is a parameter
 * @accept: is a parameter
 * Return: the number of bytes in the initial segment of s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		if (!s[i])
			break;
	}
	return (0);
}
