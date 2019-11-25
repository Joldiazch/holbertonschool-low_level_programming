#include "holberton.h"

char *_read_line(ssize_t *c)
{
	char *read;
	size_t size = 0;

	write(STDOUT_FILENO, "MiShellaDa $: ", 15);
	read = calloc(size * sizeof(char), sizeof(char));
	*c = getline(&read, &size, stdin);
	return(read);
}
