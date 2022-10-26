#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the
 *		data (n) of a listint_t list.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: 0 if list is empty else sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum_data = 0;

	while (head)
	{
		sum_data += head->n;
		head = head->next;
	}

	return (sum_data);
}
