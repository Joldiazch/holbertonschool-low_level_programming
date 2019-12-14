#include "lists.h"
/**
 * add_dnodeint - doubly linked list
 * @n: integer
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

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
	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	*head = new;
	return (*head);
}
