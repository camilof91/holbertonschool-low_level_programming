/*This program verify the length of a string*/
#include "main.h"
/**
 *_strlen - Entry point
 *@s: poiunter a char
 *Description: This is the main function that prints the alphabet.
 *Return: Always returns 0 for successful execution.
 *
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
