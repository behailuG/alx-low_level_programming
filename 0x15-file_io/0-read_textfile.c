#include "main.h"
/**
 * read_textfile - read text content of file
 * @filename: file name
 * @letters: number of letters
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;
	char *length = malloc(sizeof(char *) * letters);

	if (length NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);
	length = read(fd, length, letters);
	write(STDOUT_FILENO, length, rd);

	free(length);
	close(fd);
	return (rd);
}
