#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Allocates memory for an array using malloc.
 *
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Return: If the function succeeds, it returns a pointer to the allocated
 *         memory. Otherwise, it returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *tmp;

	/* Check for zero inputs */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory for the array */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* Set the memory to zero */
	tmp = ptr;
	for (i = 0; i < nmemb * size; i++)
		tmp[i] = 0;

	return (ptr);
}

