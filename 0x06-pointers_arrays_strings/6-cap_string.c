/**
* cap_string - function that capitalizes all words of a string
* @a: string
* Return: string changed
**/

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		switch (a[i])
		{
			i++;
			case '}':
				a[i] = (a[i] - 32);
				break;
			case ',':
				a[i] = (a[i] - 32);
				break;
			case ';':
				a[i] = (a[i] - 32);
				break;
			case '.':
				a[i] = (a[i] - 32);
				break;
			case '!':
				a[i] = (a[i] - 32);
				break;
			case '?':
				a[i] = (a[i] - 32);
				break;
			case '\\':
				a[i] = (a[i] - 32);
				break;
			case '(':
				a[i] = (a[i] - 32);
				break;
			case ')':
				a[i] = (a[i] - 32);
				break;
			case '{':
				a[i] = (a[i] - 32);
				break;
		}
	}
	return (a);
}
