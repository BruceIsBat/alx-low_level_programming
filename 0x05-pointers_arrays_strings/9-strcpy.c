#include "main.h"
#include <stdio.h>

/**
 * char *_strcpy - check the code
 * @dest:-  a pointer to the destination buffer
 * @src:- a pointer to the source string
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
