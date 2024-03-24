#include "lists.h"


/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
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

	new_node = add_dnodeint_end(&new_node, n);
	position = get_index(*h, idx -1);
	new_node->next = position->next;
	position->next = new_node;
	new_node->prev = position;
	new_node->next->prev = new_node;
	return (*h);
}

int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
