#include "holberton.h"

/**
* is_palindrome - function that returns 1 if a string is a palindrome
* @s: string
* Return: 1 if true
**/

int is_palindrome(char *s)
{
	int len;

	len = get_lenght(s);
	return (compare(s, len - 1, 0));
}

/**
* get_lenght - get the lenght of a string
* @s: array
* Return: length
**/

int get_lenght(char *s)
{
	if (s[0] != '\0')
	{
		return (get_lenght(++s) + 1);
	}
	return (0);
}

/**
* compare - compare to string
* @ar: string
* @size: max size
* @value: counter
* Return: 1 if true
**/

int compare(char *ar, int size, int value)
{
	if (ar[value] == ar[size])
	{
		if (size == 0)
			return (1);
		else
			return (compare(ar, --size, ++value));
	}
	else
		return (0);
}
