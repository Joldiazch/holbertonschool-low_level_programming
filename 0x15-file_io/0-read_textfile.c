#include "holberton.h"
/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: pointer for head of lements.
* @letters: the number of letters it should read and print
* Return: 0 if fails or 1 in other case.
*
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fb, w, r;
	char *buf;

	fb = open(filename, O_RDONLY);
	if (fb < 0)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		return (0);
	}

	r = read(fb, buf, letters);
	if (r < 0)
	{
		free(buf);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, r);
	if (w < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fb);
	return (w);
}
