/*This program prints numbers.*/
#include "main.h"
/**
 *print_numbers - Entry point
 *
 *Description: This is the main function that prints the alphabet.
 *Return: Always returns 0 for successful execution.
 *
 */
void print_numbers(void)
{
int number;
for (number = 0; number < 10; number++)
{
_putchar(number + '0');
}
_putchar('\n');
}
