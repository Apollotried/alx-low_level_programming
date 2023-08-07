#include "main.h"
/**
 * read_textfile - read and print
 * @filename: name of file
 * @letters: nb of letters
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, b, a;
	char *buf;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	b = read(fd, buf, letters);
	a = write(STDOUT_FILENO, buf, b);

	free(buffer);
	close(fd);

	return (a);
}
