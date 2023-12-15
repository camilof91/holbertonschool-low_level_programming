#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

void print_error(int code, const char *file_name) {
    switch (code) {
        case 97:
            dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
            break;
        case 98:
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
            break;
        case 99:
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
            break;
        case 100:
            dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_name);
            break;
        default:
            break;
    }
    exit(code);
}

int main(int argc, char *argv[]) {
    int fd_from, fd_to;
    ssize_t read_bytes, write_bytes;
    char buffer[BUFFER_SIZE];

    if (argc != 3) {
        print_error(97, NULL);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        print_error(98, argv[1]);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if (fd_to == -1) {
        print_error(99, argv[2]);
    }

    while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        write_bytes = write(fd_to, buffer, read_bytes);
        if (write_bytes != read_bytes) {
            print_error(99, argv[2]);
        }
    }

    if (read_bytes == -1) {
        print_error(98, argv[1]);
    }

    if (close(fd_from) == -1 || close(fd_to) == -1) {
        print_error(100, NULL);
    }

    return 0;
}
