#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers,
 *              separated by ', ' and in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			putchar(j);
			if (i != 9 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
