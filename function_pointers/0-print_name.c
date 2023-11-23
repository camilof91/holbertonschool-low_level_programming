#include "function_pointers.h"
#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name using a given printing function
 * @name: name to be printed
 * @f: pointer to a function that prints a name
 *
 * Description: This function takes a name and a function pointer
 * to a function that prints a name in a specific way. It then calls
 * the provided function to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
