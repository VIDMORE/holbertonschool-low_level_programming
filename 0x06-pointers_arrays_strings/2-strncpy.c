/**
* _strncpy - copy a string
* @src: First string to append
* @dest: Second string to append
* @n: number of bytes
* Return: Pointer to the resulting string
**/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
