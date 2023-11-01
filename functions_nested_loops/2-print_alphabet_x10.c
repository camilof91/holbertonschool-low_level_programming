/*This program prints the alphabet 10 times in lowercase letters.*/
#include "main.h"
/**
*print_alphabet_x10 - Entry point
*
*Description: This is the main function that prints the alphabet.
*Return: void
*
*/
void print_alphabet_x10(void)
{
char a;
int c;
for (c = 0; c < 10; c++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
