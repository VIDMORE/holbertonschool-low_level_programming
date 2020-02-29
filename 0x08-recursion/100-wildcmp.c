#include "holberton.h"

/**
*
*
*
**/

int wildcmp(char *s1, char *s2)
{
	int size = get_lenght(s2);
	char s3[size];
	breake_wild(s2, size, 0, s3);
	return (compare(s1, s3);
}
/**
*
*
*
**/

char breake_wild(char *s2, int size, int start, char *arr)
{
	if (start == size)
	{
		return;
	}
	if (*s2 != '\0')
	{
		if (*s2 != '*')
		{
			char ar[start] = *s2;
			return (breake_wild(s2 + 1), size, (start + 1));
		}
	}
	return (0);
}

/**
* compare - compare the two arrays
* @s1: first array
* @s2: second array
* Return: 
**/

int compare_str(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return(1);
		else
			return (compare_str((s1 + 1), (s2 + 1)));
	}
	else if(*s1 != *s2)
	{
		if (*s1 == '\0')
			return (0);
		else
			return(compare_str((s1 + 1),s2));
	}
	return (0);
}
