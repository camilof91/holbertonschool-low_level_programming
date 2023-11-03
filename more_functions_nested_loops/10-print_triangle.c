/*This program prints the alphabet in lowercase letters.*/
#include "main.h"
/**
 *print_triangle - Entry point
 *
 *Description: This is the main function that prints the alphabet.
 *@size:
 *Return: Always returns 0 for successful execution.
 *e
 */
void print_triangle(int size)
{
int x, y, z;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (x =0; x < size; x++)
{
for (y = size - x; y > 1; y--)
{
_putchar(32);
}
for (z = 0; z<= x; z++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
