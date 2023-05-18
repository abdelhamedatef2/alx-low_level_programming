#include "lists.h"

/**
 * print_dlistint - Print all elements of dlistint_t.
 * @h: dlistint_t's head.
 *
 * Return: numb of nodes in list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
