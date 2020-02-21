/**
* leet - function that encodes a string into 1337
* @a: string
* Return: string changed
**/

char *leet(char *a)
{
	int i, j;
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (letters[j] == a[i])
			{
				a[i] = numbers[j];
			}
		}
	}
	return (a);
}
