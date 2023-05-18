#include "lists.h"

/**
 * add_dnodeint - Add new node at beginning of dlistint_t.
 * @head: pointer to dlistint_t's head.
 * @n: int for new node.
 *
 * Return: If function fails - NULL.
 *         Otherwise - address of new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
