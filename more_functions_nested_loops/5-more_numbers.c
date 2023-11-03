/*This program prints 10 times the numbers, from 0 to 14.*/
#include "main.h"
/**
 *more_numbers - Entry point
 *
 *Description: This is the main function that
 *prints 10 times the numbers, from 0 to 14
 *Return: Always returns 0 for successful execution.
 *
 */
void more_numbers(void)
{
int num, aux;
for (num = 0; num < 10; num++)
{
for (aux = 0;aux <= 14; aux++)
{
if (aux > 9)
{
_putchar((aux / 10) + '0');
}
_putchar((aux % 10) + '0');
}
_putchar('\n');
}
}
