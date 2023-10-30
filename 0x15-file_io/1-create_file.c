#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: file content
 *
 * Return: 1 on success and -1 if failure1
 */
int create_file(const char *filename, char *text_content)
{
	int ofd, wfd, content_size;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	content_size = 0;
	while (text_content[content_size] != '\0')
		content_size++;

	ofd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (ofd == -1)
	{
		return (-1);
	}
	wfd = write(ofd, text_content, content_size);
	if (wfd == -1)
		return (-1);
	close(ofd);
	return (1);
}
