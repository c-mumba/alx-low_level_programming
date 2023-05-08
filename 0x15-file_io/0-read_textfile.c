#include "main.h"

/**
 * read_textfile - read  file
 * @filename: file name
 * @letters:  letters
 * Return: If filename
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t readd, writtenn;
	int fd;

	if (!(filename && letters))
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	readd = read(fd, buffer, letters);
	close(fd);
	if (readd < 0)
	{
		free(buffer);
		return (0);
	}
	if (!readd)
		readd = letters;
	writtenn = write(STDOUT_FILENO, buffer, readd);
	free(buffer);
	if (writtenn < 0)
		return (0);
	return (writtenn);
}
