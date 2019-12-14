#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @index: index to position for node.
 * @head: pointer to head of list.
 * Return: returns the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 1;

	while (head)
	{
		if (i > index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
