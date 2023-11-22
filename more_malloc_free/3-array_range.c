#include "main.h"
#include <stdlib.h>
/**
 * array_range - crea un array de enteros
 * @min: valor mínimo
 * @max: valor máximo
 * Return: puntero al array creado
 */
int *array_range(int min, int max)
{
int *arr, i = 0, t = min;
/* Declaración de variables */
if (min > max)
return (0);
/*Verifica si el valor mínimo es mayor que*/
/*  el valor máximo y devuelve NULL si es así*/
arr = malloc((max - min + 1) * sizeof(int));
/* Asigna memoria para el array de enteros */
if (arr == NULL)
return (0);
/* Verifica si la asignación de memoria fue exitosa*/
while (i <= max - min)
arr[i++] = t++;
/* Llena el array con valores desde min hasta max*/
return (arr);
/* Devuelve el puntero al array creado*/
}
