#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: the head of the node
 * @str: string to store
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ournode;
	unsigned int x, character = 0;

	ournode = malloc(sizeof(list_t));
	if (ournode == NULL)
		return (NULL);
	ournode->str = strdup(str);
	for (x = 0; str[x] != '\0'; x++)
		character++;
	ournode->len = character;
	ournode->next = *head;
	*head = ournode;

	return (*head);
}
