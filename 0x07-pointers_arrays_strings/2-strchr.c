/**
* _strchr - function that locates a character in a string
* @s: destination value
* @c: source value
* Return: a pointer  in the string s, or NULL if is not found
**/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (0);
}
