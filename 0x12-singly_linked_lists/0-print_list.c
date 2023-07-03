#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: head of the linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%lu] (nil)\n", count);
		}
		else
		{
			printf("[%lu] %s\n", count, h->str);
		}

		count++;
		h = h->next;
	}

	return (count);

}
