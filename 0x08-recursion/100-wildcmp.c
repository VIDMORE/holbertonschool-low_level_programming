#include "holberton.h"

/**
*
*
*
**/

int wildcmp(char *s1, char *s2)
{
	int compare(si, s2);
}


int breake_wild(char *s2)
{

	if (*s != '\0')
	{
		
	}

}

/**
* compare - compare the two arrays
* @s1: first array
* @s2: second array
* Return: 
**/

int compare(int *s1, int *s2)
{
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return(1);
		else
			return (compare((s1 + 1), (s2 + 1)));
	}
	else if (*s2 == '*')
	{
		return (compare(s1,(s2 + 1)));
	}
	else if(*s1 != s2 && *s2 != '*')
	{
		return(compare((s1 + 1),s2));
	}
}
