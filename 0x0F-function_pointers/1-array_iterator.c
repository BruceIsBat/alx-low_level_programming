#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - applies a function to each element of an array
 *
 * @array: the array to iterate over
 * @size: the number of elements in the array
 * @action: a function to apply to each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
