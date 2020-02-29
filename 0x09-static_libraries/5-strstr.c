/**
 * _strstr - function that locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, a, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (a = i, j = 0; needle[j] != '\0'; a++, j++)
		{
			if (haystack[a] != needle[j] || haystack[a] == '\0')
				break;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
