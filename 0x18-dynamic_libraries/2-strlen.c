#include "main.h"
/**
 * _strlen - check the code
 *@s:- length of a string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int str_len = 0;

	while (s[str_len])
		str_len++;
	return (str_len);
}
