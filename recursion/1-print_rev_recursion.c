/*This program prints the alphabet in lowercase letters.*/
#include "main.h"
/**
*main - Entry point
*
*Description: This is the main function that prints the alphabet.
*Return: Always returns 0 for successful execution.
*
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0') 
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
