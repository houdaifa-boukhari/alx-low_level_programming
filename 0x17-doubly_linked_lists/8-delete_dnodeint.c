#include "lists.h"

/**
 * get_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: the nth node of a dlistint_t linked list, or NULL if the node does
 * not exist
 */

static dlistint_t *get_index(dlistint_t *head, unsigned int index)
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

static unsigned int lst_size(dlistint_t *h)
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
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int	delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *position = *head;
	dlistint_t *prev = NULL;
	unsigned int size;

	if (!head || !*head)
		return (-1);
	size = lst_size(*head);
	if (size < index + 1 || (int)index < 0)
		return (-1);
	if (index == (size - 1))
	{
		position = get_index(*head, index);
		prev = position->prev;
		/*printf("end : %d--->(%p)\n", position->n, &(position->n));*/
		free(position);
		position = NULL;
		if (!((*head)->next))
			*head = NULL;
		return (1);
	}
	else if (index == 0)
	{
		/*printf("first :  %d--->(%p)\n", position->n, &(position->n));*/
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		free(position);
		position = NULL;
		(*head)->prev = NULL;
		return (1);
	}
	position = get_index(*head, index);
	/*printf("midle %d--->(%p)\n", position->n, &(position->n));*/
	prev = position->prev;
	position->next->prev = prev;
	prev->next = position->next;
	free(position);
	position = NULL;
	return (1);
}

