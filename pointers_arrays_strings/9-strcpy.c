/*This program prints the alphabet in lowercase letters.*/
#include "main.h"
/**
 **_strcpy - Entry point
 *
 *Description: This is the main function that prints the alphabet.
 *@dest: arrive for to do a copy
 *@scr: arrive to copy
*Return: Always returns 0 for successful execution.
 *
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src [i];
}
dest[i] = '\0';
return (dest);
}
