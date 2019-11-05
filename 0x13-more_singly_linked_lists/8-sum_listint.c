#include "lists.h"
/**
* sum_listint - suma all n in every node of the list.
* @head: pointer for head of lements.
* Return: suma.
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
