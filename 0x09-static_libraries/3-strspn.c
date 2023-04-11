#include "main.h"
/**
 * _strspn - Calculates the length of a prefix substring
 * @s: Pointer to string
 * @accept: Pointer to substring of acceptable characters
 * Return: Number of bytes in the initial segment of s consisting
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}

		if (accept[j] == '\0')
			break;
	}

	return (count);
}
