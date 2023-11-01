/*This program prints the alphabet in lowercase letters.*/
#include "main.h"

/**
*print_alphabet - Entry point
*
*Description: This is the main function that prints the alphabet.
*Return: void
*
*
*/

void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
