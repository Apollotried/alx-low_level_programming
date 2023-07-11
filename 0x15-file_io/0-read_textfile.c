#include "main.h"

/**
 * read_textfile - reads and prints
 * @filename: file
 * @letters: nmb of letters
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t rd, wr;
	char *b;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	b = malloc(sizeof(char) * (letters));
	if (!b)
		return (0);

	rd = read(f, b, letters);
	wr = write(STDOUT_FILENO, b, rd);

	close(f);

	free(b);

	return (wr);
}
