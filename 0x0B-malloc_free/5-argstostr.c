#include <stdlib.h>
#include <stdio.h>

/**
* argstostr - function that concatenates all the arguments of your program
* @ac: Count
* @av: pointer array
* Return: pointer to array
**/

char *argstostr(int ac, char **av)
{
	int i, j, s = 0, counter = 0;
	char *ar;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			counter++;
		}
	}
	counter  += ac;

	ar = malloc(sizeof(char) * counter);

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ar[s] = av[i][j];
			s++;
		}
		ar[s] = '\n';
		s++;
	}
	ar[s] = '\0';
	return (ar);
}
