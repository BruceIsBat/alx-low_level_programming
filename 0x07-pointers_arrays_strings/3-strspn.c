#include "main.h"
#include <stddef.h>
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The string of characters to accept.
 *
 * Return: The number of bytes in the initial segment of s which consist
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			return (i);
	}

	return (i);
}
