/*This program prints the numbers of base 16*/
#include <stdio.h>
/**
*main - Entry point
*
*Description: This is the main function that prints the numbers.
*of base 16 using putchar
*Return: Always returns 0 for successful execution.
*
*/
int main(void)
{
int num;
for (num = 0; num < 16; num++)
{
if (num < 10)
{
putchar(num + '0');
}
else
{
putchar(num - 10 + 'a');
}
}
putchar('\n');
return (0);
}
