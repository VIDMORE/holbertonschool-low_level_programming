
/**
* rev_string - function that reverses a string
* @s: string
**/

void rev_string(char *s)
{
	int i, a;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	char b[i];
	for (a = 0; i >= 0 ; i--, a++)
	{	
		b[a] = s[i];
		s[a] = b;
	}
}
