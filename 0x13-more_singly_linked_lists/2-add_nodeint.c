#include "lists.h"

/**
 * add_noteint - adds a new node at the beginning of a listint_t list.
 * @head: head of a list
 * @n: an element.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
