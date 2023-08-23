#include "main.h"
/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 * Return: 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
	_putchar('\n');
}
