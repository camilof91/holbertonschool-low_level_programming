/*This program prints the alphabet in lowercase in reverse.*/
#include <stdio.h>
/**
*main - Entry point
*
*Description: This is the main function that prints the alphabet.
*in reverse from z to a
*Return: Always returns 0 for successful execution.
*
*/
int main(void)
{
char letra;
for (letra = 'z'; letra >= 'a'; letra--)
{
putchar(letra);
}
putchar('\n');
return (0);
}
