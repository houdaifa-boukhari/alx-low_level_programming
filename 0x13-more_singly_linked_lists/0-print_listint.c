#include "lists.h"

/**
 * print_listint - print all the element os linkd list
 * @h: pointer of the header linked list
 *
 * Return: number the element
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->n)
			printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
