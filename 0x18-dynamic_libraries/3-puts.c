#include "main.h"

/**
 * _puts - check the code
 * @str: string
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
