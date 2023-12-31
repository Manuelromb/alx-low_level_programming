#include "lists.h"

/**
 * print_listint - print elements in a linked list
 *
 * @h: pointer to head first node
 *
 * Return: Number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 1;

	if (h == NULL)
	{
		return (0);
	}

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		count += 1;
	}
	printf("%d\n", h->n);

	return (count);
}
