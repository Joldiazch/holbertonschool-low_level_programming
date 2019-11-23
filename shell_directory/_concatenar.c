#include "holberton.h"

char * _concatenar(list_t **head, char * comand)
{
	char *pepito, *comandslash;
	if (*comand != '/')
	{
		while ((*head)->next)
		{
			comandslash = str_concat("/",comand);
			pepito = str_concat((*head)->str, comandslash);
			if (!access(pepito, X_OK))
			{
				return(pepito);
			}
			*head = (*head)->next;
		}
	}
	return(comand);
}