#include "holberton.h"

char *_read_line(ssize_t *c)
{
	char *read;
	size_t size = 100;

	write(STDOUT_FILENO, "MiShellaDa $: ", 15);
	read = malloc(size * sizeof(char));
	*c = getline(&read, &size, stdin);
	return(read);
}