/*This program prints the las digit of a number.*/
#include "main.h"
/**
 *print_last_digit - Entry point
 *
 *Description: This is the main function that prints the alphabet.
 *Return: Always returns 0 for successful execution.
 *
 */
int print_last_digit(int n)
{
int l;
l = n % 10;
if (l < 0)
{
l = l * -1;
}
_putchar(l + '0');
return (l);
}
