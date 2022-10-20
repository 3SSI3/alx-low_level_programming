#include "lists.h"
/**
 * list_len - finds the number of nodes in a list
 * @h: singly linked list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t j;

	j = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return (j);
}
