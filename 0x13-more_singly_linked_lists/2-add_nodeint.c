#include "lists.h"


/**
 * add_nodeint - Adds a new node at the beginning
 *		of a listint_t list.
 * @head: A pointer to the address of the
 *		head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: NULL if fail, else address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;

	new_element = malloc(sizeof(listint_t));

	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = *head;

	*head = new_element;

	return (new_element);
}
