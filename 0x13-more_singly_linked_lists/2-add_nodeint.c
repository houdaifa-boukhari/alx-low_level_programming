#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer of the header linked list
 * @str: string to copy the new node
 * Return: the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
