#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 * Return: 0 on success, or the corresponding error code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w;
	char buffer[BUFFER_SIZE];

	/* Check for the correct number of arguments */
	if (argc != 3)
	{
	       write(STDERR_FILENO, "Usage: ", 7);
	       write(STDERR_FILENO, argv[0], 1); /* argv[0] is the program name */
	       write(STDERR_FILENO, " file_from file_to\n", 20);
	       exit(97);
	}

	/* Open the source file in read-only mode */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file ", 29);
		write(STDERR_FILENO, argv[1], 1);
		write(STDERR_FILENO, "\n", 1);
		exit(98);
	}

	/* Open or create the destination file */
	/*in write-only mode, truncating it if it already exists */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		write(STDERR_FILENO, "Error: Can't write to ", 23);
		write(STDERR_FILENO, argv[2], 1);
		write(STDERR_FILENO, "\n", 1);
		exit(99);
	}

	/* Read and write in blocks until nothing is left to read */
	do
	{
		r = read(fd_from, buffer, BUFFER_SIZE);
		if (r == -1)
		{
			write(STDERR_FILENO, "Error: Can't read from file ", 29);
			write(STDERR_FILENO, argv[1], 1);
			write(STDERR_FILENO, "\n", 1);
			exit(98);
		}
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
		{
			write(STDERR_FILENO, "Error: Can't write to ", 23);
			write(STDERR_FILENO, argv[2], 1);
			write(STDERR_FILENO, "\n", 1);
			exit(99);
		}
	}
	while (r == BUFFER_SIZE);
	/* Close the file descriptors */
	if (close(fd_from) == -1)
	{
		write(STDERR_FILENO, "Error: Can't close fd ", 23);
		write(STDERR_FILENO, "file_from", 1);
		write(STDERR_FILENO, "\n", 1);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		write(STDERR_FILENO, "Error: Can't close fd ", 23);
		write(STDERR_FILENO, "file_to", 1);
		write(STDERR_FILENO, "\n", 1);
		exit(100);
	}
	return (0);
}
