#include "holberton.h"

char * _concatenar(list_t **head, char * comand)
{
	char *pepito, *comandslash;
	list_t *temporal;
	
	temporal = *head;

	if (comand != NULL)
	{
		if (*comand != '/')
		{
			while ((temporal)->next)
			{
				comandslash = str_concat("/",comand);
				pepito = str_concat((temporal)->str, comandslash);
				if (!access(pepito, X_OK))
				{
					return(pepito);
				}
				temporal = (temporal)->next;
			}
		}
	}
	return(comand);
}