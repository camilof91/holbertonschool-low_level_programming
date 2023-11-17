#include <stdio.h>
#include <stdlib.h>
/**
*is_digit - Verifica si una cadena contiene solo dígitos
*@str: La cadena para verificar
*Return: 1 si todos los caracteres son dígitos, 0 de lo contrario
*/
int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}
/**
*main - Punto de entrada del programa
* @argc: Número de argumentos pasados al programa
* @argv: Matriz de cadenas que contiene los argumentos
*Return: 0 si es exitoso, 1 si hay un error
*/
int main(int argc, char *argv[])
{
int sum = 0, i;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (!is_digit(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
