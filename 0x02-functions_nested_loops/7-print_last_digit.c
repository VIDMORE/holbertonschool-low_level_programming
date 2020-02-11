#include "holberton.h"

/**
* print_last_digit - prints the last digit of a number
* Return: the value of the number
* @num: random number
**/

int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;

	if (num < 0)
		last_digit = last_digit * -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
