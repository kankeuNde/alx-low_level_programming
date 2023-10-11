#include "main.h"
void _close(int fd);
#define MODE 0664
#define BUF_SIZE 1024
/**
 * main - main entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if succes
 */
int main(int argc, char *argv[])
{
	int fd_src, fd_dst, in, out;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_dst = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, MODE);
	if (fd_dst == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	in = 1;
	out = 1;
	while (in > 0 && out > 0)
	{
		in = read(fd_src, buf, BUF_SIZE);
		out = write(fd_dst, buf, in);
	}
	_close(fd_src);
	_close(fd_dst);
	return (0);
}
/**
 * _close - close a fie stream
 * @fd: filedescriptor of the file
 *
 * Return: void, nothing
 */
void _close(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
