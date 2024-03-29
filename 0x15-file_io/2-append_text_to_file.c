#include "main.h"
/**
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: file content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[count])
			count++;
		if (write(fd, text_content, count) == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
