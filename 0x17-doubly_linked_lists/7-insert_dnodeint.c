#include "lists.h"


/**
 * get_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: the nth node of a dlistint_t linked list, or NULL if the node does
 * not exist
 */

dlistint_t *get_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head)
	{
		head = head->next;
		i++;
	}
	return (head);
}

/**
 * lst_size - returns the number of elements in a doubly linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */

unsigned int lst_size(dlistint_t *h)
{
	unsigned int count;

	count = 0;
	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: value to be added to the new node
 *
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *position = NULL;
	unsigned int size = lst_size(*h);

	if (!h || idx > size)
		return (NULL);
	else if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == size)
	{
		new_node = add_dnodeint_end(h, n);
		while (new_node->next)
			new_node = new_node->next;
		return (new_node);
	}
	new_node = add_dnodeint_end(&new_node, n);
	position = get_index(*h, idx - 1);
	new_node->next = position->next;
	position->next = new_node;
	new_node->prev = position;
	new_node->next->prev = new_node;
	return (new_node);
}
