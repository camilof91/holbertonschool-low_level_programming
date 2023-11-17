#include <stdio.h>
/**
 *main - Punto de entrada del programa
 *@argc: Número de argumentos pasados al programa
 *@argv: Matriz de cadenas que contiene los argumentos
 *Return: Siempre 0 (éxito)
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
