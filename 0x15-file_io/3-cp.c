#include "main.h"

/**
 * main - main entry point
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_src, fd_dst, fd_rd, fd_wr;
	char buffer[1024];

	fd_rd = 1024;
	fd_wr = 0;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	       	exit(97);
	}
	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_dst = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dst == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_src);
		exit(99);
	}
	while (fd_rd == 1024)
	{
		fd_rd = read(fd_src, buffer, 1024);
		if (fd_rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		fd_wr = write(fd_dst, buffer, fd_rd);
		if (fd_wr < fd_rd)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(fd_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}
	if (close(fd_dst) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dst);
		exit(100);
	}
	return (0);
}
