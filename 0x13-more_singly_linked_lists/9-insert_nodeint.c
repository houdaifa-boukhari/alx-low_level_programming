#include "lists.h"

/**
 * add_node_begenner - adds a new node at the beginning of a list
 * @head: pointer of the header linked list
 * @n: integer to store in new node
 * Return: the new node
 */

listint_t *add_node_begenner(listint_t **head, const int n)
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
 * insert_nodeint_at_index - inserting a new node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: data to store in new node
 *
 * Return: return head
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr1;
	listint_t *new_node;
	listint_t *ptr2;

	if (!head)
		return (NULL);
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	if (idx == 0)
	{
		add_node_begenner(&(*head), n);
		return (*head);
	}
	new_node->n = n;
	ptr1 = *head;
	while (ptr1 && idx > 1)
	{
		ptr1 = ptr1->next;
		idx--;
	}
	if (!ptr1)
	{
		free(new_node);
		return (NULL);
	}
	ptr2 = ptr1->next;
	ptr1->next = new_node;
	new_node->next = ptr2;
	return (*head);
}