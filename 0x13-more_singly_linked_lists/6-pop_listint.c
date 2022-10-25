#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: head of a list.
 * Return: the head node's data (n).
 *         0, If linked list is empty.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);

}
