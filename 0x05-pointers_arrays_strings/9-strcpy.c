/**
* _strcpy - function that copies a string
* @dest: pointer of destination
* @src: string to copy
* Return: the pointer to dest
**/

char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
