#include <stdio.h>
/**
*This main display the alphabet on lowercase
*
*
*
*return 0 successful
*/
int main(void)
{
char letra;
for (letra = 'a'; letra <= 'z'; letra++)
{
putchar(letra);
}
putchar('\n');
return (0);
}
