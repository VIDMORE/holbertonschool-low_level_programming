#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int check_change(int money);

/**
 * main - program that adds positive numbers.
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0.
 **/

int main(int argc, char *argv[])
{
	if (argc < 2 && argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("%d\n", check_change(atoi(argv[1])));
	}
	return (0);
}

int check_change(int money)
{
	int values[5] = {25, 10, 5, 2, 1};
	int i = 0, count = 0;

	while (money > 0)
	{
		if (values[i] <= money)
		{
			money -= values[i];
			count++;
		}
		else
		{
			i++;
		}
	}
	return (count);
}
