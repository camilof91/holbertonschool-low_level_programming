#include "main.h"
/**
 * leet - Codify a string in 1337.
 * @str:string to codify.
 * Return: str pointer to char.
 */
char *leet(char *str)
{
char *first = "aAeEoOtTlL";
char *replace = "4433007711";
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; first[j] != '\0'; j++)
{
if (str[i] == first[j])
{
str[i] = replace[j];
break;
}
}
}
return (str);
}
