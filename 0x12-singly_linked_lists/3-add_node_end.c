#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: head of the node in linked list
 * @str: string for our output
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ournode, *tmp;
	unsigned int x, character = 0;

	ournode = malloc(sizeof(list_t));
	if (ournode == NULL)
		return (NULL);
	ournode->str = strdup(str);
	for (x = 0; str[x] != '\0'; x++)
		character++;
	ournode->len = character;
	ournode->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = ournode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = ournode;
	}
	return (*head);
}
