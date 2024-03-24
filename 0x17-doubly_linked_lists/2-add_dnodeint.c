#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: pointer to the head of the list
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t	*new_node = NULL;

	if (!head)
		return (NULL);
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (*head);
}
