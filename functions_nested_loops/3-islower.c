/*This program identify if there are caracter is in lowercase .*/
#include "main.h"
/**
 *_islower - Entry point
 *
 *Description: This is the main function that prints the alphabet.
 *c: the character to be verified
 *Return: 1 for lowercase and 0 for other kind of caracter
 *
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
