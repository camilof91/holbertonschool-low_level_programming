/*This program prints the alphabet in lowercase expect q and e letters.*/
#include <stdio.h>
/**
*main - Entry point
*
*Description: This is the main function that prints the alphabet.
*except q and e
*Return: Always returns 0 for successful execution.
*
*/
int main(void)
{
char letra;
for (letra = 'a'; letra <= 'z'; letra++)
{
if (letra != 'q' && letra != 'e')
putchar(letra);
}
putchar('\n');
return (0);
}
