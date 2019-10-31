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
	unsigned int numElements = 0;

	if (h)
	{
		while (h->next)
		{
			h = h->next;
			numElements++;
		}
		return (numElements + 1);
	}
	return (0);
}
