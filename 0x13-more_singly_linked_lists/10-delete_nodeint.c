#include "lists.h"

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
* pop_listint - print all elements of a list staring in head.
* @head: pointer for head of lements.
* Return: number of nods in list.
*
*/
int pop_listint(listint_t **head)
{
	if (head)
	{
		if ((*head))
		{
			int ntemp;
			listint_t *headTemp;

			headTemp = (*head);
			ntemp = (*head)->n;
			(*head) = (*head)->next;
			free(headTemp);
			return (ntemp);
		}
		return (0);
	}
	return (0);
}
/**
* get_nodeint_at_index - print all elements of a list staring in head.
* @head: pointer for head of lements.
* @index: index of node.
* Return: node to get.
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
* delete_nodeint_at_index - print all elements of a list staring in head.
* @head: pointer for head of lements.
* @index: index of node to delete.
* Return: 1 if done -1 if error.
*
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *temp;
	unsigned int i = 0;

	if ((*head) && head && (index <= (listint_len(*head) - 1)))
	{
		if (index == 0)
		{
			pop_listint(head);
			return (1);
		}
		node = get_nodeint_at_index((*head), index);
		temp = (*head);
		while (i < (index - 1))
		{
			(*head) = (*head)->next;
			i++;
		}
		(*head)->next = node->next;
		free(node);
		(*head) = temp;
		return (1);
	}
	return (-1);
}
