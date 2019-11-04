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
