#include
/**
 * _strncpy - Copies n bytes of a string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to copy
 * Return: Pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
