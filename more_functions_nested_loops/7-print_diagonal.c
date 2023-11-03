/*This program prints a daigaonal.*/
#include "main.h"
/**
*print_diagona - Entry point
*
*Description: This is the main function that prints a diagonal.
*@n:number of diagonal 
*Return: Always returns 0 for successful execution.
*
*/
void print_diagonal(int n)
{
int aux, spa;
if (n <= 0)
{
_putchar('\n');
}
else
{     
for (aux = 0; aux < n; aux++)
{
for (spa = 0; spa < aux; spa++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
