#include "main.h"

/**
 * read_textfile - reads and print text of a file
 * @filename: blabla
 * @letters: blabla
 * Return: the number of letters in the file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t c;
	int fd;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);
	c = read(fd, &buf[0], letters);
	c = write(STDOUT_FILENO, &buf[0], c);
	close(fd);

	return (c);
}
