#include "lists.h"

/**
 * add_dnodeint_end - Add new node at end of dlistint_t.
 * @head: pointer dlistint_t's head.
 * @n: int for new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - new node's address.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}
