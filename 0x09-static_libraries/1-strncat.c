#include "main.h"
/**
 * _strncat - concatenates two strings, up to n bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to be copied from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = _strlen(dest);

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
