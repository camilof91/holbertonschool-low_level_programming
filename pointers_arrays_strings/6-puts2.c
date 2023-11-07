/*This program prints in reverse a string.*/
#include <stdio.h>
#include "main.h"
/**
*puts2 - Entry point
*
*Description: This is the main function that print in reverse a string.
*@str: text to print
*Return: Always returns 0 for successful execution.
*
*/
void puts2(char *str)
{
int len = 0, i = 0;
while (str[len] != '\0')
{
len++;
}
len--;
while (i <= len)
{
_putchar(str[i]);
i = i + 2;
}
_putchar('\n');
}
