#include "main.h"

/**
 * read_textfile - t
 *
 * @filename: v
 *
 * @letters: s
 *
 * Return: null
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, let, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		free(text);
		return (0);
	}

	let = read(f, text, letters);

	w = write(STDOUT_FILENO, text, let);

	close(f);

	return (w);
}Z
