/*This program print half of a string.*/
#include "main.h"
/**
 *puts_half - Entry point
 *
 *Description: This is the main function that print half of a string.
 *@str: that the string
 *Return: Always returns 0 for successful execution.
 *
 */
void puts_half(char *str)
{
int len = 0, i = 0;
 while (str[len] != '\0')
{
len++;
}
 if (len % 2 == 1)
   {
     i = (len - 1) / 2;
   }
 else
   {
     i = len / 2;
   }
while (i < len)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
