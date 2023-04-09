#include "main.h"
/**
 * create_file - Create a file with a given content
 * @filename: The name of the created file
 * @text_content: The content of the newly created file
 *
 * Description: create a new file with the name filename
 * with the content pointed to by text_content
 * Return: return -1 if the filename wasn't given
 * or the user hasn't the write permissions. Otherwise return 1
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len; text_content[len];)
			len++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
