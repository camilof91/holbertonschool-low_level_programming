#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
/* Caso base: si el primer carácter es nulo, la longitud es 0 */
if (*s == '\0')
return 0;
/* Llamada recursiva: devuelve la longitud del resto de la cadena */
return 1 + _strlen_recursion(s + 1);
}
