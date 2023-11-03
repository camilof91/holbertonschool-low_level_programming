/*This program identif what kind of character is.*/
#include "main.h"
/**
 *_isupper - Entry point
 *
 *Description: This is the main function that prints the alphabet.
 *@c: caracter to evaluate
 * Return: Always returns 0 for successful execution.
 *
 * */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
