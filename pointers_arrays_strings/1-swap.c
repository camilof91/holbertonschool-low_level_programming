/*This program changes the value assigned between two variables.*/
#include "main.h"
/**
 *swap_int - Entry point
 *
 *Description: This is the main function change the assigned value
 *between two variables
 *@a: pointer int &a
 *@b: pointer int &b
*Return: Always returns 0 for successful execution.
 *e
 */
void swap_int(int *a, int *b)
{
int aux = *a;
*a = *b;
*b = aux;
}
