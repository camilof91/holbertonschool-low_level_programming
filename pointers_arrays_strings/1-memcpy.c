/*This program fills memory with a bute.*/
#include "main.h"
/**
 *_memcpy -   fills memory with a constant byte
 *@src: values to copi
 *@dest: memory to fill
 *@n: bytes of the memory
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
