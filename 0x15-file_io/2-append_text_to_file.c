#include "holberton.h"
/**
* append_text_to_file - appends text at the end of a file.
* @filename: pointer to filename string.
* @text_content: s a NULL terminated string to write to the file
* Return: 0 if fails or 1 in other case.
*
*/
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename)
	{
		int fd, w;

		fd = open(filename, O_WRONLY | O_APPEND);

		if (!text_content)
		{
			text_content = "";
		}
		w = write(fd, text_content, strlen(text_content));
		if (w < 0 || fd < 0)
		{
			return (-1);
		}
		close(fd);
		return (1);
	}
	return (-1);
}
