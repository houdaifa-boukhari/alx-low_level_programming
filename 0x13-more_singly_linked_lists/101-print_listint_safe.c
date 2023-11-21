#include "lists.h"

/**
 * print_listint_safe - print all the element os linkd list
 * @head: pointer of linked list
 *
 * Return: number the element
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	const listint_t *slow;
	const listint_t *fast;

	slow = head;
	fast = head;
	count = 0;
	/*Use Floyd’s Cycle Detection Algorithm*/
	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)(slow), slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)(slow), slow->n);
			exit(98);
		}
	}
	return (count);
}
