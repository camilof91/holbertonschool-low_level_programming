#include <stdio.h>

/**
 * main - Punto de entrada del programa
 * @argc: Número de argumentos pasados al programa
 * @argv: Matriz de cadenas que contiene los argumentos
 *
 * Return: Siempre 0 (éxito)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
