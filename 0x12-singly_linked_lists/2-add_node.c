#include <stdlib.h>
#include <string.h>
#include "lists.h"~
~
/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *hb;

	hb = malloc(sizeof(list_t));
	if (hb == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(hb);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	hb->str = dup;
	hb->len = len;
	hb->next = *head;

	*head = hb;

	return (hb);
}
