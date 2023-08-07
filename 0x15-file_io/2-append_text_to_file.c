#include "main.h"
/**
 * append_text_to_file - appends at the end
 * @filename: file name
 * @text_content: content
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, rw, l;

	l = 0;
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		f = open(filename, O_WRONLY | O_APPEND);
		if (f == -1)
			return (-1);
		while (*(text_content + l) != '\0')
			l++;

		rw = write(f, text_content, l);

		if (rw == -1)
		{
			close(f);
			return (-1);
		}
	}
	close(f);

	return (1);
}
