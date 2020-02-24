/**
* _memcpy - function that copies memory area
* @dest: destination value
* @src: source value
* @n: number of bytes
* Return: a pointer to dest
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*dest = src[i];
		i++;
		dest++;

	}
	return (dest);
}
