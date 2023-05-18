#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert new node in dlistint_t
 * at a given position.
 * @h: pointer dlistint_t's head.
 * @idx: new node position.
 * @n: int for new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - new node address.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
