#include "main.h"
int find_sqrt(int n, int guess);
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n. If n doesn't have a natural
 * square root, return -1.
 */
int _sqrt_recursion(int n)
{
/* Base case: if n is negative or 0, it doesn't have a natural square root */
if (n < 0)
{
return -1;
} 
if (n == 0 || n == 1)
{ 
return n;
}
/* Recursive call: find the square root of the remainder of n */
return find_sqrt(n, 2);
}
/**
 * find_sqrt - Helper function to find the square root using recursion.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n if found, otherwise -1.
 */
int find_sqrt(int n, int guess)
{
/* Base case: if the square of the guess is equal to n, the root is found */
if (guess * guess == n)
{
return guess;
}
/* If the guess is greater than half of n, there is no natural square root */
if (guess > n / 2)
{
return (-1);
}
/* Recursive call: try the next guess */
return find_sqrt(n, guess + 1);
}
