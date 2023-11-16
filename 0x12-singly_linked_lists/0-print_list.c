#include "lists.h"

/**
 * print_list - print all the element os linkd list
 * @h: pointer of the header linked list
 *
 * Return: number the element
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}
	return (count);
}
