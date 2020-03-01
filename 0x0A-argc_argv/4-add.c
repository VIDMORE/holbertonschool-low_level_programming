#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int is_number(char *s);

/**
 * main - program that adds positive numbers.
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0.
 **/

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_number(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
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
