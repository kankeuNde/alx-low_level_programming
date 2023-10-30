#include "main.h"
/**
 * append_text_to_file - append text to file
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 / -1 in case of success / failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ofd, content_size, wfd;

	content_size = 0;
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[content_size] != '\0')
		content_size++;
	ofd = open(filename, O_WRONLY | O_APPEND);
	if (ofd == -1)
		return (-1);
	wfd = write(ofd, text_content, content_size);
	if (wfd == -1)
		return (-1);
	return (1);
}
