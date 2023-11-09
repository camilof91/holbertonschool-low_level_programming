/*This program locate a character in a string.*/
#include "main.h"
/**
 *_strchr - Entry point
 *
 *Description: This is the main function locate a character in a string.
 *@s: string
 *@c: character
 *Return: return s
 *
 */
char *_strchr(char *s, char c)
{

while (*s != '\n')
{
if (*s == c)
{
return (s);
}
++s;
}
return (0);
}
