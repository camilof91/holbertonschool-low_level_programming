/*This program become a string to integer.*/
#include "main.h"
/**
 *_atoi - Entry point
 *
 *Description: This is the main function become a string to integer.
 *@s: this is a string that will become to integer
 *Return: Always returns 0 for successful execution.
 *
 */
int _atoi(char *s)
{
int x;
int i, minus, result;
i = minus = result = x = 0;
minus = -1;
while (s[i] != '\0')
{
if (s[i] == '-')
minus *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
result *= 10;
result -= (s[i] - '0');
x = 1;
}
else if (x == 1)
break;
i++;
}
result *= minus;
return (result);
}
