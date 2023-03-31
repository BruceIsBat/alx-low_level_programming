#include "main.h"
/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @str: the string to convert
 *
 * Return: a pointer to the resulting string
 */
char *string_toupper(char *str)
{
	char *p;

	for (p = str; *p != '\0'; p++)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - 'a' + 'A';
		}
	}
	return (str);
}
