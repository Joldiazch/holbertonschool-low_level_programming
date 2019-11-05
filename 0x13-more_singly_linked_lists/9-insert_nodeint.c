#include "lists.h"

/**
* add_nodeint - print all elements of a list staring in head.
* @head: pointer for head of lements.
* @n: integer of new node.
* Return: pointer to new node.
*
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp) /* if temp == NULL */
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = (*head);
	/* To the "previus" head, becouse temp will be the new head */
	(*head) = temp;
	/* new head is temp */
	return (temp);
}
/**
* listint_len - print all elements of a list staring in head.
* @h: pointer for head of lements.
* Return: number of nods in list.
*
*/
size_t listint_len(const listint_t *h)
{
	unsigned int numNodos = 0;

	if (h)
	{
		while (h->next)
		{
			h = h->next;
			numNodos++;
		}
		return (numNodos + 1);
	}
	return (0);
}
/**
* get_nodeint_at_index - print all elements of a list staring in head.
* @head: pointer for head of lements.
* @index: index positon of node to get.
* Return: pointer to node to get.
*
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (head)
	{
		for (n = 0; (n < index) && head; n++)
		{
			head = head->next;
		}
		return (head);
	}
	return (NULL);
}
/**
* insert_nodeint_at_index - insert node in index position.
* @head: pointer for head of lements.
* @idx: index positon of node to add.
* @n: value to save in new node.
* Return: pointer to new node.
*
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *newnode, *temp;
	unsigned int i = 0;

	if (head && (*head))
	{
		if (idx == 0)
		{
			return (add_nodeint(head, n));
		}
		else if (idx == (listint_len(*head) - 1))
		{
			return (add_nodeint_end(head, n));
		}
		node = get_nodeint_at_index((*head), idx);
		newnode = malloc(sizeof(listint_t));
		if (!newnode)
		{
			return (NULL);
		}
		temp = (*head);
		newnode->n = n;
		newnode->next = node;
		while (i < (idx - 1) && (*head))
		{
			(*head) = (*head)->next;
			i++;
		}
		if (!(*head))
			return (NULL);
		(*head)->next = newnode;
		(*head) = temp;
		return (newnode);
	}
	return (NULL);
}
