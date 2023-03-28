#include "main.h"

/**
 * print_rev - check the code
 * @s: string, in reverse,
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;

	while (str[i])
		i++;
	while (i--)
		_putchar(str[i]);
	_putchar('\n');
}
