#include "main.h"
/**
 * read_textfile - Title
 * @filename: argument 1
 * @letters: argument 2
 *
 * Return: return wrt
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wrt;
	char *p;

	if (filename == NULL)
		return (0);
	p = malloc(sizeof(char) * letters);
	if (p == NULL)
		return (0);
	opn = open(filename, O_RDONLY);
	rd = read(opn, p, letters);
	wrt = write(STDOUT_FILENO, p, rd);
	if (opn == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(p);
		return (0);
	}
	free(p);
	close(opn);
	return (wrt);
}
