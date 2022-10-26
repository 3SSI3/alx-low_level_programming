#include "lists.h"

/**
 * reverse_listint - reverses a listint_t.
 * @head: head of a list.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *d;
	listint_t *s;

	d = NULL;
	s = NULL;

	while (*head != NULL)
	{
		s = (*head)->next;
		(*head)->next = d;
		d = *head;
		*head = s;
	}

	*head = d;
	return (*head);
}
