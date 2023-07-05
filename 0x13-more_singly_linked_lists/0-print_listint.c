#include <stdio.h>
#include "lists.h"

/**
 * print_listint- prints all the given elements
 * @h: inputs value
 *
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%u\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
