/**
* swap_int - function that swaps the values of two integers
* @*a: value a
* @*b: value b
**/

void swap_int(int *a, int *b)
{
	int value_a = *a;
	int value_b = *b;

	*a = value_b;
	*b = value_a;
}
