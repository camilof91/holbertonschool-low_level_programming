/*This program prints a string*/
#include "main.h"
/**
 *_puts - Entry point
 *
 *Description: This is the main function that prints a string.
 *@str: pointer to char
 *Return: Always returns 0 for successful execution.
 *e
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
