#include "lists.h"
/**
* print_dlistint - the function prints
* elements of dlist_t list
* @h: head list
* return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count_num = 0;

	if (h == NULL)
		return (count_num);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
{
	printf("%d\n", h->n);
	count_num++;
	h = h->next;
}

return (count_num);
}
