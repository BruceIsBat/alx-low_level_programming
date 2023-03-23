#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char i;
	int j = 0;

	while (j < 10)
	{
		i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
