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
				comandslash = string_nconcat("/", comand, strlen(comand));
				pepito = string_nconcat((temporal)->str, comandslash, strlen(comandslash));
				if (!access(pepito, X_OK))
				{
					free(comandslash);
					return(pepito);
				}
				temporal = (temporal)->next;
			}
		}
	}
	return(comand);
}