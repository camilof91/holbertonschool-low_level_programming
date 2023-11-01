/*This program prints the sign of a number*/
#include "main.h"
/**
*print_sign - Entry point
*
*Description: This is the main function that prints the alphabet.
*@n:it is a number to evaluate.
*Return: Always returns 0 for successful execution.
*
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
