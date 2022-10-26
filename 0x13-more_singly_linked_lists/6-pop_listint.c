#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: pointer to the address of the
 *		head of the listint_t list.
 *
 * Return: 0 if linked list is empty else head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (*head == NULL)
		return (0);

	temp = *head;
	head_data = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (head_data);
}
