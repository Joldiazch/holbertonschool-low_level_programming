#include "holberton.h"

void build_list(char **paths, list_t **head)
{
	int i = 0;
	while (paths[i])
	{
		add_node(head, paths[i]);
		i++;
	}
}
