#include "lists.h"

/**
 * listint_len - gets the number of elemets
 *
 * @h: pointer to the head
 *
 * Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 1;

	if (h == NULL)
	{
		return (0);
	}

	while (h->next != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
