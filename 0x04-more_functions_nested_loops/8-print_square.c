#include "holberton.h"

void print_square(int size)
{
	int face_a, face_b;

	for (face_a = 0; face_a < size; face_a++)
	{
		for (face_b = 0; face_b < size; face_b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size == 0)
	{
		_putchar('\n');
	}
}

