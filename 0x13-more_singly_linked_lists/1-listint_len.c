#include "lists.h"
/**
 * listint_len - function that return the number
 * of element
 * @h : pointer to first elemnt
 * return : number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
