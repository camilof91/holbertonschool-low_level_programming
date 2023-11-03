/*This program prints aline*/
#include "main.h"
/**
 *print_line - Entry point
 *
 *Description: This is the main function that prints a line.
 *@n:line size
 *Return: Always returns 0 for successful execution.
 *
 */
void print_line(int n)
{
int aux;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (aux = 0; aux < n; aux++)
{
_putchar(95);
}
_putchar('\n');
}
}
