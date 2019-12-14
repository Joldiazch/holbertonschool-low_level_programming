#include "lists.h"
/**
 * sum_dlistint - returns the sum of a dlistint_t linked list
 * @head: pinter to head of list.
 * Return: returns the sum of all the data (n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
