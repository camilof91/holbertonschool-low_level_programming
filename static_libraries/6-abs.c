/*This program prints the abs value of a number.*/
#include "main.h"
/**
 *_abs - Entry point
 *
 *Description: This is the main function that prints the alphabet.
 *@c:it is a number to evaluate
 *Return: Always returns 0 for successful execution.
 *
 */
int _abs(int c)
{
if (c < 0)
{
int abs;
abs = c * -1;
return (abs);
}
return (c);
}
