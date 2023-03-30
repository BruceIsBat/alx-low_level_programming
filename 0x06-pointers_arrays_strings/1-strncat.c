#include "main.h"
#include <stdio.h>
/**
 * _strncat - check the code
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
