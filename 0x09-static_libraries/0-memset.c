#include "main.h"
/**
 * _memset - fills the first n bytes of the memory pointed to by s with b
 * @s: a pointer to the memory area to be filled
 * @b: the value to be set
 * @n: the number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
