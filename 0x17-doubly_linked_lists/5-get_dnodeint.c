#include "lists.h"
/**
 * add_dnodeint - doubly linked list
 * @n: integer
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 1;
	while(head)
	{
		if (i > index)
			return(head);
		head = head->next;
		i++;
	}
	return(NULL);
}
