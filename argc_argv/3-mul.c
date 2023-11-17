#include <stdio.h>
#include <stdlib.h>

/**
 * main - Punto de entrada del programa
 * @argc: Número de argumentos pasados al programa
 * @argv: Matriz de cadenas que contiene los argumentos
 *
 * Return: 0 si es exitoso, 1 si hay un error
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
/* Convertir los argumentos a enteros */
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
/* Calcular la multiplicación */
result = num1 * num2;
/* Imprimir el resultado */
printf("%d\n", result);
return (0);
}
