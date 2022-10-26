#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: head of a list.
 * Return: the number of nodes in the list.
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add;

	htpr = NULL;
	while (head != NULL)
	{
		new = mallox(sizeof(listp_t));

		if (new == NULL)
			exist(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = htpr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&hptr);
	return (nnodes);
}
