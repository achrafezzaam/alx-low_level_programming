#include "main.h"
/**
 * create_file - Title
 * @filename: argument 1
 * @text_content: argument 2
 *
 * Return: -1 on error 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int opn, wrt, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(opn, text_content, len);
	if (opn == -1 || wrt == -1)
		return (-1);
	close(opn);
	return (1);
}
