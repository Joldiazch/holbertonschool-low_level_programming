#include "holberton.h"
/**
* create_file - creates a file.
* @filename: pointer to filename string.
* @text_content: s a NULL terminated string to write to the file
* Return: 0 if fails or 1 in other case.
*
*/
int create_file(const char *filename, char *text_content)
{
	if (filename)
	{
		int fd, w;

		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IWUSR | S_IRUSR);
		if (fd < 0)
		{
			return (-1);
		}
		if (!text_content)
		{
			text_content = "";
		}
		w = write(fd, text_content, strlen(text_content));
		if (w < 0)
		{
			return (-1);
		}
		close(fd);
		return (1);
	}
	return (-1);
}
