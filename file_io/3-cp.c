#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - prints an error message and exits the program with a specified code
 * @code: the exit code
 * @message: the error message to print
 * Return: void
 */
void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: an array of arguments
 * Return: 0 on success, other values on failure
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t n_read, n_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	/* Open the source file with read-only permissions */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file");

	/* Open or create the destination file with read-write permissions, truncating it if it already exists */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to file");

	/* Copy the content of the source file to the destination file */
	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written == -1 || n_written != n_read)
			error_exit(99, "Error: Can't write to file");
	}

	/* Check for read error */
	if (n_read == -1)
		error_exit(98, "Error: Can't read from file");

	/* Close file descriptors */
	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd");

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd");

	return (0);
}
