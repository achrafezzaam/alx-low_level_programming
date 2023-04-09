#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Read a file and print to POSIX stdout
 * @filename: The file to be read
 * @letters: the number of letters to read and print
 *
 * Description: Open the file with name @filename
 * then reads @letters number of letters then print them
 * to the stdout
 * Return: Return 0 if @filename is empty or buffer is NULL.
 * Otherwise return the read letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);
	return (w);
}
