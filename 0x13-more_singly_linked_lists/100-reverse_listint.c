#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: a pointer to the adress of the head
 * 	of the list
 *
 * return: pointer ti the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *head, *back;

	if (head == NULL || *head == NULL)
		return (NULL);

	back = NULL;

	whilr ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = back;
		behind = *head;
		*heah = ahead;
	}

	(*head)->next = back;

	return (*head);
}
