#include "main.h"
#include <stdlib.h>
/**
 * _calloc - asigna memoria para un array de nmemb elementos,
 * cada uno de tamaño size bytes
 * @nmemb: número de elementos en el array
 * @size: tamaño de cada elemento en bytes
 * Return: *p a la memoria asignada, NULL si la asignación falla
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
/* Declara una variable de tipo puntero para almacenar la memoria asignada*/
unsigned int i;
/* Declara una variable para la iteración*/
if (nmemb == 0 || size == 0)
return (NULL);
/* Verifica si nmemb o size es igual a cero y devuelve NULL en ese caso*/
/* Asigna memoria para nmemb elementos, cada uno de size bytes*/
p = malloc(nmemb * size);
/* Verifica si la asignación de memoria fue exitosa*/
if (p == NULL)
return (NULL);
/* Inicializa la memoria asignada a 0 */
for (i = 0; i < nmemb * size; i++)
p[i] = 0;
/* Devuelve el puntero a la memoria asignada e inicializada */
return (p);
}
