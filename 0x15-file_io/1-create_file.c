#include "main.h"

/**
 * create_file - create a file
 * @filename: input string file name
 * @text_content: input string content
 *
 * Return: 1 on success,and -1 if error
 */
int create_file(const char *filename, char *text_content)
{
	int fd, buffer_size;

	buffer_size = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[buffer_size] != '\0')
		buffer_size++;
	if (text_content != NULL)
		write(fd, text_content, buffer_size);
	return (1);
}
