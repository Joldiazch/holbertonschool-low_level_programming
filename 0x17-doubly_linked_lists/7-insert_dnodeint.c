#include "lists.h"
unsigned int len(const dlistint_t *h)
{
	size_t cont = 0;
	if (h == NULL)
		return(0);
	while (h)
	{	
		h = h->next;
		cont++;
	}
	return(cont);
}
/**
 * add_dnodeint - doubly linked list
 * @n: integer
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
/**
 * add_dnodeint - doubly linked list
 * @n: integer
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
dlistint_t *get_dnodeint(dlistint_t *head, unsigned int index)
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

/**
 * add_dnodeint - doubly linked list
 * @n: integer
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;

	new = malloc(sizeof(dlistint_t));
	if (h == NULL || new == NULL)
		return(NULL);
	if(idx == 0)
		return(add_dnodeint(h, n));
	if(idx == len(*h))
		return(add_dnodeint_end(h, n));
	tmp = get_dnodeint(*h, idx);
	if (tmp == NULL)
		return(NULL);
	(tmp->prev)->next = new;
	new->next = tmp;
	new->prev = tmp->prev;
	tmp->prev = new;
	new->n = n;
	return(new);
}
