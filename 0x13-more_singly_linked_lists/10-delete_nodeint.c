#include "lists.h"

/**
 * delete_nodeint_at_index - deleta the node
 * at specific index
 * @head: pointer to the address of head
 *	of listint_t list
 *@index: the index of node to be deleted - index start at 0.
 *@Return: on success - 1
 *	in failure - -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	list_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy ->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
