#include "lists.h"

/**
 * add_nodeit - adds a new node at the beginnning
 * of a list
 * @head: pointer to the first element
 * @n: int to be copied
 * description: a function that adds a new node at the
 * beginning of a listint_t list.
 * return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
