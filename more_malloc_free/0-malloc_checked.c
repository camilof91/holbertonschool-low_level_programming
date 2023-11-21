#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Asigna dinámicamente un bloque de
 * memoria y verifica si la asignación fue exitosa.
 * @b: Número de bytes a asignar.
 * Return: Puntero al bloque de memoria asignado.
 * Si la asignación falla, la función termina
 * el programa con un código de salida de 98.
 */
void *malloc_checked(unsigned int b)
{
void *p;
/* Puntero para almacenar la dirección de memoria del bloque asignado.*/
p = malloc(b);
/*Asignar memoria para un bloque de tamaño b utilizando malloc.*/
if (p == NULL)
{
exit(98);
/*Salir del programa con un código de salida de 98 si la asignación falla.*/
}
/*Verificar si malloc tuvo éxito en la asignación de memoria.*/
return (p);
/* Devolver el puntero al bloque de memoria asignado.*/
}

