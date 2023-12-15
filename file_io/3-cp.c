#include "main.h"
#include <unistd.h>

/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
    if (file_from == -1)
    {
        write(STDERR_FILENO, "Error: Can't read from file ", 29);
        write(STDERR_FILENO, argv[1], 1);
        write(STDERR_FILENO, "\n", 1);
        exit(98);
    }
    if (file_to == -1)
    {
        write(STDERR_FILENO, "Error: Can't write to ", 23);
        write(STDERR_FILENO, argv[2], 1);
        write(STDERR_FILENO, "\n", 1);
        exit(99);
    }
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    int file_from, file_to, err_close;
    ssize_t nchars, nwr;
    char buf[1024];

    if (argc != 3)
    {
        write(STDERR_FILENO, "Usage: ", 7);
        write(STDERR_FILENO, argv[0], 1); // argv[0] is the program name
        write(STDERR_FILENO, " file_from file_to\n", 20);
        exit(97);
    }

    file_from = open(argv[1], O_RDONLY);
    file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    error_file(file_from, file_to, argv);

    nchars = 1024;
    while (nchars == 1024)
    {
        nchars = read(file_from, buf, 1024);
        if (nchars == -1)
            error_file(-1, 0, argv);
        nwr = write(file_to, buf, nchars);
        if (nwr == -1)
            error_file(0, -1, argv);
    }

    err_close = close(file_from);
    if (err_close == -1)
    {
        write(STDERR_FILENO, "Error: Can't close fd ", 23);
        write(STDERR_FILENO, "file_from", 1);
        write(STDERR_FILENO, "\n", 1);
        exit(100);
    }

    err_close = close(file_to);
    if (err_close == -1)
    {
        write(STDERR_FILENO, "Error: Can't close fd ", 23);
        write(STDERR_FILENO, "file_to", 1);
        write(STDERR_FILENO, "\n", 1);
        exit(100);
    }
    return (0);
}
