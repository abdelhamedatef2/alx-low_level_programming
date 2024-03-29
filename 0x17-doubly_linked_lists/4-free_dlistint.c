#include "lists.h"

/**
 * free_dlistint - Frees dlistint_t.
 * @head: dlistint_t's head.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
