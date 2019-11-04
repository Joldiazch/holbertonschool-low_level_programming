#include "lists.h"
/**
* free_listint - print all elements of a list staring in head.
* @head: pointer for head of lements.
* Return: number of nods in list.
*
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head->next)
		{
			sum += head->n;
			head = head->next;
		}
		sum += head->n;
		return (sum);
	}
	return (0);
}
