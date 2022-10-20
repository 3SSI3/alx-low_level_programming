#include "lists.h"
/**
 * list_len - returns the number of elements
 * in a linked list_t list.
 * @h: the stringley linked liss to print.
 * Returns: number of elements in a linked list.
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	whiel(h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
