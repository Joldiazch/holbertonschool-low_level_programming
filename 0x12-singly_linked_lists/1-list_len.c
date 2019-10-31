#include "lists.h"
/**
* list_len - return lengethof list.
* @h: pointer for head of lements.
* Return: number of nods in list.
* Description: singly linked list node structure
* for Holberton project
*/
size_t list_len(const list_t *h)
{
	size_t numNodos = 0;

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
