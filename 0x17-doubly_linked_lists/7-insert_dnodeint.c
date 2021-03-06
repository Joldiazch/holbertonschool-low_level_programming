#include "lists.h"
/**
* len - returns the number of elements in a linked dlistint_t list.
* @h: pinter to header of list
* Return: number of elements in a linked list.
*/
unsigned int len(const dlistint_t *h)
{
	size_t cont = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
/**
* get_dnodeint -  returns the nth node of a dlistint_t linked list
* @index: index to position for node.
* @head: pointer to head of list.
* Return: returns the nth node of a dlistint_t linked list
*/
dlistint_t *get_dnodeint(dlistint_t *head, unsigned int index)
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

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pinter to pointer of head of list.
 * @idx: index of node to add..
 * @n: integer to save in node
 * Return: new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;

	new = malloc(sizeof(dlistint_t));
	if (h == NULL || new == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == len(*h))
		return (add_dnodeint_end(h, n));
	tmp = get_dnodeint(*h, idx);
	if (tmp == NULL)
		return (NULL);
	(tmp->prev)->next = new;
	new->next = tmp;
	new->prev = tmp->prev;
	tmp->prev = new;
	new->n = n;
	return (new);
}
