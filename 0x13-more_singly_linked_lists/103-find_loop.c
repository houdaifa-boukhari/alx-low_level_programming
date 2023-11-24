#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow;
	listint_t *fast;

	slow = head;
	fast = head;
	/*Use Floyd’s Cycle Detection Algorithm*/
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (head);
	}
	return (NULL);
}
