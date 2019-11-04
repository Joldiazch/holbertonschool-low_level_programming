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
