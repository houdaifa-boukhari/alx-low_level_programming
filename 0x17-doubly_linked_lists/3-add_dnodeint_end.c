# include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: value to store in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t	*add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *ptr = *head;

	if (!head)
		return (NULL);
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	while (ptr->next)
		ptr = ptr->next;
	new_node->prev = ptr->next;
	ptr->next = new_node;
	return (*head);
}
