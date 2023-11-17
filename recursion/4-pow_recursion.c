#include "main.h"
/**
*_pow_recursion - Entry point
*
*Description: This is the main function that prints the alphabet.
*@x: int
*@y: int pow
* Return: Always returns -1, or 1 
*
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y != 0)
{
return (x * _pow_recursion(x, y - 1));
}
else
{
return (1);
}
}
