#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list.
 * @h: singley linked list to be print.
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
size_t i;

i = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[%d] %s\n", 0, "(nil)");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
i++;
}
return (i);
}
