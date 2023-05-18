#include "lists.h"

/**
 * get_dnodeint_at_index - Locate node in dlistint_t.
 * @head: dlistint_t's head.
 * @index: node's location.
 *
 * Return: If node does not exist - NULL.
 *         Otherwise - node loctaion.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
