#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: content
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int f, n, r;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	r = write(f, text_content, n);

	if (r == -1)
	{
		close(f);
		return (-1);
	}
	close(f);

	return (1);
}
