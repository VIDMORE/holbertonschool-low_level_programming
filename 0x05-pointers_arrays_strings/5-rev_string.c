
/**
* rev_string - function that reverses a string
* @s: string
**/

void rev_string(char *s)
{
	int i, a;
	char b;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (i--, a = 0; a < i ; i--, a++)
	{
		b = s[a];
		s[a] = s[i];
		s[i] = b;
	}
}
