#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

char *create_buffer(char *file);
void close_file(int fd);

int main(int argc, char *argv[])
{
    int from, to, rd, wr;
    char *buffer;
    struct stat st;  // Mover la declaración al principio del bloque

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    buffer = create_buffer(argv[2]);

    from = open(argv[1], O_RDONLY);
    if (from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        free(buffer);
        exit(98);
    }

    // Verificar si el archivo de destino ya existe
    if (stat(argv[2], &st) == 0)
    {
        // El archivo de destino ya existe
        if (!(st.st_mode & S_IWUSR))
        {
            // No tiene permisos de escritura, manejar el error
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close_file(from);
            free(buffer);
            exit(99);
        }
    }

    to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[2]);
        close_file(from);
        free(buffer);
        exit(99);
    }

    do
    {
        rd = read(from, buffer, 1024);
        if (rd == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
            close_file(from);
            close_file(to);
            free(buffer);
            exit(98);
        }

        wr = write(to, buffer, rd);
        if (wr == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close_file(from);
            close_file(to);
            free(buffer);
            exit(99);
        }
    } while (rd > 0);

    close_file(from);
    close_file(to);
    free(buffer);

    return (0);
}

char *create_buffer(char *file)
{
    char *buffer;

    buffer = malloc(sizeof(char) * 1024);

    if (buffer == NULL)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
        exit(99);
    }

    return (buffer);
}

void close_file(int fd)
{
    int c;

    c = close(fd);

    if (c == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}
