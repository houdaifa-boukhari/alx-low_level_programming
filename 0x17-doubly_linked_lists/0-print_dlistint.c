# include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t  print_dlistint(const dlistint_t *h)
{
	size_t  count;

	count = 0;
	while (h)
	{
		printf("%d--->(%p)\n", h->n, &(h->n));
		h = h->next;
		count++;
	}
	return (count);
}
