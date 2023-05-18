#include "lists.h"

/**
 * sum_dlistint - Sums all data of dlistint_t.
 * @head: dlistint_t's head.
 *
 * Return: sum of all data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
