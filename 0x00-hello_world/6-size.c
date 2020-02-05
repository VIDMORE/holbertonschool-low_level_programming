#include <stdio.h>

/**
* main - Function to show the bites of each data type
* Return: 0
**/

int main(void)
{

	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %u byte(s)\n", sizeof(c));
	printf("Size of an int: %u byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %llu byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);

}
