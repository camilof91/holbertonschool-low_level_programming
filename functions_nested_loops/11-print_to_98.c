/*This program prints the number until 98.*/
#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - Entry point
 *@n: number to star
 *Description: This is the main function that prints the numbers
 *form n to 98
 *Return: Always returns 0 for successful execution.
 *
 */
void print_to_98(int n)
{
int num = n;
if (num < 98)
{
for (; num <= 98; num++)
{
printf("%d", num);
if (num != 98)
{
printf(", ");
}
else
{
printf("\n");
}
}
}
else if (num > 98)
{
for (; num >= 98; num--)
{
printf("%d", num);
if (num != 98)
{
printf(", ");
}
else
{
printf("\n");
}
}
}
else
{
printf("%d\n", num);
}
}
