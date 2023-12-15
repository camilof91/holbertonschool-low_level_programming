#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Copia el contenido de un archivo a otro.
 * @argc: El número de argumentos en la línea de comandos.
 * @argv: Un array que contiene los argumentos de la línea de comandos.
 * Devuelve: 0 en caso de éxito, o el código de error correspondiente en caso de fallo.
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, r, w;
    char buffer[BUFFER_SIZE];

    /* Verifica el número correcto de argumentos */
    if (argc != 3)
    {
        write(STDERR_FILENO, "Uso: ", 6);
        write(STDERR_FILENO, argv[0], 1); /* argv[0] es el nombre del programa*/
        write(STDERR_FILENO, " archivo_desde archivo_hacia\n", 29);
        exit(97);
    }

    /* Abre el archivo de origen en modo lectura */
    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        write(STDERR_FILENO, "Error: No se puede leer del archivo ", 38);
        write(STDERR_FILENO, argv[1], 1);
        write(STDERR_FILENO, "\n", 1);
        exit(98);
    }

    /* Abre o crea el archivo de destino en modo escritura, truncándolo si ya existe */
    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        write(STDERR_FILENO, "Error: No se puede escribir en ", 32);
        write(STDERR_FILENO, argv[2], 1);
        write(STDERR_FILENO, "\n", 1);
        exit(99);
    }

    /* Lee y escribe en bloques hasta que no quede nada por leer */
    do
    {
        r = read(fd_from, buffer, BUFFER_SIZE);
        if (r == -1)
        {
            write(STDERR_FILENO, "Error: No se puede leer del archivo ", 38);
            write(STDERR_FILENO, argv[1], 1);
            write(STDERR_FILENO, "\n", 1);
            exit(98);
        }

        w = write(fd_to, buffer, r);
        if (w == -1 || w != r)
        {
            write(STDERR_FILENO, "Error: No se puede escribir en ", 32);
            write(STDERR_FILENO, argv[2], 1);
            write(STDERR_FILENO, "\n", 1);
            exit(99);
        }

    } while (r == BUFFER_SIZE);

    /* Cierra los descriptores de archivo */
    if (close(fd_from) == -1)
    {
        write(STDERR_FILENO, "Error: No se puede cerrar el descriptor ", 41);
        write(STDERR_FILENO, "archivo_desde", 1);
        write(STDERR_FILENO, "\n", 1);
        exit(100);
    }

    if (close(fd_to) == -1)
    {
        write(STDERR_FILENO, "Error: No se puede cerrar el descriptor ", 41);
        write(STDERR_FILENO, "archivo_hacia", 1);
        write(STDERR_FILENO, "\n", 1);
        exit(100);
    }

    return (0);
}
