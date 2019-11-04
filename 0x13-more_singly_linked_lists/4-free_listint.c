#include "lists.h"
/**
* free_listint - print all elements of a list staring in head.
* @head: pointer for head of lements.
* Return: number of nods in list.
*
*/
void free_listint(listint_t *head)
{
	if (!(head->next))
	{
		free(head);
	}
	else
	{
		free_listint(head->next);
		free(head);
	}
}
