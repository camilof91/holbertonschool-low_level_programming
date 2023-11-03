/*This program veryfy if it a number o letters.*/
#include <stdio.h>
/**
 *_isdigit - Entry point
 *
 *Description: This is the main function that prints the alphabet.
 *@c: number to verify
 *Return: Always returns 0 for successful execution.
 *
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
