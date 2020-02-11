#include "holberton.h"

/**
* _islower - function to identify lower characters
* Return: 1 if true 0 if false
* @c: - character
**/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
