#include "main.h"

/**
 * print_most_numbers - prints numbers except 2and 4
 *
 * Return: 0
 */
print_most_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue
		}
		else
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	return (0);
}