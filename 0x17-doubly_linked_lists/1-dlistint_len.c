#include "lists.h"

/**
 * dlistint_len - Counts num of elements in dlistint_t.
 * @h: dlistint_t's head.
 *
 * Return: numb of elements in dlistint_t.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
