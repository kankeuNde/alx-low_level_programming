#include "main.h"

/**
 * read_textfile - reads a text and prints it to the STDOUT POSIX
 * @filename: filename
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ofd, rfd, wfd;
	char *buffer;

	buffer = malloc(sizeof(char) * (letters + 1));
	ofd = open(filename, O_RDONLY);
	rfd = read(ofd, buffer, letters);
	if ((filename == NULL) | (ofd == -1) | (rfd == -1))
	{
		free(buffer);
		return (0);
	}
	buffer[rfd] = '\0';
	wfd = write(STDOUT_FILENO, buffer, rfd);
	if (wfd != rfd)
		return (0);
	free(buffer);
	close(ofd);
	return (rfd);
}
