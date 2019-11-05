#include "lists.h"
/**
* pop_listint - print all elements of a list staring in head.
* @head: pointer for head of lements.
* Return: number of nods in list.
*
*/
int pop_listint(listint_t **head)
{
	int ntemp;
	listint_t *headTemp;

	headTemp = (*head);
	ntemp = (*head)->n;
	(*head) = (*head)->next;
	free(headTemp);
	return (ntemp);
}
