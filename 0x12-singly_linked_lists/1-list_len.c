#include "lists.h"
/**
 * list_len - function returns the number of elements in a linked list_t list
 * @h: head of our linked list
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t e_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		e_nodes++;
	}
	return (e_nodes);
}
