#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer of the header linked list
 * @str: string to copy the new node
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p;
	list_t *new_node;
	size_t i;

	i = 0;
	p = *head;
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
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = new_node;
	}
	new_node->next = NULL;
	return (new_node);
}
