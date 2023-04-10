#include "main.h"
/**
 * create_file - create file
 * @filename: file name
 * @text_content: text content
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content)
			count++;
		write(fd, text_content, count);
	}
	close(fd);
	return (1);
}
