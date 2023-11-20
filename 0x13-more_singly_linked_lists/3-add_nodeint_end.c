#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer of the header linked list
 * @n: integer sotre in new node
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *new_node;

	p = *head;
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
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

