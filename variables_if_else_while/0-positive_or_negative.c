#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 
 *betty style doc for function main goes there	\
 *This program shows you whether the number in 'n' 
 *is positive, negative, or zero.
*/
int main(void)
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n==0)
    {
      printf("%d is zero\n",n);
    }
  else if(n<0)
    {
      printf("%d is negative\n",n);
    }
  else if(n>0)
    {
      printf("%d is positive\n",n);
    }
  return (0);
}
