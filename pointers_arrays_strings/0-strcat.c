/*This program prints the alphabet in lowercase letters.*/
#include "main.h"
#include <stdlib.h>
/**
 *_strncat - Entry point
 *
 *Description: This is the main function that prints the alphabet.
 *@dest: arrive end
 *@src: arrive to copy
 *Return: Always returns 0 for successful execution.
 *
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
if (dest == NULL)
{
return (NULL);
}
if (src == NULL)
{
return (dest);
}
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
