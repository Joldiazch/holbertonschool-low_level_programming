#include "lists.h"
/**
 * add_dnodeint - doubly linked list
 * @n: integer
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp, *tmp2;

	new = malloc(sizeof(dlistint_t));
	if (head == NULL || new == NULL)
		return(NULL);
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		new->n = n;
		*head = new;
		return(*head);
	}
	tmp2 = *head;
	while ((*head)->next)
	{
		*head = (*head)->next;
	}
	tmp = *head;
	(*head)->next = new;
	new->next = NULL;
	new->prev = tmp;
	new->n = n;
	*head = tmp2;
	return (new);
}
