/*This program prints numbers.*/
#include "main.h"
/**
 *print_most_numbers - Entry point
 *
 *Description: This is the main function that prints numbers.
 *Return: Always returns 0 for successful execution.
 *
 */
void print_most_numbers(void)
{
int num;
for (num = 0; num < 10; num++)
{
if (num != 2 && num != 4)
{
_putchar(num + '0');
}
}
_putchar('\n');
}
