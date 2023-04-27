#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list of type list_t.
 *
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
