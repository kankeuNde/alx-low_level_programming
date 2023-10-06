#include "main.h"

/**
 * read_textfile - read text file
 * @filename: path to the file to read
 * @letters: number of letters
 * Return: integer, number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, sz_r, sz_w;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	sz_r = read(fd, buffer, letters);
	sz_w = write(STDOUT_FILENO, buffer, sz_r);
	free(buffer);
	if (fd == -1 || sz_r == -1 || sz_w == -1 || sz_w != sz_r)
		return (0);
	close(fd);
	return (sz_w);
}
