#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer of the header linked list
 * @str: string to copy the new node
 * Return: the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t i;

	i = 0;
	new_node = (list_t *)malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	while (str[i])
		i++;
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
