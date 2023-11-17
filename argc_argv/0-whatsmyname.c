#include <stdio.h>
/**
 *main - Entry point of the program
 *@argc: Number of arguments passed to the program
 *@argv: Array of strings containing the arguments
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argc;/* This line is to silence the unused parameter warning */
printf("%s\n", argv[0]);
return 0;
}
