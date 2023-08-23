#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to the destination character array
 * @src: pointer to the source string
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to the destination character array
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
