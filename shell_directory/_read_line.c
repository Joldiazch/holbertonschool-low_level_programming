#include "holberton.h"

char *_read_line(ssize_t *c)
{
	char *read;
	size_t size = 1024;

	write(STDOUT_FILENO, "MiShellaDa $: ", 15);
	read = malloc(size * sizeof(char));
	*c = getline(&read, &size, stdin);
	if (*c == EOF)
	{
		write(STDOUT_FILENO, "exit\n", 5);
		exit(EXIT_FAILURE);
	}
	return(read);
}