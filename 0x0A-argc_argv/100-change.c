#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int check_change(int money);
int is_number(char *s);

/**
 * main - Program that prints the minimum number of coins to make change.
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
	else if (argv[1])
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
			return (0);
		}
		else if (!is_number(argv[1]))
		{
			printf("Error\n");
			return (1);
		}
		printf("%d\n", check_change(atoi(argv[1])));
	}
	return (0);
}

/**
 * check_change - checks the total amount of change
 * @money: total entered
 * Return: Minimum number of coins to make change
 **/

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

/**
 * is_number - validate if a string is number
 * @s: string
 * Return: 1 if true, 0 if false
 **/

int is_number(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}
