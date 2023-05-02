#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * array_range - Creates an array of integers.
 *
 * @min: The minimum value of the range (included).
 * @max: The maximum value of the range (included).
 *
 * Return: If the function succeeds, it returns a pointer to the newly created
 *         array. Otherwise, it returns NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	/* Check for invalid inputs */
	if (min > max)
		return (NULL);

	/* Allocate memory for the array */
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	/* Populate the array with values from min to max */
	for (i = 0; i < max - min + 1; i++)
		arr[i] = min + i;

	return (arr);
}

