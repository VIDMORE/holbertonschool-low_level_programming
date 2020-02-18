
/**
* rev_string - function that reverses a string
* @s: string
**/

void rev_string(char *s)
{
	int i;
	int a;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (a = 0; i >= 0 ; i--, a++)
	{	
		s[a] = s[i];
	}
}
