#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - Concatena dos cadenas con un límite en la segunda cadena.
* @s1: Primera cadena.
* @s2: Segunda cadena.
* @n: Número máximo de caracteres de la segunda cadena a concatenar.
* Return: Puntero a la nueva cadena concatenada.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p; 
/* Puntero para almacenar la dirección de memoria del nuevo bloque.*/
unsigned int size1 = 0, size2 = 0, i;
/* Si s1 es NULL, establecerlo como una cadena vacía.*/
if (s1 == NULL)
{
s1 = "";
}	
/* Si s2 es NULL, establecerlo como una cadena vacía.*/
if (s2 == NULL)
{
s2 = "";
}
/* Calcular la longitud de la primera cadena (s1).*/
while (s1[size1] != '\0')
{
size1++;
}
/* Calcular la longitud de la segunda cadena (s2).*/
while (s2[size2] != '\0')
{
size2++;
}
/*Ajustar n para asegurarse de no */
/* copiar más caracteres de los que tiene s2.*/
if (n > size2)
{
n = size2;
}	
/* Asignar memoria para el nuevo bloque de memoria que*/ 
/* contendrá la cadena concatenada.*/
p = malloc((size1 + n + 1) * sizeof(char));
/* Verificar si malloc tuvo éxito en la asignación de memoria.*/
if (p == NULL)
{
return (0); 
/* Devolver NULL si malloc falla.*/
}
/* Copiar los caracteres de la*/ 
/* primera cadena (s1) al nuevo */
/* bloque de memoria.*/
for (i = 0; i < size1; i++)
{
p[i] = s1[i];
}
/*Copiar los */
/* primeros n caracteres de la segunda cadena (s2)*/ 
/* al nuevo bloque de memoria.*/
for (; i < (size1 + n); i++)
{
p[i] = s2[i - size1];
}
/*Agregar un carácter nulo al final del nuevo */
/*  bloque de memoria para formar una cadena válida.*/
p[i] = '\0';
/*Devolver el puntero al nuevo bloque de */
/* memoria que contiene la cadena concatenada.*/
return (p);
}
