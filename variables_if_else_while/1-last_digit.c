#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point for the program
*the funtion main
*In the main function, an integer random number is generated,
*and it is checked that if it is negative, it is converted
*to a positive number. The last digit is calculated by
*taking the modulo 10. If the number is zero, the
*result is printed directly without entering the loop.
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
int num = 0;
int aux = 0;
srand(time(0));
n = rand() - RAND_MAX / 2;
num = n;
aux = num % 10;
if (aux < 6 && aux != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, aux);
}
else if (aux > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, aux);
}
else if (aux == 0)
{
printf("Last digit of %d is %d and is 0\n", n, aux);
}
return (0);
}
