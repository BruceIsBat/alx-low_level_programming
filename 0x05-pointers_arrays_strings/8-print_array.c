#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code for
 * @a:- input a
 * @n:- input n
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
