#include "main.h"
/**
 * _isupper - Write a function that checks for uppercase character.
 * @c: the character to check
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
	 _putchar('\n');
}
