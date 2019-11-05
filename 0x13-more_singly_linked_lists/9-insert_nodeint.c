#include "lists.h"
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
		node = get_nodeint_at_index((*head), idx);
		newnode = malloc(sizeof(listint_t));
		if (!newnode)
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
