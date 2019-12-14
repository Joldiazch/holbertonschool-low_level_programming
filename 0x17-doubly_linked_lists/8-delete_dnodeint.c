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
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	if (head == NULL)
		return (-1);
	if (index == 0 && *head)
	{
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
		return (1);
	}
	tmp = get_dnodeint(*head, index);
	if (tmp == NULL)
		return (-1);
	if (index == len(*head))
	{
		tmp = tmp->prev;
		free(tmp->next);
		tmp->next = NULL;
		return (1);
	}
	(tmp->prev)->next = tmp->next;
	(tmp->next)->prev = tmp->prev;
	free(tmp);
	return (1);
}
