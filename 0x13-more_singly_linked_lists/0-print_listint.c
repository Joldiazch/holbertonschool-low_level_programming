#include "lists.h"
/**
* print_listint - print all elements of a list staring in head.
* @h: pointer for head of lements.
* Return: number of nods in list.
*
*/
size_t print_listint(const listint_t *h)
{
	size_t numNodos = 0;

	if (h)
	{
		while (h->next)
		{
			printf("%i\n", h->n);
			h = h->next;
			numNodos++;
		}
		printf("%i\n", h->n);
		return (numNodos + 1);
	}
	return (0);
}
