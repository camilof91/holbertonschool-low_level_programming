#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* 
 *the funtion main
 *In the main function, an integer random number is generated, 
 *and it is checked that if it is negative, it is converted 
 *to a positive number. The last digit is calculated by 
 *taking the modulo 10. If the number is zero, the 
 *result is printed directly without entering the loop.
 *
 *
*/
int main(void)
{
  int n;
  int num = 0;  
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  num = n;
  if (num < 0)
    {
      num = n * -1;
    }
  if (num == 0)
    {
      printf("Last digit of %d is %d\n",n,num);
    }
  else
    {
      while(num > 0)
	{
	  int aux = num % 10;
	  printf("Last digit of %d is %d\n", n , aux);
	  num = -1;
	}
    }

    return (0);
}
