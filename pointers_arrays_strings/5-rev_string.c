/*This program prints in reverse a string.*/
#include "main.h"
/**
 *rev_string - Entry point
 *
 *Description: This is the main function that print in reverse a string.
 *@s: text to print
 *Return: Always returns 0 for successful execution.
 *
 */
void rev_string(char *s)
{
int len =0, i = 0;
char aux;
while (s[len] != '\0')
{
len++;
}
len--;
for (i = 0; i < len; i++)
{
aux = s[i];
s[i] = s[len];
s[len] = aux;
len--;
} 
}
