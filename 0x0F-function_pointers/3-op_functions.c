#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum
 * @a: first integer
 * @b: second integer
 * Return: sum
 **/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference
 * @a: first integer
 * @b: seconD integer
 * Return: dif
 **/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: first integer
 * @b: second integer
 * Return: product
 **/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: first integer
 * @b: second integer
 * Return: div
 **/

int op_div(int a, int b)
{
	if (b  <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - rest
 * @a: first  integer
 * @b: second integer
 * Return: remainder of division
 **/

int op_mod(int a, int b)
{
	if (b  <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
