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
	int fd, buffer_size, w_flag;

	buffer_size = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		while (text_content[buffer_size] != '\0')
			buffer_size++;
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	w_flag = write(fd, text_content, buffer_size);
	if (fd == -1 || w_flag == -1)
		return (-1);
	return (1);
}
