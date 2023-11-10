#include "main.h"
/**
 * _strspn - Locates a character in a string
 * @s: This is the main C string to be scanned.
 * @accept: This is the string containing the list of characters to match in s
 * Return: return count
 **/
unsigned int _strspn(char *s, char *accept)
{
int count = 0;
while (*s) {
char *a = accept;
int found = 0;
while (*a) {
if (*s == *a) {
found = 1;
break;
}
a++;
}
if (!found) {
break;
}
count++;
s++;
}
return count;
}
