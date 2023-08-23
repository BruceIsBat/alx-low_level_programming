#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring.
 * @haystack: The string to search.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2, *p3;

	if (*needle == '\0')
		return (haystack);

	for (p1 = haystack; *p1 != '\0'; p1++)
	{
		p2 = needle;
		p3 = p1;
		while (*p2 != '\0' && *p3 == *p2)
		{
			p3++;
			p2++;
		}
		if (*p2 == '\0')
			return (p1);
	}

	return (NULL);
}
