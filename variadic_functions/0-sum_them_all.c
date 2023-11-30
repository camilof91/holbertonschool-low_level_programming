#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of its parameters.
 * @n: The number of parameters.
 *
 * Return: Sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;
	int current_arg;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		current_arg = va_arg(args, int);
		sum += current_arg;
	}
	va_end(args);
	return (sum);
}
