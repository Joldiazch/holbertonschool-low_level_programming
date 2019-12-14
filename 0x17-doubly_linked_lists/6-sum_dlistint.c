#include "lists.h"
/**
 * add_dnodeint - doubly linked list
 * @n: integer
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (!head)
		return(0);
	while(head)
	{
		sum += head->n;
		head = head->next;
	}
	return(sum);
}
