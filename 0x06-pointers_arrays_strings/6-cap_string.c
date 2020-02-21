/**
* cap_string - function that capitalizes all words of a string
* @a: string
* Return: string changed
**/

char *cap_string(char *a)
{
	int i, j;
	char ex[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (ex[j] == a[i])
			{
				i++;
				if (a[i] == ' ')
					i++;
				if (a[i] >= 'a' && a[i] <= 'z')
					a[i] -= 32;
			}
		}
	}
	return (a);
}
