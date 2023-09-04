#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - ....................................
 * @filename:.........................................
 * @letters: .........................................
 * Return:............................................
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, re, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer ==  NULL)
		return (0);

	o = open(filename, O_RDONLY);
	re = read(o, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);

	if (o == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (wr);

}
