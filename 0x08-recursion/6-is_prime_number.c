#include "holberton.h"

/**
* is_prime_number - function that validates if a prime number
* @n: number
* Return: 1 if true
**/

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
* is_prime - validate if a number is prime
* @n: number
* @s: number that examinate
* Return: if number is prime 1
**/

int is_prime(int n, int s)
{
	if (n <= 2)
	{
		if (n == 2)
			return (1);
		else
			return (0);
	}
	else if (n % s == 0)
		return (0);
	else if ((s * s) > n)
		return (1);
	return (is_prime(n, s + 1));
}
