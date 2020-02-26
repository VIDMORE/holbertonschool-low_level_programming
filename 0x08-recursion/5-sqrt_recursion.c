#include "holberton.h"

/**
* _sqrt_recursion - function that returns the natural square root of a number
* @n: number
* Return: square number
**/

int _sqrt_recursion(int n)
{
	return (div(n, 0));
}

/**
* div - function that validates the pow of a number
* @n: number to examinate
* @s: number to pow
* Return: sqrt
**/

int div(int n, int s)
{
	if (n == (s * s))
	{
		return (s);
	}
	else if ((s * s) >= n)
	{
		return (-1);
	}
	else
		return (div(n, s + 1));
}
