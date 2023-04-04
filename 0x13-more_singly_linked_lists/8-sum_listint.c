#include "lists.h"

/**
 * sum_listint - sum up all the value in each element of a listint_t
 * @head: pointer to the head of a list.
 *
 * Return: Sum (INT) else 0 if empty.
 */
int sum_listint(listint_t *head)
{
	int x = 0;

	if (!head)
		return (0);

	while (head)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}

