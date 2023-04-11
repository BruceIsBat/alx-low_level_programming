#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: input string to duplicate
 *
 * Return: On success, returns a pointer to the duplicated string.
 * On error, returns NULL.
 */
char *_strdup(char *str)
{
	size_t len;
        char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	new_str = malloc(len + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}

	memcpy(new_str, str, len + 1);
	return (new_str);
}
