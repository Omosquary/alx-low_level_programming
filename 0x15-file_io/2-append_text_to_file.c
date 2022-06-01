#include "main.h"

/**
 * append_text_to_file - is a function that adds text to a file
 * @filename: is the name of the file to be created
 * @text_content: is the text to be written in the file
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int x = 0;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	while (text_content && text_content[x])
	{
		x++;
	}

	write(fd, text_content, x);
	close(fd);

	return (1);
}
