#include "lists.h"
/**
* free_listint - print all elements of a list staring in head.
* @head: pointer for head of lements.
* Return: number of nods in list.
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
* free_listint - print all elements of a list staring in head.
* @head: pointer for head of lements.
* Return: number of nods in list.
*
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *newnode, *temp;
	unsigned int i = 0;
	if ((*head))
	{
		node= get_nodeint_at_index((*head), idx);
		newnode = malloc(sizeof(listint_t));
		if (!newnode || !node)
		{
			return (NULL);
		}
		newnode->n = n;
		newnode->next = node;
		temp = (*head);
		while (i < (idx - 1))
		{
			(*head) = (*head)->next;
			i++;
		}
		(*head)->next = newnode;
		(*head) = temp;
		return (newnode);
	}
	return (NULL);
}
