#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: Pointer to string
 * @c: Character to locate
 * Return: Pointer to first occurrence of character or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
