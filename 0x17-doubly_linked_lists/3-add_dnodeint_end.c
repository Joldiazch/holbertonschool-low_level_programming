#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @n: integer to save in new node.
 * @head: pinter to pointer to head of list
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp, *tmp2;

	new = malloc(sizeof(dlistint_t));
	if (head == NULL || new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		new->n = n;
		*head = new;
		return (*head);
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
