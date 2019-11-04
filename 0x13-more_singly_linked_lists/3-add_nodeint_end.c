#include "lists.h"
/**
* add_nodeint_end - print all elements of a list staring in head.
* @head: pointer for head of lements.
* @n: constant to add.
* Return: pointer to node add.
*
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp) /* if temp == NULL */
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = temp;
	}
	else
	{
		listint_t *headTemp;

		headTemp = (*head);
		while ((*head)->next)
		{
			(*head) = (*head)->next;
		}
		(*head)->next = temp;
		(*head) = headTemp;
	}
	return (temp);
}
