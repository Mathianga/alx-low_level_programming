#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: number of variables whose sum is to be calculated
 * Return: 0 If n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list names;
	unsigned int i, sum = 0;

	va_start(names, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(names, int);
	}

	va_end(names);

	return (sum);
}
