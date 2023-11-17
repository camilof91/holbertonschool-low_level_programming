/*This program check for alphabetic chacater.*/
#include "main.h"
/**
*_isalpha - Entry point
*
*Description: This is the main function check for alphabetic characters.
*@c:the character to be verified.
*Return: Always returns 0 for successful execution.
*
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
