#include <stdio.h>
/**
* _strchr - function that locates a character in a string
* @s: destination value
* @c: source value
* Return: a pointer to the first occurrence of the character c in the string s, or NULL if is not found
**/

char *_strchr(char *s, char c)
{
	int i = 0;
	char *value;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			printf("Here\n");
			s = *(s + i);
			return (s);
		}
		else
		{
			value = '\0';
		}
		i++;
	}
	return (value);
}
