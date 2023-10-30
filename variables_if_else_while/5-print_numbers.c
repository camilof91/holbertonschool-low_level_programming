/*This program prints the numbers from 0 to 9*/
#include <stdio.h>
/**
*main - Entry point
*
*Description: This is the main function that prints 
*the firts ten numbers from 0 to 9.
*Return: Always returns 0 for successful execution.
*
*/
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
printf("%d", num);
}
printf("\n");
return (0);
}
