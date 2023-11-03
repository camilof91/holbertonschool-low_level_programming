/*This program print fizz buzz*/
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
int x;
for (x = 1; x <= 100; x++)
{
if ((x % 3 == 0) && (x % 5 == 0))
{
printf("FizzBuzz");
}
else if (x % 5 == 0)
{
printf("Buzz");
}
else if (x % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%d", x);
}
if (x != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
