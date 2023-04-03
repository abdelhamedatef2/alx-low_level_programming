include "lists.h"

/**
 * print_listint - print all list elements
 * @p: pointer refers to firt element
 * return: number of nodes
 */

size_t print_listint(const listint_t *p)
{
	size_t counter = 0;

	while (p != NULL)
	{
		if (p->n == '\0')
			printf("[0] (nil)\n");
		else
			printf("%d\n", p->n);
		p = p->next;
		counter++;
	}
	return (counter);
}

