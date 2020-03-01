#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiplies two numbers.
* @argc: Number of arguments
* @argv: Array of arguments
* Return: 0.
**/

int main(int argc, char *argv[])
{
	int i;
	int time = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
			time *= atoi(argv[i]);
		printf("%d\n", time);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
