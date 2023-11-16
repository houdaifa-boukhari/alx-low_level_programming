#include "lists.h"

/**
 * free_list - free all the list
 * @head: pointer of the header linked list
 * 
 * Return: noyhing
 */

void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while (ptr)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
