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
		if (a[i] == ',' || a[i] == ';' || a[i] == '.' || a[i] == '!' || a[i] == '?' || a[i] == '"' || a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == '}')
		{	
			i++;
			a[i] = (a[i] - 32);
		}
	}
	return (a);
}
