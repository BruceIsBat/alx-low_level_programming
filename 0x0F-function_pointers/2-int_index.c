#include <stdlib.h>
#include "function_pointers.h"
int _putchar(char c);

/**
 * int_index - Searches for an integer in an array
 *
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 * @cmp: Function pointer to the comparison function
 *
 * Return: Index of
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
