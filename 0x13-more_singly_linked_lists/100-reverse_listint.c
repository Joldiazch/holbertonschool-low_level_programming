#include "lists.h"

/**
* reverse_next - reverse all alements of a list.
* @head: pointer for head of lements.
* @back: pointer to back node.
* Return: void.
*
*/
void reverse_next(listint_t *head, listint_t *back)
{
	if (head->next)
	{
		reverse_next(head->next, head);
		head->next = back;
	}
	else
	{
		head->next = back;
	}
}
/**
* reverse_listint - reverse all alements of a list.
* @head: pointer for head of lements.
* Return: pointer to the head node of the reverse list.
*
*/
listint_t *reverse_listint(listint_t **head)
{
	if ((*head) && head)
	{
		listint_t *headtemp;

		headtemp = (*head);
		while ((*head)->next)
		{
			(*head) = (*head)->next;
		}
		reverse_next(headtemp, NULL);
		return ((*head));

	}
	return (NULL);
}
