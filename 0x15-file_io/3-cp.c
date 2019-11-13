#include "holberton.h"
/**
* main - appends text at the end of a file.
* @arc: pointer to filename string.
* @argv: s a NULL terminated string to write to the file
* Return: 0 if fails or 1 in other case.
*
*/
#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif
int main(int argc, char **argv)
{
	int fileFrom, fileTo, openFlags, r, w;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileFrom = open(argv[1], O_RDONLY);
	openFlags = O_CREAT | O_WRONLY | O_TRUNC;
	fileTo = open(argv[2],
	openFlags, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	r = read(fileFrom, buf, BUF_SIZE);
	if (r == -1 || fileFrom == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	w = write(fileTo, buf, r);
	if (w == -1 || fileTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(fileTo) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fileTo);
		exit(100);
	}
	if (close(fileFrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fileFrom);
		exit(100);
	}
	return (0);
}
