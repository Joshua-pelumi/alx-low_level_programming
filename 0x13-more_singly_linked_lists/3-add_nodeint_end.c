#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 *		end of a listint_t list.
 * @head: A pointer to the address of the
 *		head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: NULL if fail, else the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element, *last_element;

	new_element = malloc(sizeof(listint_t));

	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
	}
	else
	{
		last_element = *head;
		while (last_element->next != NULL)
			last_element = last_element->next;

		last_element->next = new_element;
	}

	return (*head);
}
