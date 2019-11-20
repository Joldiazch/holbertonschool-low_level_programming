#include "holberton.h"

char * _read_line(void)
{
	char *read;
	size_t size = 1024;

	write(STDOUT_FILENO, "MiShellaDa $: ", 15);
	read = malloc(1024 * sizeof(char));
	getline(&read, &size, stdin);
	return(read);
}