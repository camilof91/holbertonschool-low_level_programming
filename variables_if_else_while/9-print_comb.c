/*This program prints the numbers all possible combinations of single-digit numbers*/
#include <stdio.h>
/**
*main - Entry point
*
*Description: This is the main function that prints the alphabet.
*Return: Always returns 0 for successful execution.
*
*/
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
if (num < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
