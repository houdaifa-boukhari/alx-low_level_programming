#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer of the header linked list
 * @n: integer to store in new node
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

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @head: pointer of the first node
 * @index: index is the index of the node
 *
 * Return: return head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;

	if (!head)
		return (NULL);
	ptr = head;
	while (ptr && index--)
		ptr = ptr->next;
	if (ptr == NULL)
		return (NULL);
	add_nodeint(&head, ptr->n);
	return (head);
}
