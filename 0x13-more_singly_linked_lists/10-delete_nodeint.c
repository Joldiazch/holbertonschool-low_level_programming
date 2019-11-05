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
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *temp;
	unsigned int i = 0;
	if ((*head))
	{
		node= get_nodeint_at_index((*head), index);
		if (!node)
		{
			return (-1);
		}
		temp = (*head);
		while (i < (index - 1))
		{
			(*head) = (*head)->next;
			i++;
		}
		if ((*head) == node)
		{
			(*head) = (*head)->next;
			free(node);
			return (1);
		}
		(*head)->next = node->next;
		free(node);
		(*head) = temp;
		return (1);
	}
	return (-1);
}
