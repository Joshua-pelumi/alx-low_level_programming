#include "lists.h"

/**
 * print_listint - Prints all the element of a listint_t list
 * @h: pointer to the head of the listint_t list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (elements);
}
