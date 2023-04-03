#include "lists.h"

/**
 * print_listint - print all list elements
 * @h: pointer refers to firt element
 * return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->n == '\0')
			printf("[0] (nil)\n");
		else
			printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}

