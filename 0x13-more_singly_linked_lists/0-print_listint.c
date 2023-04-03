#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all list elements
 * @h: pointer refers to firt element
 * return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}

