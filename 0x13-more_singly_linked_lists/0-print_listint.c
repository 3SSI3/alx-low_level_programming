#inlcude "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of a list.
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	sizeof nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
